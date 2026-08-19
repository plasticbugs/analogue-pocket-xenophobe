//============================================================================
//  Sound CPU ROM cache.
//
//  The Sounds Good board has no timer: the sound 68000's execution rate *is*
//  the DAC output rate, so music tempo and pitch follow it directly. On the
//  real board the sound ROM answers with no wait states, but here the fetch
//  goes through rom_server and SDRAM, measured at 9-10 cycles of the 40 MHz
//  clock. fx68k samples DTACK partway through the bus cycle, so a late ack
//  costs a full wait state, and the sound bench measures roughly 20% fewer DAC
//  updates per second with a 10-cycle ROM than with an immediate one.
//
//  This is a plain direct-mapped cache over the read-only sound ROM, so there
//  is no coherency question: entries can never go stale. A hit answers in two
//  cycles, comfortably inside the DTACK window; a miss costs what it cost
//  before, plus the line fill. Music playback loops are small, so the hit rate
//  is high exactly where it matters.
//============================================================================
`default_nettype none

module snd_icache
#(
    parameter IDX_BITS = 11,                  // 2048 lines
    parameter ADDR_HI  = 17                   // word address width (256 KB ROM)
)
(
    input  wire                   clk,
    input  wire                   reset,

    // sound CPU side (level req, ack when data valid)
    input  wire [ADDR_HI:1]       cpu_addr,
    input  wire                   cpu_req,
    output logic [15:0]           cpu_q,
    output logic                  cpu_ack,

    // rom_server side
    output logic [ADDR_HI:1]      rom_addr,
    output logic                  rom_req,
    input  wire [15:0]            rom_q,
    input  wire                   rom_done
);

    localparam TAG_BITS = ADDR_HI - IDX_BITS; // remaining address bits

    wire [IDX_BITS-1:0] idx = cpu_addr[IDX_BITS:1];
    wire [TAG_BITS-1:0] tag = cpu_addr[ADDR_HI:IDX_BITS+1];

    logic [15:0]        data_ram [0:(1<<IDX_BITS)-1];
    logic [TAG_BITS:0]  tag_ram  [0:(1<<IDX_BITS)-1];   // {valid, tag}

    logic [15:0]        data_q;
    logic [TAG_BITS:0]  tag_q;
    always_ff @(posedge clk) begin
        data_q <= data_ram[idx];
        tag_q  <= tag_ram[idx];
    end

    typedef enum logic [1:0] {C_IDLE, C_LOOK, C_MISS, C_DONE} st_e;
    st_e st;
    logic [IDX_BITS-1:0] fill_idx;
    logic [TAG_BITS-1:0] fill_tag;

    // valid bits must start clear; tag_ram powers up zeroed on the FPGA and is
    // cleared explicitly on reset for simulation.
    integer i;
    initial for (i = 0; i < (1<<IDX_BITS); i = i + 1) tag_ram[i] = '0;

    // cpu_ack is held for as long as the request is, not pulsed: sounds_good
    // drives DTACK straight from it, and fx68k samples DTACK on its own edge,
    // so a single-cycle ack at 40 MHz could be missed entirely.
    always_ff @(posedge clk) begin
        if (reset) begin
            st <= C_IDLE; rom_req <= 1'b0; cpu_ack <= 1'b0;
        end else begin
            case (st)
                C_IDLE: begin cpu_ack <= 1'b0; if (cpu_req) begin
                    fill_idx <= idx;
                    fill_tag <= tag;
                    rom_addr <= cpu_addr;
                    st       <= C_LOOK;      // data_q/tag_q arrive this cycle
                end end
                C_LOOK: begin
                    if (tag_q[TAG_BITS] && tag_q[TAG_BITS-1:0] == fill_tag) begin
                        cpu_q   <= data_q;   // hit
                        cpu_ack <= 1'b1;
                        st      <= C_DONE;
                    end else begin
                        rom_req <= 1'b1;
                        st      <= C_MISS;
                    end
                end
                C_MISS: if (rom_done) begin
                    data_ram[fill_idx] <= rom_q;
                    tag_ram[fill_idx]  <= {1'b1, fill_tag};
                    cpu_q   <= rom_q;
                    cpu_ack <= 1'b1;
                    rom_req <= 1'b0;
                    st      <= C_DONE;
                end
                C_DONE: if (!cpu_req) begin
                    cpu_ack <= 1'b0;
                    st      <= C_IDLE;
                end
            endcase
        end
    end

`ifdef ICACHE_STATS
    // Hit rate matters for more than speed here: a miss costs wait states, so
    // a varying hit rate means a varying sample period, which is audible as
    // roughness even when the average rate is correct.
    integer hits = 0, misses = 0, rep = 0;
    always_ff @(posedge clk) begin
        if (st == C_LOOK) begin
            if (tag_q[TAG_BITS] && tag_q[TAG_BITS-1:0] == fill_tag) hits <= hits + 1;
            else misses <= misses + 1;
        end
        rep <= rep + 1;
        if (rep == 32000000) begin      // ~0.8 s of 40 MHz clock
            $display("ICACHE hits=%0d misses=%0d hit_rate=%0d%%",
                     hits, misses, (hits+misses) ? (100*hits)/(hits+misses) : 0);
            rep <= 0; hits <= 0; misses <= 0;
        end
    end
`endif

endmodule

`default_nettype wire
