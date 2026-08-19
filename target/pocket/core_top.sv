//------------------------------------------------------------------------------
// SPDX-License-Identifier: MIT
// SPDX-FileType: SOURCE
// SPDX-FileCopyrightText: (c) 2023, OpenGateware authors and contributors
//------------------------------------------------------------------------------
//
// Copyright (c) 2023, Marcus Andrade <marcus@opengateware.org>
// Copyright (c) 2022, Analogue Enterprises Limited
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//------------------------------------------------------------------------------
// Platform Specific top-level
// Instantiated by the real top-level: apf_top
//------------------------------------------------------------------------------

`default_nettype none

module core_top
    #(
         //! ------------------------------------------------------------------------
         //! System Configuration Parameters
         //! ------------------------------------------------------------------------
         // Memory
         parameter USE_SDRAM    = 1,       //! Enable SDRAM
         parameter USE_SRAM     = 0,       //! Enable SRAM
         parameter USE_CRAM0    = 0,       //! Enable Cellular RAM #1
         parameter USE_CRAM1    = 0,       //! Enable Cellular RAM #2
         // Video
         parameter BPP_R        = 8,       //! Bits Per Pixel Red
         parameter BPP_G        = 8,       //! Bits Per Pixel Green
         parameter BPP_B        = 8,       //! Bits Per Pixel Blue
         // Audio
         parameter AUDIO_DW     = 16,      //! Audio Bits
         parameter AUDIO_S      = 1,       //! Signed Audio
         parameter STEREO       = 0,       //! Stereo Output
         parameter AUDIO_MIX    = 0,       //! [0] No Mix | [1] 25% | [2] 50% | [3] 100% (mono)
         // Gamepad/Joystick
         parameter JOY_PADS     = 2,       //! Total Number of Gamepads
         parameter JOY_ALT      = 1,       //! 2 Players Alternate
         // Data I/O - [MPU -> FPGA]
         parameter DIO_MASK     = 4'h0,    //! Upper 4 bits of address
         parameter DIO_AW       = 27,      //! Address Width
         parameter DIO_DW       = 8,       //! Data Width (8 or 16 bits)
         parameter DIO_DELAY    = 7,       //! Number of clock cycles to delay each write output
         parameter DIO_HOLD     = 4,       //! Number of clock cycles to hold the ioctl_wr signal high
         // HiScore I/O - [MPU <-> FPGA]
         parameter HS_AW        = 16,      //! Max size of game RAM address for highscores
         parameter HS_SW        = 8,       //! Max size of capture RAM For highscore data (default 8 = 256 bytes max)
         parameter HS_CFG_AW    = 2,       //! Max size of RAM address for highscore.dat entries (default 4 = 16 entries max)
         parameter HS_CFG_LW    = 2,       //! Max size of length for each highscore.dat entries (default 1 = 256 bytes max)
         parameter HS_CONFIG    = 2,       //! Dataslot index for config transfer
         parameter HS_DATA      = 3,       //! Dataslot index for save data transfer
         parameter HS_NVM_SZ    = 32'd93,  //! Number bytes required for Save
         parameter HS_MASK      = 4'h1,    //! Upper 4 bits of address
         parameter HS_WR_DELAY  = 4,       //! Number of clock cycles to delay each write output
         parameter HS_WR_HOLD   = 1,       //! Number of clock cycles to hold the nvram_wr signal high
         parameter HS_RD_DELAY  = 4,       //! Number of clock cycles it takes for a read to complete
         // Save I/O - [MPU <-> FPGA]
         parameter SIO_MASK     = 4'h1,    //! Upper 4 bits of address
         parameter SIO_AW       = 27,      //! Address Width
         parameter SIO_DW       = 8,       //! Data Width (8 or 16 bits)
         parameter SIO_WR_DELAY = 4,       //! Number of clock cycles to delay each write output
         parameter SIO_WR_HOLD  = 1,       //! Number of clock cycles to hold the nvram_wr signal high
         parameter SIO_RD_DELAY = 4,       //! Number of clock cycles it takes for a read to complete
         parameter SIO_SAVE_IDX = 2        //! Dataslot index for save data transfer
     ) (
         //! --------------------------------------------------------------------
         //! Clock Inputs 74.25mhz.
         //! Not Phase Aligned, Treat These Domains as Asynchronous
         //! --------------------------------------------------------------------
         input wire          clk_74a, // mainclk1
         input wire          clk_74b, // mainclk1

         //! --------------------------------------------------------------------
         //! Cartridge Interface
         //! --------------------------------------------------------------------
         // switches between 3.3v and 5v mechanically
         // output enable for multibit translators controlled by pic32
         // GBA AD[15:8]
         inout  wire   [7:0] cart_tran_bank2,
         output wire         cart_tran_bank2_dir,
         // GBA AD[7:0]
         inout  wire   [7:0] cart_tran_bank3,
         output wire         cart_tran_bank3_dir,
         // GBA A[23:16]
         inout  wire   [7:0] cart_tran_bank1,
         output wire         cart_tran_bank1_dir,
         // GBA [7] PHI#
         // GBA [6] WR#
         // GBA [5] RD#
         // GBA [4] CS1#/CS#
         //     [3:0] unwired
         inout  wire   [7:4] cart_tran_bank0,
         output wire         cart_tran_bank0_dir,
         // GBA CS2#/RES#
         inout  wire         cart_tran_pin30,
         output wire         cart_tran_pin30_dir,
         // when GBC cart is inserted, this signal when low or weak will pull GBC /RES low with a special circuit
         // the goal is that when unconfigured, the FPGA weak pullups won't interfere.
         // thus, if GBC cart is inserted, FPGA must drive this high in order to let the level translators
         // and general IO drive this pin.
         output wire         cart_pin30_pwroff_reset,
         // GBA IRQ/DRQ
         inout  wire         cart_tran_pin31,
         output wire         cart_tran_pin31_dir,

         //! --------------------------------------------------------------------
         //! Infrared
         //! --------------------------------------------------------------------
         input  wire         port_ir_rx,
         output wire         port_ir_tx,
         output wire         port_ir_rx_disable,

         //! --------------------------------------------------------------------
         //! GBA link port
         //! --------------------------------------------------------------------
         inout  wire         port_tran_si,
         output wire         port_tran_si_dir,
         inout  wire         port_tran_so,
         output wire         port_tran_so_dir,
         inout  wire         port_tran_sck,
         output wire         port_tran_sck_dir,
         inout  wire         port_tran_sd,
         output wire         port_tran_sd_dir,

         //! --------------------------------------------------------------------
         //! Cellular PSRAM 0 and 1, two chips (64mbit x2 dual die per chip)
         //! --------------------------------------------------------------------
         output wire [21:16] cram0_a,
         inout  wire  [15:0] cram0_dq,
         input  wire         cram0_wait,
         output wire         cram0_clk,
         output wire         cram0_adv_n,
         output wire         cram0_cre,
         output wire         cram0_ce0_n,
         output wire         cram0_ce1_n,
         output wire         cram0_oe_n,
         output wire         cram0_we_n,
         output wire         cram0_ub_n,
         output wire         cram0_lb_n,

         output wire [21:16] cram1_a,
         inout  wire  [15:0] cram1_dq,
         input  wire         cram1_wait,
         output wire         cram1_clk,
         output wire         cram1_adv_n,
         output wire         cram1_cre,
         output wire         cram1_ce0_n,
         output wire         cram1_ce1_n,
         output wire         cram1_oe_n,
         output wire         cram1_we_n,
         output wire         cram1_ub_n,
         output wire         cram1_lb_n,

         //! --------------------------------------------------------------------
         //! SDRAM, 512mbit 16bit
         //! --------------------------------------------------------------------
         output wire  [12:0] dram_a,        // Address bus
         output wire   [1:0] dram_ba,       // Bank select (single bits)
         inout  wire  [15:0] dram_dq,       // Bidirectional data bus
         output wire   [1:0] dram_dqm,      // High/low byte mask
         output wire         dram_clk,      // Chip clock
         output wire         dram_cke,      // Clock enable
         output wire         dram_ras_n,    // Select row address (active low)
         output wire         dram_cas_n,    // Select column address (active low)
         output wire         dram_we_n,     // Write enable (active low)

         //! --------------------------------------------------------------------
         //! SRAM, 1mbit 16bit
         //! --------------------------------------------------------------------
         output wire  [16:0] sram_a,        // Address bus
         inout  wire  [15:0] sram_dq,       // Bidirectional data bus
         output wire         sram_oe_n,     // Output enable
         output wire         sram_we_n,     // Write enable
         output wire         sram_ub_n,     // Upper Byte Mask
         output wire         sram_lb_n,     // Lower Byte Mask

         //! --------------------------------------------------------------------
         //! vblank driven by dock for sync in a certain mode
         //! --------------------------------------------------------------------
         input  wire         vblank,

         //! --------------------------------------------------------------------
         //! I/O to 6515D breakout USB UART
         //! --------------------------------------------------------------------
         output wire         dbg_tx,
         input  wire         dbg_rx,

         //! --------------------------------------------------------------------
         //! I/O pads near jtag connector user can solder to
         //! --------------------------------------------------------------------
         output wire         user1,
         input  wire         user2,

         //! --------------------------------------------------------------------
         //! RFU internal i2c bus
         //! --------------------------------------------------------------------
         inout  wire         aux_sda,
         output wire         aux_scl,

         //! --------------------------------------------------------------------
         //! RFU, do not use !!!
         //! --------------------------------------------------------------------
         output wire         vpll_feed,

         //! --------------------------------------------------------------------
         //! Logical Connections ////////////////////////////////////////////////
         //! --------------------------------------------------------------------

         //! --------------------------------------------------------------------
         //! Video Output to Scaler
         //! --------------------------------------------------------------------
         output wire  [23:0] video_rgb,
         output wire         video_rgb_clock,
         output wire         video_rgb_clock_90,
         output wire         video_hs,
         output wire         video_vs,
         output wire         video_de,
         output wire         video_skip,

         //! --------------------------------------------------------------------
         //! Audio
         //! --------------------------------------------------------------------
         output wire         audio_mclk,
         output wire         audio_lrck,
         output wire         audio_dac,
         input  wire         audio_adc,

         //! --------------------------------------------------------------------
         //! Bridge Bus Connection (synchronous to clk_74a)
         //! --------------------------------------------------------------------
         output wire         bridge_endian_little,
         input  wire  [31:0] bridge_addr,
         input  wire         bridge_rd,
         output reg   [31:0] bridge_rd_data,
         input  wire         bridge_wr,
         input  wire  [31:0] bridge_wr_data,

         //! --------------------------------------------------------------------
         //! Controller Data
         //! --------------------------------------------------------------------
         input  wire  [31:0] cont1_key,
         input  wire  [31:0] cont2_key,
         input  wire  [31:0] cont3_key,
         input  wire  [31:0] cont4_key,
         input  wire  [31:0] cont1_joy,
         input  wire  [31:0] cont2_joy,
         input  wire  [31:0] cont3_joy,
         input  wire  [31:0] cont4_joy,
         input  wire  [15:0] cont1_trig,
         input  wire  [15:0] cont2_trig,
         input  wire  [15:0] cont3_trig,
         input  wire  [15:0] cont4_trig
     );

    // not using the IR port, so turn off both the LED, and
    // disable the receive circuit to save power
    assign port_ir_tx         = 0;
    assign port_ir_rx_disable = 1;

    // bridge endianness
    assign bridge_endian_little = 0;

    // cart is unused, so set all level translators accordingly
    // directions are 0:IN, 1:OUT
    assign cart_tran_bank3         = 8'hzz;
    assign cart_tran_bank3_dir     = 1'b0;
    assign cart_tran_bank2         = 8'hzz;
    assign cart_tran_bank2_dir     = 1'b0;
    assign cart_tran_bank1         = 8'hzz;
    assign cart_tran_bank1_dir     = 1'b0;
    assign cart_tran_bank0         = 4'hf;
    assign cart_tran_bank0_dir     = 1'b1;
    assign cart_tran_pin30         = 1'b0;  // reset or cs2, we let the hw control it by itself
    assign cart_tran_pin30_dir     = 1'bz;
    assign cart_pin30_pwroff_reset = 1'b0;  // hardware can control this
    assign cart_tran_pin31         = 1'bz;  // input
    assign cart_tran_pin31_dir     = 1'b0;  // input

    // link port is input only
    assign port_tran_so      = 1'bz;
    assign port_tran_so_dir  = 1'b0; // SO is output only
    assign port_tran_si      = 1'bz;
    assign port_tran_si_dir  = 1'b0; // SI is input only
    assign port_tran_sck     = 1'bz;
    assign port_tran_sck_dir = 1'b0; // clock direction can change
    assign port_tran_sd      = 1'bz;
    assign port_tran_sd_dir  = 1'b0; // SD is input and not used

    assign dbg_tx    = 1'bZ;
    assign user1     = 1'bZ;
    assign aux_scl   = 1'bZ;
    assign vpll_feed = 1'bZ;

    // Tie off the memory the pins not being used
    generate
        if(USE_CRAM0 == 0) begin
            assign cram0_a     = 'h0;
            assign cram0_dq    = {16{1'bZ}};
            assign cram0_clk   = 0;
            assign cram0_adv_n = 1;
            assign cram0_cre   = 0;
            assign cram0_ce0_n = 1;
            assign cram0_ce1_n = 1;
            assign cram0_oe_n  = 1;
            assign cram0_we_n  = 1;
            assign cram0_ub_n  = 1;
            assign cram0_lb_n  = 1;
        end

        if(USE_CRAM1 == 0) begin
            assign cram1_a     = 'h0;
            assign cram1_dq    = {16{1'bZ}};
            assign cram1_clk   = 0;
            assign cram1_adv_n = 1;
            assign cram1_cre   = 0;
            assign cram1_ce0_n = 1;
            assign cram1_ce1_n = 1;
            assign cram1_oe_n  = 1;
            assign cram1_we_n  = 1;
            assign cram1_ub_n  = 1;
            assign cram1_lb_n  = 1;
        end

        if(USE_SDRAM == 0) begin
            assign dram_a     = 'h0;
            assign dram_ba    = 'h0;
            assign dram_dq    = {16{1'bZ}};
            assign dram_dqm   = 'h0;
            assign dram_clk   = 'h0;
            assign dram_cke   = 'h0;
            assign dram_ras_n = 'h1;
            assign dram_cas_n = 'h1;
            assign dram_we_n  = 'h1;
        end

        if(USE_SRAM == 0) begin
            assign sram_a    = 'h0;
            assign sram_dq   = {16{1'bZ}};
            assign sram_oe_n = 1;
            assign sram_we_n = 1;
            assign sram_ub_n = 1;
            assign sram_lb_n = 1;
        end
    endgenerate

    //! ------------------------------------------------------------------------
    //! Host/Target Command Handler
    //! ------------------------------------------------------------------------
    wire        reset_n;  // driven by host commands, can be used as core-wide reset
    wire [31:0] cmd_bridge_rd_data;

    // bridge host commands
    // synchronous to clk_74a
    wire        status_boot_done  = pll_core_locked_s;
    wire        status_setup_done = pll_core_locked_s; // rising edge triggers a target command
    wire        status_running    = reset_n;           // we are running as soon as reset_n goes high

    wire        dataslot_requestread;
    wire [15:0] dataslot_requestread_id;
    wire        dataslot_requestread_ack = 1;
    wire        dataslot_requestread_ok  = 1;

    wire        dataslot_requestwrite;
    wire [15:0] dataslot_requestwrite_id;
    wire [31:0] dataslot_requestwrite_size;
    wire        dataslot_requestwrite_ack = 1;
    wire        dataslot_requestwrite_ok  = 1;

    wire        dataslot_update;
    wire [15:0] dataslot_update_id;
    wire [31:0] dataslot_update_size;

    wire        dataslot_allcomplete;

    wire [31:0] rtc_epoch_seconds;
    wire [31:0] rtc_date_bcd;
    wire [31:0] rtc_time_bcd;
    wire        rtc_valid;

    wire        savestate_supported;
    wire [31:0] savestate_addr;
    wire [31:0] savestate_size;
    wire [31:0] savestate_maxloadsize;

    wire        savestate_start;
    wire        savestate_start_ack;
    wire        savestate_start_busy;
    wire        savestate_start_ok;
    wire        savestate_start_err;

    wire        savestate_load;
    wire        savestate_load_ack;
    wire        savestate_load_busy;
    wire        savestate_load_ok;
    wire        savestate_load_err;

    wire        osnotify_inmenu;

    // bridge target commands
    // synchronous to clk_74a
    reg         target_dataslot_read;
    reg         target_dataslot_write;
    reg         target_dataslot_getfile;    // require additional param/resp structs to be mapped
    reg         target_dataslot_openfile;   // require additional param/resp structs to be mapped

    wire        target_dataslot_ack;
    wire        target_dataslot_done;
    wire  [2:0] target_dataslot_err;

    reg  [15:0] target_dataslot_id;
    reg  [31:0] target_dataslot_slotoffset;
    reg  [31:0] target_dataslot_bridgeaddr;
    reg  [31:0] target_dataslot_length;

    wire [31:0] target_buffer_param_struct; // to be mapped/implemented when using some Target commands
    wire [31:0] target_buffer_resp_struct;  // to be mapped/implemented when using some Target commands

    // bridge data slot access
    // synchronous to clk_74a
    wire  [9:0] datatable_addr;
    wire        datatable_wren;
    wire [31:0] datatable_data;
    wire [31:0] datatable_q;

    core_bridge_cmd icb
    (
        .clk                        ( clk_74a                    ),
        .reset_n                    ( reset_n                    ),

        .bridge_endian_little       ( bridge_endian_little       ),
        .bridge_addr                ( bridge_addr                ),
        .bridge_rd                  ( bridge_rd                  ),
        .bridge_rd_data             ( cmd_bridge_rd_data         ),
        .bridge_wr                  ( bridge_wr                  ),
        .bridge_wr_data             ( bridge_wr_data             ),

        .status_boot_done           ( status_boot_done           ),
        .status_setup_done          ( status_setup_done          ),
        .status_running             ( status_running             ),

        .dataslot_requestread       ( dataslot_requestread       ),
        .dataslot_requestread_id    ( dataslot_requestread_id    ),
        .dataslot_requestread_ack   ( dataslot_requestread_ack   ),
        .dataslot_requestread_ok    ( dataslot_requestread_ok    ),

        .dataslot_requestwrite      ( dataslot_requestwrite      ),
        .dataslot_requestwrite_id   ( dataslot_requestwrite_id   ),
        .dataslot_requestwrite_size ( dataslot_requestwrite_size ),
        .dataslot_requestwrite_ack  ( dataslot_requestwrite_ack  ),
        .dataslot_requestwrite_ok   ( dataslot_requestwrite_ok   ),

        .dataslot_update            ( dataslot_update            ),
        .dataslot_update_id         ( dataslot_update_id         ),
        .dataslot_update_size       ( dataslot_update_size       ),

        .dataslot_allcomplete       ( dataslot_allcomplete       ),

        .rtc_epoch_seconds          ( rtc_epoch_seconds          ),
        .rtc_date_bcd               ( rtc_date_bcd               ),
        .rtc_time_bcd               ( rtc_time_bcd               ),
        .rtc_valid                  ( rtc_valid                  ),

        .savestate_supported        ( savestate_supported        ),
        .savestate_addr             ( savestate_addr             ),
        .savestate_size             ( savestate_size             ),
        .savestate_maxloadsize      ( savestate_maxloadsize      ),

        .savestate_start            ( savestate_start            ),
        .savestate_start_ack        ( savestate_start_ack        ),
        .savestate_start_busy       ( savestate_start_busy       ),
        .savestate_start_ok         ( savestate_start_ok         ),
        .savestate_start_err        ( savestate_start_err        ),

        .savestate_load             ( savestate_load             ),
        .savestate_load_ack         ( savestate_load_ack         ),
        .savestate_load_busy        ( savestate_load_busy        ),
        .savestate_load_ok          ( savestate_load_ok          ),
        .savestate_load_err         ( savestate_load_err         ),

        .osnotify_inmenu            ( osnotify_inmenu            ),

        .target_dataslot_read       ( target_dataslot_read       ),
        .target_dataslot_write      ( target_dataslot_write      ),
        .target_dataslot_getfile    ( target_dataslot_getfile    ),
        .target_dataslot_openfile   ( target_dataslot_openfile   ),

        .target_dataslot_ack        ( target_dataslot_ack        ),
        .target_dataslot_done       ( target_dataslot_done       ),
        .target_dataslot_err        ( target_dataslot_err        ),

        .target_dataslot_id         ( target_dataslot_id         ),
        .target_dataslot_slotoffset ( target_dataslot_slotoffset ),
        .target_dataslot_bridgeaddr ( target_dataslot_bridgeaddr ),
        .target_dataslot_length     ( target_dataslot_length     ),

        .target_buffer_param_struct ( target_buffer_param_struct ),
        .target_buffer_resp_struct  ( target_buffer_resp_struct  ),

        .datatable_addr             ( datatable_addr             ),
        .datatable_wren             ( datatable_wren             ),
        .datatable_data             ( datatable_data             ),
        .datatable_q                ( datatable_q                )
    );

    //! END OF APF /////////////////////////////////////////////////////////////

    //! ////////////////////////////////////////////////////////////////////////
    //! @ System Modules
    //! ////////////////////////////////////////////////////////////////////////

    //! ------------------------------------------------------------------------
    //! APF Bridge Read Data
    //! ------------------------------------------------------------------------
    wire [31:0] int_bridge_rd_data;
    wire [31:0] nvm_bridge_rd_data, nvm_bridge_rd_data_s;

    // Synchronize nvm_bridge_rd_data into clk_74a domain before usage
    synch_3 sync_nvm(nvm_bridge_rd_data, nvm_bridge_rd_data_s, clk_74a);

    always_comb begin
        casex(bridge_addr)
            32'h10000000: begin bridge_rd_data <= nvm_bridge_rd_data_s; end // HiScore/NVRAM/SRAM Save
            32'hF0000000: begin bridge_rd_data <= int_bridge_rd_data;   end // Reset
            32'hF0000010: begin bridge_rd_data <= int_bridge_rd_data;   end // Service Mode Switch
            32'hF1000000: begin bridge_rd_data <= int_bridge_rd_data;   end // DIP Switches
            32'hF2000000: begin bridge_rd_data <= int_bridge_rd_data;   end // Modifiers
            32'hF3000000: begin bridge_rd_data <= int_bridge_rd_data;   end // A/V Filters
            32'hF4000000: begin bridge_rd_data <= int_bridge_rd_data;   end // Extra DIP Switches
            32'hF8xxxxxx: begin bridge_rd_data <= cmd_bridge_rd_data;   end // APF Bridge (Reserved)
            32'hFA000000: begin bridge_rd_data <= int_bridge_rd_data;   end // Status Low  [31:0]
            32'hFB000000: begin bridge_rd_data <= int_bridge_rd_data;   end // Status High [63:32]
            default:      begin bridge_rd_data <= 0;                    end
        endcase
    end

    //! ------------------------------------------------------------------------
    //! Pause Core (Analogue OS Menu/Module Request)
    //! ------------------------------------------------------------------------
    wire pause_core, pause_req;

    pause_crtl core_pause
    (
        .clk_sys    ( clk_sys         ),
        .os_inmenu  ( osnotify_inmenu ),
        .pause_req  ( pause_req       ),
        .pause_core ( pause_core      )
    );

    //! ------------------------------------------------------------------------
    //! Interact: Dip Switches, Modifiers, Filters and Reset
    //! ------------------------------------------------------------------------
    wire  [7:0] dip_sw0, dip_sw1, dip_sw2, dip_sw3;
    wire  [7:0] ext_sw0, ext_sw1, ext_sw2, ext_sw3;
    wire  [7:0] mod_sw0, mod_sw1, mod_sw2, mod_sw3;
    wire  [3:0] scnl_sw, smask_sw, afilter_sw, vol_att;
    wire [63:0] status;
    wire        reset_sw, svc_sw;

    interact pocket_interact
    (
        // Clocks and Reset
        .clk_74a          ( clk_74a            ),
        .clk_sync         ( clk_sys            ),
        .reset_n          ( reset_n            ),
        // Pocket Bridge
        .bridge_addr      ( bridge_addr        ),
        .bridge_wr        ( bridge_wr          ),
        .bridge_wr_data   ( bridge_wr_data     ),
        .bridge_rd        ( bridge_rd          ),
        .bridge_rd_data   ( int_bridge_rd_data ),
        // Service Mode Switch
        .svc_sw           ( svc_sw             ),
        // DIP Switches
        .dip_sw0          ( dip_sw0            ),
        .dip_sw1          ( dip_sw1            ),
        .dip_sw2          ( dip_sw2            ),
        .dip_sw3          ( dip_sw3            ),
        // Extra DIP Switches
        .ext_sw0          ( ext_sw0            ),
        .ext_sw1          ( ext_sw1            ),
        .ext_sw2          ( ext_sw2            ),
        .ext_sw3          ( ext_sw3            ),
        // Modifiers
        .mod_sw0          ( mod_sw0            ),
        .mod_sw1          ( mod_sw1            ),
        .mod_sw2          ( mod_sw2            ),
        .mod_sw3          ( mod_sw3            ),
        // Status (Legacy Support)
        .status           ( status             ),
        // Filters Switches
        .scnl_sw          ( scnl_sw            ),
        .smask_sw         ( smask_sw           ),
        .afilter_sw       ( afilter_sw         ),
        .vol_att          ( vol_att            ),
        // Reset Switch
        .reset_sw         ( reset_sw           )
    );

    //! ------------------------------------------------------------------------
    //! Audio
    //! ------------------------------------------------------------------------
    wire [AUDIO_DW-1:0] core_snd_l, core_snd_r; // Audio Mono/Left/Right

    audio_mixer #(.DW(AUDIO_DW),.STEREO(STEREO)) pocket_audio_mixer
    (
        // Clocks and Reset
        .clk_74b    ( clk_74b    ),
        .reset      ( reset_sw   ),
        // Controls
        .afilter_sw ( afilter_sw ),
        .vol_att    ( vol_att    ),
        .mix        ( AUDIO_MIX  ),
        .pause_core ( pause_core ),
        // Audio From Core
        .is_signed  ( AUDIO_S    ),
        .core_l     ( core_snd_l ),
        .core_r     ( core_snd_r ),
        // I2S
        .audio_mclk ( audio_mclk ),
        .audio_lrck ( audio_lrck ),
        .audio_dac  ( audio_dac  )
    );

    //! ------------------------------------------------------------------------
    //! Video
    //! ------------------------------------------------------------------------
    wire       [2:0] video_preset;     // Video Preset Configuration
    wire [BPP_R-1:0] core_r;           // Video Red
    wire [BPP_G-1:0] core_g;           // Video Green
    wire [BPP_B-1:0] core_b;           // Video Blue
    wire             core_hs, core_hb; // Horizontal Sync/Blank
    wire             core_vs, core_vb; // Vertical Sync/Blank
    wire             core_de;          // Display Enable

    assign core_hb = 1'b0;
    assign core_vb = 1'b0;

    video_mixer #(.RW(BPP_R),.GW(BPP_G),.BW(BPP_B)) pocket_video_mixer
    (
        // Clocks
        .clk_74a                  ( clk_74a                  ),
        .clk_sys                  ( clk_sys                  ),
        .clk_vid                  ( clk_vid                  ),
        .clk_vid_90deg            ( clk_vid_90deg            ),
        // Input Controls
        .video_preset             ( video_preset             ),
        .scnl_sw                  ( scnl_sw                  ),
        .smask_sw                 ( smask_sw                 ),
        // Input Video from Core
        .core_r                   ( core_r                   ),
        .core_g                   ( core_g                   ),
        .core_b                   ( core_b                   ),
        .core_vs                  ( core_vs                  ),
        .core_hs                  ( core_hs                  ),
        .core_de                  ( core_de                  ),
        // Output to Display
        .video_rgb                ( video_rgb                ),
        .video_vs                 ( video_vs                 ),
        .video_hs                 ( video_hs                 ),
        .video_de                 ( video_de                 ),
        .video_rgb_clock          ( video_rgb_clock          ),
        .video_rgb_clock_90       ( video_rgb_clock_90       ),
        // Pocket Bridge Slots
        .dataslot_requestwrite    ( dataslot_requestwrite    ), // [i]
        .dataslot_requestwrite_id ( dataslot_requestwrite_id ), // [i]
        .dataslot_allcomplete     ( dataslot_allcomplete     ), // [i]
        // MPU -> FPGA (MPU Write to FPGA)
        // Pocket Bridge
        .bridge_endian_little     ( bridge_endian_little     ), // [i]
        .bridge_addr              ( bridge_addr              ), // [i]
        .bridge_wr                ( bridge_wr                ), // [i]
        .bridge_wr_data           ( bridge_wr_data           )  // [i]
    );

    //! ------------------------------------------------------------------------
    //! Data I/O
    //! ------------------------------------------------------------------------
    wire              ioctl_download;
    wire       [15:0] ioctl_index;
    wire              ioctl_wr;
    wire [DIO_AW-1:0] ioctl_addr;
    wire [DIO_DW-1:0] ioctl_data;

    data_io #(.MASK(DIO_MASK),.AW(DIO_AW),.DW(DIO_DW),.DELAY(DIO_DELAY),.HOLD(DIO_HOLD)) pocket_data_io
    (
        // Clocks and Reset
        .clk_74a                  ( clk_74a                  ),
        .clk_memory               ( clk_sys                  ),
        // Pocket Bridge Slots
        .dataslot_requestwrite    ( dataslot_requestwrite    ), // [i]
        .dataslot_requestwrite_id ( dataslot_requestwrite_id ), // [i]
        .dataslot_allcomplete     ( dataslot_allcomplete     ), // [i]
        // MPU -> FPGA (MPU Write to FPGA)
        // Pocket Bridge
        .bridge_endian_little     ( bridge_endian_little     ), // [i]
        .bridge_addr              ( bridge_addr              ), // [i]
        .bridge_wr                ( bridge_wr                ), // [i]
        .bridge_wr_data           ( bridge_wr_data           ), // [i]
        // Controller Interface
        .ioctl_download           ( ioctl_download           ), // [o]
        .ioctl_index              ( ioctl_index              ), // [o]
        .ioctl_wr                 ( ioctl_wr                 ), // [o]
        .ioctl_addr               ( ioctl_addr               ), // [o]
        .ioctl_data               ( ioctl_data               )  // [o]
    );

    //! ------------------------------------------------------------------------
    //! Gamepad/Analog Stick
    //! ------------------------------------------------------------------------
    // Player 1
    // - DPAD
    wire       p1_up,     p1_down,   p1_left,   p1_right;
    wire       p1_btn_y,  p1_btn_x,  p1_btn_b,  p1_btn_a;
    wire       p1_btn_l1, p1_btn_l2, p1_btn_l3;
    wire       p1_btn_r1, p1_btn_r2, p1_btn_r3;
    wire       p1_select, p1_start;
    // - Analog
    wire       j1_up,     j1_down,   j1_left,   j1_right;
    wire [7:0] j1_lx,     j1_ly,     j1_rx,     j1_ry;

    // Player 2
    // - DPAD
    wire       p2_up,     p2_down,   p2_left,   p2_right;
    wire       p2_btn_y,  p2_btn_x,  p2_btn_b,  p2_btn_a;
    wire       p2_btn_l1, p2_btn_l2, p2_btn_l3;
    wire       p2_btn_r1, p2_btn_r2, p2_btn_r3;
    wire       p2_select, p2_start;
    // - Analog
    wire       j2_up,     j2_down,   j2_left,   j2_right;
    wire [7:0] j2_lx,     j2_ly,     j2_rx,     j2_ry;

    // Single Player or Alternate 2 Players for Arcade
    wire m_start1, m_start2;
    wire m_coin1,  m_coin2, m_coin;
    wire m_up,     m_down,  m_left, m_right;
    wire m_btn1,   m_btn2,  m_btn3, m_btn4;
    wire m_btn5,   m_btn6,  m_btn7, m_btn8;

    gamepad #(.JOY_PADS(JOY_PADS),.JOY_ALT(JOY_ALT)) pocket_gamepad
    (
        .clk_sys   ( clk_sys   ),
        // Pocket PAD Interface
        .cont1_key ( cont1_key ), .cont1_joy ( cont1_joy ),
        .cont2_key ( cont2_key ), .cont2_joy ( cont2_joy ),
        .cont3_key ( cont3_key ), .cont3_joy ( cont3_joy ),
        .cont4_key ( cont4_key ), .cont4_joy ( cont4_joy ),
        // Player 1
        .p1_up     ( p1_up     ), .p1_down   ( p1_down   ),
        .p1_left   ( p1_left   ), .p1_right  ( p1_right  ),
        .p1_y      ( p1_btn_y  ), .p1_x      ( p1_btn_x  ),
        .p1_b      ( p1_btn_b  ), .p1_a      ( p1_btn_a  ),
        .p1_l1     ( p1_btn_l1 ), .p1_r1     ( p1_btn_r1 ),
        .p1_l2     ( p1_btn_l2 ), .p1_r2     ( p1_btn_r2 ),
        .p1_l3     ( p1_btn_l3 ), .p1_r3     ( p1_btn_r3 ),
        .p1_se     ( p1_select ), .p1_st     ( p1_start  ),
        .j1_up     ( j1_up     ), .j1_down   ( j1_down   ),
        .j1_left   ( j1_left   ), .j1_right  ( j1_right  ),
        .j1_lx     ( j1_lx     ), .j1_ly     ( j1_ly     ),
        .j1_rx     ( j1_rx     ), .j1_ry     ( j1_ry     ),
        // Player 2
        .p2_up     ( p2_up     ), .p2_down   ( p2_down   ),
        .p2_left   ( p2_left   ), .p2_right  ( p2_right  ),
        .p2_y      ( p2_btn_y  ), .p2_x      ( p2_btn_x  ),
        .p2_b      ( p2_btn_b  ), .p2_a      ( p2_btn_a  ),
        .p2_l1     ( p2_btn_l1 ), .p2_r1     ( p2_btn_r1 ),
        .p2_l2     ( p2_btn_l2 ), .p2_r2     ( p2_btn_r2 ),
        .p2_l3     ( p2_btn_l3 ), .p2_r3     ( p2_btn_r3 ),
        .p2_se     ( p2_select ), .p2_st     ( p2_start  ),
        .j2_up     ( j2_up     ), .j2_down   ( j2_down   ),
        .j2_left   ( j2_left   ), .j2_right  ( j2_right  ),
        .j2_lx     ( j2_lx     ), .j2_ly     ( j2_ly     ),
        .j2_rx     ( j2_rx     ), .j2_ry     ( j2_ry     ),
        // Single Player or Alternate 2 Players for Arcade
        .m_coin    ( m_coin    ),                           // Coinage P1 or P2
        .m_up      ( m_up      ), .m_down    ( m_down    ), // Up/Down
        .m_left    ( m_left    ), .m_right   ( m_right   ), // Left/Right
        .m_btn1    ( m_btn1    ), .m_btn4    ( m_btn4    ), // Y/X
        .m_btn2    ( m_btn2    ), .m_btn3    ( m_btn3    ), // B/A
        .m_btn5    ( m_btn5    ), .m_btn6    ( m_btn6    ), // L1/R1
        .m_btn7    ( m_btn7    ), .m_btn8    ( m_btn8    ), // L2/R2
        .m_coin1   ( m_coin1   ), .m_coin2   ( m_coin2   ), // P1/P2 Coin
        .m_start1  ( m_start1  ), .m_start2  ( m_start2  )  // P1/P2 Start
    );

    //! ------------------------------------------------------------------------
    //! Clocks
    //! ------------------------------------------------------------------------
    wire pll_core_locked, pll_core_locked_s;
    wire clk_sys;       // Machine + SDRAM: 40.0 MHz
    wire clk_vid;       // Video: 20.0 MHz (dot clock)
    wire clk_vid_90deg; // Video: 20.0 MHz @ 90deg (Pocket RGB clock pair)
    wire clk_ram;       // unused
    wire clk_21m;       // unused

    core_pll core_pll
    (
        .refclk   ( clk_74a ),
        .rst      ( 0       ),

        .outclk_0 ( clk_sys       ),
        .outclk_1 ( clk_vid       ),
        .outclk_2 ( clk_vid_90deg ),
        .outclk_3 ( clk_ram       ),
        .outclk_4 ( clk_21m       ),

        .locked   ( pll_core_locked )
    );

    // Synchronize pll_core_locked into clk_74a domain before usage
    synch_3 sync_lck(pll_core_locked, pll_core_locked_s, clk_74a);

    //! ------------------------------------------------------------------------
    //! @ Xenophobe (Bally Midway MCR-68000 + Sounds Good)
    //! ------------------------------------------------------------------------
    // Reset: user switch, asset download, PLL lock
    wire reset_sw_s;
    synch_3 sync_rst(reset_sw, reset_sw_s, clk_sys);
    wire xeno_reset = reset_sw_s | ioctl_download | ~pll_core_locked_s | ver_busy;

    //! ROM routing: single slot (xenophobe.rom)
    //!   0x00000-0x7FFFF CPU ROMs -> SDRAM  |  0x80000-0xCFFFF gfx -> BRAM
    wire        ioctl_isROM   = ioctl_download && ioctl_index == 16'h0;
    // .rom layout: 0x00000 CPU ROMs (to SDRAM verbatim), 0x80000 bg tiles
    // (to BRAM), 0x90000 sprites (to SDRAM, addresses PERMUTED so the 16
    // bytes of one sprite row land consecutively for burst reads):
    //   in-bank byte b: {bank[1:0]=a[17:16], code=a[15:7], row=a[6:2], k=a[1:0]}
    //   sdram byte    : 0x90000 + {code, row, bank, k}
    wire        is_bg         = ioctl_addr[19:16] == 4'h8;
    wire        is_spr        = ioctl_addr[19:16] >= 4'h9 && ioctl_addr[19:16] <= 4'hC;
    wire [17:0] spr_off       = ioctl_addr[17:0] - 18'h10000;    // within sprite region
    wire [24:0] dl_sdram_addr = is_spr
        ? 25'h90000 + {7'b0, spr_off[15:7], spr_off[6:2], spr_off[17:16], spr_off[1:0]}
        : {5'b0, ioctl_addr[19:0]};
    wire        gfx_load_we   = ioctl_isROM && ioctl_wr && is_bg;
    wire [18:0] gfx_load_addr = {3'b0, ioctl_addr[15:0]};
    wire        cpu_load_wr   = ioctl_isROM && ioctl_wr && !is_bg;

    //! SDRAM (proven controller, 16-bit read tap) + ROM word server
    wire [24:0] sd_addr;
    wire  [7:0] sd_din;
    wire        sd_we, sd_rd, sd_ready;
    wire [15:0] sd_dout16;
    wire [24:4] sd_baddr;
    wire        sd_brd, sd_bready;
    wire [127:0] sd_bdata;
    wire [13:0] spr_fetch_addr;
    wire        spr_fetch_req;
    wire [127:0] spr_srv_data;
    wire        spr_srv_done;

    // Debug DIP (Interact menu): drop sprite fetches entirely. The burst path
    // is the least-proven logic in the design, so being able to take it out of
    // circuit on real hardware isolates it in one boot.
    wire         spr_disable   = dip_sw1[0];
    wire         spr_req_gated = spr_fetch_req & ~spr_disable;
    wire         spr_fetch_done = spr_disable ? spr_fetch_req : spr_srv_done;
    wire [127:0] spr_fetch_data = spr_disable ? 128'd0 : spr_srv_data;

    sdram16 sdram16
    (
        .init       ( ~pll_core_locked_s ),
        .clk        ( clk_sys            ),

        .SDRAM_DQ   ( dram_dq            ),
        .SDRAM_A    ( dram_a             ),
        .SDRAM_DQML ( dram_dqm[0]        ),
        .SDRAM_DQMH ( dram_dqm[1]        ),
        .SDRAM_BA   ( dram_ba            ),
        .SDRAM_nCS  (                    ),
        .SDRAM_nWE  ( dram_we_n          ),
        .SDRAM_nRAS ( dram_ras_n         ),
        .SDRAM_nCAS ( dram_cas_n         ),
        .SDRAM_CKE  ( dram_cke           ),
        .SDRAM_CLK  ( dram_clk           ),

        .dout       (                    ),
        .dout16     ( sd_dout16          ),
        .baddr      ( sd_baddr           ),
        .brd        ( sd_brd             ),
        .bdata      ( sd_bdata           ),
        .bready     ( sd_bready          ),
        .din        ( sd_din             ),
        .addr       ( sd_addr            ),
        .we         ( sd_we              ),
        .rd         ( sd_rd              ),
        .ready      ( sd_ready           )
    );

    wire [17:1] main_rom_addr, snd_rom_addr;
    wire        main_rom_req,  snd_rom_req;
    wire [15:0] main_rom_q,    snd_rom_q;
    wire        main_rom_done, snd_rom_done;

    rom_server rom_server
    (
        .clk       ( clk_sys        ),
        .reset     ( ~pll_core_locked_s ),
        .sd_addr   ( sd_addr        ),
        .sd_din    ( sd_din         ),
        .sd_we     ( sd_we          ),
        .sd_rd     ( sd_rd          ),
        .sd_dout16 ( sd_dout16      ),
        .sd_ready  ( sd_ready       ),
        .dl_active ( ioctl_isROM    ),
        .dl_addr   ( dl_sdram_addr  ),
        .dl_data   ( ioctl_data     ),
        .dl_wr     ( cpu_load_wr    ),
        .spr_baddr ( 21'h9000 + {7'b0, spr_fetch_addr} ),
        .spr_req   ( spr_req_gated  ),
        .spr_data  ( spr_srv_data   ),
        .spr_done  ( spr_srv_done   ),
        .sd_baddr  ( sd_baddr       ),
        .sd_brd    ( sd_brd         ),
        .sd_bdata  ( sd_bdata       ),
        .sd_bready ( sd_bready      ),
        .rd0_addr  ( ver_busy ? ver_addr : main_rom_addr ),
        .rd0_req   ( ver_busy ? ver_req  : main_rom_req  ),
        .rd0_q     ( main_rom_q     ),
        .rd0_done  ( main_rom_done  ),
        .rd1_addr  ( snd_rom_addr   ),
        .rd1_req   ( snd_rom_req    ),
        .rd1_q     ( snd_rom_q      ),
        .rd1_done  ( snd_rom_done   )
    );

    //! Inputs (active low). IN0: coins/service + P1; IN1: P2 (P3 idle).
    //! Xenophobe: 8-way stick + BTN1 (fire), BTN2 (jump/action), BTN3.
    wire [15:0] xeno_in0 = ~{ 1'b0,                       // 15 unused
                              p1_btn_b,                   // 14 BTN2
                              p1_btn_x,                   // 13 BTN3
                              p1_btn_a,                   // 12 BTN1 (fire)
                              p1_right, p1_left, p1_down, p1_up,  // 11..8
                              1'b0,                       // 7 service mode (off)
                              svc_sw,                     // 6 service credit
                              1'b0,                       // 5 tilt
                              2'b00,                      // 4:3 unused (4 = snd status, overridden in core)
                              1'b0,                       // 2 coin3
                              p2_select,                  // 1 coin2
                              p1_select };                // 0 coin1
    wire [15:0] xeno_in1 = ~{ 1'b0,
                              4'b0000, 4'b0000,           // P3 idle (bits 14..8 pattern below)
                              1'b0,
                              p2_btn_b,                   // 6 P2 BTN2
                              p2_btn_x,                   // 5 P2 BTN3
                              p2_btn_a,                   // 4 P2 BTN1
                              p2_right, p2_left, p2_down, p2_up }; // 3..0

    //! DIPs: interact switches XOR factory defaults (0 = default)
    wire [15:0] xeno_dsw = 16'hFF3F ^ {8'h00, dip_sw0[7:0]};

    //! The machine
    wire [7:0] xr, xg, xb;
    wire       xhs, xvs, xde;
    wire [9:0] xdac;

    xenophobe_core xeno
    (
        .clk           ( clk_sys       ),
        .reset         ( xeno_reset    ),
        .in0           ( xeno_in0      ),
        .in1           ( xeno_in1      ),
        .dsw           ( xeno_dsw      ),
        .main_rom_addr ( main_rom_addr ),
        .main_rom_req  ( main_rom_req  ),
        .main_rom_q    ( main_rom_q    ),
        .main_rom_ack  ( main_rom_done ),
        .snd_rom_addr  ( snd_rom_addr  ),
        .snd_rom_req   ( snd_rom_req   ),
        .snd_rom_q     ( snd_rom_q     ),
        .snd_rom_ack   ( snd_rom_done  ),
        .gfx_load_addr ( gfx_load_addr ),
        .gfx_load_data ( ioctl_data    ),
        .gfx_load_we   ( gfx_load_we   ),
        .spr_fetch_addr ( spr_fetch_addr ),
        .spr_fetch_req  ( spr_fetch_req  ),
        .spr_fetch_data ( spr_fetch_data ),
        .spr_fetch_done ( spr_fetch_done ),
        .r             ( xr            ),
        .g             ( xg            ),
        .b             ( xb            ),
        .hs            ( xhs           ),
        .vs            ( xvs           ),
        .de            ( xde           ),
        .audio_dac     ( xdac          ),
        .control_word  (               ),
        .watchdog_expired ( wdt_expired ),
        .dbg_strobes   ( dbg_strobes   ),
        .dbg_halted    ( dbg_halted    ),
        .dbg_bus_stuck ( dbg_bus_stuck ),
        .dbg_stuck_addr( dbg_stuck_addr ),
        .dbg_unmapped  ( dbg_unmapped   ),
        .dbg_fault_pc  ( dbg_fault_pc   )
    );

    wire        wdt_expired;
    wire  [5:0] dbg_strobes;
    wire        dbg_halted, dbg_bus_stuck, dbg_unmapped;
    wire [23:1] dbg_stuck_addr;
    wire [17:1] dbg_fault_pc;

    //! ------------------------------------------------------------------
    //! DEBUG OVERLAY (bring-up build): top rows show status squares and a
    //! test gradient so a dead machine is distinguishable from a dead
    //! video path. Remove after hardware bring-up.
    //! ------------------------------------------------------------------
    reg [9:0] dbg_x;
    reg [9:0] dbg_y;
    reg       xde_q1;
    always @(posedge clk_sys) begin
        xde_q1 <= xde;
        if (xde) dbg_x <= dbg_x + 1'd1;
        else begin
            dbg_x <= 0;
            if (xde_q1) dbg_y <= dbg_y + 1'd1;
        end
        if (xvs) dbg_y <= 0;
    end

    // liveness counters
    reg [23:0] hb_cnt;
    reg [15:0] mrom_cnt, srom_cnt, palw_cnt, sprb_cnt;
    reg        rom_loaded;
    reg        mreq_q, sreq_q, sbrd_q;
    always @(posedge clk_sys) begin
        hb_cnt <= hb_cnt + 1'd1;
        mreq_q <= main_rom_req;  if (main_rom_req & ~mreq_q) mrom_cnt <= mrom_cnt + 1'd1;
        sreq_q <= snd_rom_req;   if (snd_rom_req  & ~sreq_q) srom_cnt <= srom_cnt + 1'd1;
        sbrd_q <= spr_fetch_req; if (spr_fetch_req & ~sbrd_q) sprb_cnt <= sprb_cnt + 1'd1;
        if (ioctl_isROM) rom_loaded <= 1'b1;   // download seen since power-up
    end

    wire [7:0] dbg_stat = {
        pll_core_locked_s,          // 0 (leftmost)
        dataslot_allcomplete,       // 1
        rom_loaded,                 // 2
        sd_ready,                   // 3
        mrom_cnt[10],               // 4 main CPU fetch activity
        srom_cnt[10],               // 5 sound CPU fetch activity
        sprb_cnt[6],                // 6 sprite burst activity
        hb_cnt[23]                  // 7 heartbeat
    };

    //! ---- passive ROM integrity check -----------------------------------
    //! The 68000's first four reads ARE its reset vector, and we know exactly
    //! what those words must be, so capturing them verifies the data the CPU
    //! actually receives from SDRAM: 0006 4000 0000 A154 (SP 0x64000, PC 0xA154).
    reg [15:0] rv0, rv1, rv2, rv3;
    reg  [3:0] rv_got;
    reg        mrdone_q;
    always @(posedge clk_sys) begin
        mrdone_q <= main_rom_done;
        if (main_rom_done && !mrdone_q && main_rom_addr[17:3] == 15'd0) begin
            case (main_rom_addr[2:1])
                2'd0: begin rv0 <= main_rom_q; rv_got[0] <= 1'b1; end
                2'd1: begin rv1 <= main_rom_q; rv_got[1] <= 1'b1; end
                2'd2: begin rv2 <= main_rom_q; rv_got[2] <= 1'b1; end
                2'd3: begin rv3 <= main_rom_q; rv_got[3] <= 1'b1; end
            endcase
        end
    end
    // Second check at 0xA154 (the reset entry point, opcode 4E70). This lives
    // in a DIFFERENT sdram row than the vector, so it proves reads outside
    // row 0 return good data.
    reg rv_hi_got, rv_hi_ok;
    always @(posedge clk_sys) begin
        if (main_rom_done && !mrdone_q && main_rom_addr == 17'h50aa) begin
            rv_hi_got <= 1'b1;
            rv_hi_ok  <= (main_rom_q == 16'h4e70);
        end
    end

    wire rom_seen = &rv_got;
    wire rom_ok   = rom_seen && rv0 == 16'h0006 && rv1 == 16'h4000
                             && rv2 == 16'h0000 && rv3 == 16'ha154;

    //! ---- full ROM verifier ---------------------------------------------
    //! Once the download finishes, hold the machine in reset and read EVERY
    //! word of main ROM back through the same path the CPU uses, checksumming
    //! as we go. A few spot checks cannot catch a controller that mishandles
    //! particular rows or banks; this exercises all of them.
    localparam [31:0] ROM_SUM_EXPECT = 32'h546a99ab;
    //! Two passes: if both reads agree but differ from expected, the data in
    //! SDRAM is wrong (write side). If the two passes disagree, reads are
    //! unreliable (refresh/read side). That distinction decides where to look.
    reg [17:1] ver_addr;
    reg [31:0] ver_sum, ver_sum1;
    reg        ver_busy, ver_done, ver_ok, ver_stable, ver_req, ver_started;
    reg        ver_pass, dl_q;

    always @(posedge clk_sys) begin
        if (~pll_core_locked_s) begin
            ver_busy <= 1'b0; ver_done <= 1'b0; ver_ok <= 1'b0;
            ver_req  <= 1'b0; ver_started <= 1'b0;
        end else begin
            dl_q <= ioctl_download;
            if (dl_q && !ioctl_download && !ver_started) begin
                ver_started <= 1'b1;
                ver_busy    <= 1'b1;
                ver_pass    <= 1'b0;
                ver_addr    <= '0;
                ver_sum     <= '0;
                ver_req     <= 1'b1;
            end else if (ver_busy) begin
                if (ver_req && main_rom_done) begin
                    ver_sum <= ver_sum + {16'd0, main_rom_q};
                    ver_req <= 1'b0;
                end else if (!ver_req && !main_rom_done) begin
                    if (&ver_addr) begin
                        if (ver_pass == 1'b0) begin
                            ver_sum1 <= ver_sum;      // first pass complete
                            ver_pass <= 1'b1;
                            ver_addr <= '0;
                            ver_sum  <= '0;
                            ver_req  <= 1'b1;
                        end else begin
                            ver_busy   <= 1'b0;
                            ver_done   <= 1'b1;
                            ver_ok     <= (ver_sum1 == ROM_SUM_EXPECT);
                            ver_stable <= (ver_sum == ver_sum1);
                        end
                    end else begin
                        ver_addr <= ver_addr + 1'd1;
                        ver_req  <= 1'b1;
                    end
                end
            end
        end
    end

    //! ---- machine activity strobes --------------------------------------
    reg [15:0] c_pal, c_vram, c_spr, c_wdt, c_493, c_ptm;
    reg  [5:0] dbgs_q;
    always @(posedge clk_sys) begin
        dbgs_q <= dbg_strobes;
        if (dbg_strobes[5] & ~dbgs_q[5]) c_pal  <= c_pal  + 1'd1;
        if (dbg_strobes[4] & ~dbgs_q[4]) c_vram <= c_vram + 1'd1;
        if (dbg_strobes[3] & ~dbgs_q[3]) c_spr  <= c_spr  + 1'd1;
        if (dbg_strobes[2] & ~dbgs_q[2]) c_wdt  <= c_wdt  + 1'd1;
        if (dbg_strobes[1] & ~dbgs_q[1]) c_493  <= c_493  + 1'd1;
        if (dbg_strobes[0] & ~dbgs_q[0]) c_ptm  <= c_ptm  + 1'd1;
    end

    wire [7:0] dbg_stat2 = {
        ver_done,                   // 0 whole-ROM verify finished
        ver_ok,                     // 1 ROM matches expected checksum
        ver_stable,                 // 2 both read passes agree
        |c_pal,                     // 3 palette ever written
        c_wdt[3],                   // 4 watchdog kick activity
        ~wdt_expired,               // 5 green = watchdog healthy
        ~dbg_halted,                // 6 green = CPU not halted
        ~dbg_unmapped               // 7 green = never touched an undecoded addr
    };

    // Rows 3 and 4: the PROGRAM COUNTER at the moment the CPU first accessed
    // an undecoded address - i.e. the code responsible. Full address is
    // {row3, row4} << 1, so row3=0x50 row4=0xAA reads as PC 0xA154.
    wire [7:0] dbg_stat3 = dbg_fault_pc[16:9];
    wire [7:0] dbg_stat4 = dbg_fault_pc[8:1];

    wire [2:0] dbg_idx = dbg_x[8:6];
    wire       bit1 = dbg_stat [3'd7 - dbg_idx];
    wire       bit2 = dbg_stat2[3'd7 - dbg_idx];
    wire       bit3 = dbg_stat3[3'd7 - dbg_idx];
    wire       bit4 = dbg_stat4[3'd7 - dbg_idx];
    wire       in_row1 = (dbg_y < 10'd16);
    wire       in_row2 = (dbg_y >= 10'd16 && dbg_y < 10'd32);
    wire       in_row3 = (dbg_y >= 10'd32 && dbg_y < 10'd48);
    wire       in_row4 = (dbg_y >= 10'd48 && dbg_y < 10'd64);
    wire       in_grad = (dbg_y >= 10'd64 && dbg_y < 10'd80);
    wire       in_bits = in_row1 || in_row2 || in_row3 || in_row4;
    wire       cur_bit = in_row1 ? bit1 : in_row2 ? bit2 : in_row3 ? bit3 : bit4;

    // address rows are drawn blue-on-black so they read differently from the
    // red/green status rows
    wire [7:0] ovl_r = in_row1 || in_row2 ? (cur_bit ? 8'h00 : 8'hFF)
                     : in_row3 || in_row4 ? 8'h00
                     : in_grad ? dbg_x[7:0] : xr;
    wire [7:0] ovl_g = in_row1 || in_row2 ? (cur_bit ? 8'hFF : 8'h00)
                     : in_row3 || in_row4 ? (cur_bit ? 8'hFF : 8'h00)
                     : in_grad ? dbg_x[7:0] : xg;
    wire [7:0] ovl_b = in_row1 || in_row2 ? 8'h00
                     : in_row3 || in_row4 ? (cur_bit ? 8'hFF : 8'h40)
                     : in_grad ? 8'hFF : xb;

    //! Video: capture the 20 MHz-rate pixel stream on clk_vid for the mixer
    //! (same-PLL related clocks; the crossing is STA-timed)
    reg [7:0] vr_q, vg_q, vb_q;
    reg       vhs_q, vvs_q, vde_q;
    always @(posedge clk_vid) begin
        vr_q  <= ovl_r; vg_q <= ovl_g; vb_q <= ovl_b;
        vhs_q <= xhs; vvs_q <= xvs; vde_q <= xde;
    end
    assign core_r  = vr_q;
    assign core_g  = vg_q;
    assign core_b  = vb_q;
    assign core_hs = vhs_q;
    assign core_vs = vvs_q;
    assign core_de = vde_q;
    assign video_preset = 3'd0;

    //! Audio: DC-block the unsigned DAC stream (idle level is not midscale),
    //! leaky integrator tau ~13 ms at 40 MHz
    reg  [25:0] dc_acc = {1'b1, 25'b0};
    wire [15:0] dac_x64 = {xdac, 6'b0};
    wire signed [16:0] dc_diff = $signed({1'b0, dac_x64}) - $signed({1'b0, dc_acc[25:10]});
    always @(posedge clk_sys) begin
        dc_acc <= dc_acc + {{9{dc_diff[16]}}, dc_diff[16:0]};
    end
    wire signed [16:0] ac = dc_diff;   // already the AC term
    assign core_snd_l = (ac > 17'sd32767)  ? 16'h7FFF :
                        (ac < -17'sd32768) ? 16'h8000 : ac[15:0];
    assign core_snd_r = core_snd_l;

endmodule
