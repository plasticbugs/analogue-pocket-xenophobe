// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_system.h for the primary calling header

#ifndef VERILATED_VTB_SYSTEM___024UNIT_H_
#define VERILATED_VTB_SYSTEM___024UNIT_H_  // guard

#include "verilated.h"
#include "Vtb_system___024unit.h"


class Vtb_system__Syms;
struct Vtb_system_s_clks__struct__0 {
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__extReset;
    CData/*0:0*/ __PVT__pwrUp;
    CData/*0:0*/ __PVT__enPhi1;
    CData/*0:0*/ __PVT__enPhi2;

    bool operator==(const Vtb_system_s_clks__struct__0& rhs) const {
        return __PVT__clk == rhs.__PVT__clk
            && __PVT__extReset == rhs.__PVT__extReset
            && __PVT__pwrUp == rhs.__PVT__pwrUp
            && __PVT__enPhi1 == rhs.__PVT__enPhi1
            && __PVT__enPhi2 == rhs.__PVT__enPhi2;
    }
    bool operator!=(const Vtb_system_s_clks__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_system_s_clks__struct__0& rhs) const {
        if (__PVT__clk < rhs.__PVT__clk) return true;
        if (rhs.__PVT__clk < __PVT__clk) return false;
        if (__PVT__extReset < rhs.__PVT__extReset) return true;
        if (rhs.__PVT__extReset < __PVT__extReset) return false;
        if (__PVT__pwrUp < rhs.__PVT__pwrUp) return true;
        if (rhs.__PVT__pwrUp < __PVT__pwrUp) return false;
        if (__PVT__enPhi1 < rhs.__PVT__enPhi1) return true;
        if (rhs.__PVT__enPhi1 < __PVT__enPhi1) return false;
        if (__PVT__enPhi2 < rhs.__PVT__enPhi2) return true;
        if (rhs.__PVT__enPhi2 < __PVT__enPhi2) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_system_s_clks__struct__0> : public std::true_type {};
struct Vtb_system_s_irdecod__struct__0 {
    CData/*0:0*/ __PVT__isPcRel;
    CData/*0:0*/ __PVT__isTas;
    CData/*0:0*/ __PVT__implicitSp;
    CData/*0:0*/ __PVT__toCcr;
    CData/*0:0*/ __PVT__rxIsDt;
    CData/*0:0*/ __PVT__ryIsDt;
    CData/*0:0*/ __PVT__rxIsUsp;
    CData/*0:0*/ __PVT__rxIsMovem;
    CData/*0:0*/ __PVT__movemPreDecr;
    CData/*0:0*/ __PVT__isByte;
    CData/*0:0*/ __PVT__isMovep;
    CData/*2:0*/ __PVT__rx;
    CData/*2:0*/ __PVT__ry;
    CData/*0:0*/ __PVT__rxIsAreg;
    CData/*0:0*/ __PVT__ryIsAreg;
    SData/*15:0*/ __PVT__ftuConst;
    CData/*5:0*/ __PVT__macroTvn;
    CData/*0:0*/ __PVT__inhibitCcr;

    bool operator==(const Vtb_system_s_irdecod__struct__0& rhs) const {
        return __PVT__isPcRel == rhs.__PVT__isPcRel
            && __PVT__isTas == rhs.__PVT__isTas
            && __PVT__implicitSp == rhs.__PVT__implicitSp
            && __PVT__toCcr == rhs.__PVT__toCcr
            && __PVT__rxIsDt == rhs.__PVT__rxIsDt
            && __PVT__ryIsDt == rhs.__PVT__ryIsDt
            && __PVT__rxIsUsp == rhs.__PVT__rxIsUsp
            && __PVT__rxIsMovem == rhs.__PVT__rxIsMovem
            && __PVT__movemPreDecr == rhs.__PVT__movemPreDecr
            && __PVT__isByte == rhs.__PVT__isByte
            && __PVT__isMovep == rhs.__PVT__isMovep
            && __PVT__rx == rhs.__PVT__rx
            && __PVT__ry == rhs.__PVT__ry
            && __PVT__rxIsAreg == rhs.__PVT__rxIsAreg
            && __PVT__ryIsAreg == rhs.__PVT__ryIsAreg
            && __PVT__ftuConst == rhs.__PVT__ftuConst
            && __PVT__macroTvn == rhs.__PVT__macroTvn
            && __PVT__inhibitCcr == rhs.__PVT__inhibitCcr;
    }
    bool operator!=(const Vtb_system_s_irdecod__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_system_s_irdecod__struct__0& rhs) const {
        if (__PVT__isPcRel < rhs.__PVT__isPcRel) return true;
        if (rhs.__PVT__isPcRel < __PVT__isPcRel) return false;
        if (__PVT__isTas < rhs.__PVT__isTas) return true;
        if (rhs.__PVT__isTas < __PVT__isTas) return false;
        if (__PVT__implicitSp < rhs.__PVT__implicitSp) return true;
        if (rhs.__PVT__implicitSp < __PVT__implicitSp) return false;
        if (__PVT__toCcr < rhs.__PVT__toCcr) return true;
        if (rhs.__PVT__toCcr < __PVT__toCcr) return false;
        if (__PVT__rxIsDt < rhs.__PVT__rxIsDt) return true;
        if (rhs.__PVT__rxIsDt < __PVT__rxIsDt) return false;
        if (__PVT__ryIsDt < rhs.__PVT__ryIsDt) return true;
        if (rhs.__PVT__ryIsDt < __PVT__ryIsDt) return false;
        if (__PVT__rxIsUsp < rhs.__PVT__rxIsUsp) return true;
        if (rhs.__PVT__rxIsUsp < __PVT__rxIsUsp) return false;
        if (__PVT__rxIsMovem < rhs.__PVT__rxIsMovem) return true;
        if (rhs.__PVT__rxIsMovem < __PVT__rxIsMovem) return false;
        if (__PVT__movemPreDecr < rhs.__PVT__movemPreDecr) return true;
        if (rhs.__PVT__movemPreDecr < __PVT__movemPreDecr) return false;
        if (__PVT__isByte < rhs.__PVT__isByte) return true;
        if (rhs.__PVT__isByte < __PVT__isByte) return false;
        if (__PVT__isMovep < rhs.__PVT__isMovep) return true;
        if (rhs.__PVT__isMovep < __PVT__isMovep) return false;
        if (__PVT__rx < rhs.__PVT__rx) return true;
        if (rhs.__PVT__rx < __PVT__rx) return false;
        if (__PVT__ry < rhs.__PVT__ry) return true;
        if (rhs.__PVT__ry < __PVT__ry) return false;
        if (__PVT__rxIsAreg < rhs.__PVT__rxIsAreg) return true;
        if (rhs.__PVT__rxIsAreg < __PVT__rxIsAreg) return false;
        if (__PVT__ryIsAreg < rhs.__PVT__ryIsAreg) return true;
        if (rhs.__PVT__ryIsAreg < __PVT__ryIsAreg) return false;
        if (__PVT__ftuConst < rhs.__PVT__ftuConst) return true;
        if (rhs.__PVT__ftuConst < __PVT__ftuConst) return false;
        if (__PVT__macroTvn < rhs.__PVT__macroTvn) return true;
        if (rhs.__PVT__macroTvn < __PVT__macroTvn) return false;
        if (__PVT__inhibitCcr < rhs.__PVT__inhibitCcr) return true;
        if (rhs.__PVT__inhibitCcr < __PVT__inhibitCcr) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_system_s_irdecod__struct__0> : public std::true_type {};
struct Vtb_system_s_nanod__struct__0 {
    CData/*0:0*/ __PVT__permStart;
    CData/*0:0*/ __PVT__waitBusFinish;
    CData/*0:0*/ __PVT__isWrite;
    CData/*0:0*/ __PVT__busByte;
    CData/*0:0*/ __PVT__isRmc;
    CData/*0:0*/ __PVT__noLowByte;
    CData/*0:0*/ __PVT__noHighByte;
    CData/*0:0*/ __PVT__updTpend;
    CData/*0:0*/ __PVT__clrTpend;
    CData/*0:0*/ __PVT__tvn2Ftu;
    CData/*0:0*/ __PVT__const2Ftu;
    CData/*0:0*/ __PVT__ftu2Dbl;
    CData/*0:0*/ __PVT__ftu2Abl;
    CData/*0:0*/ __PVT__abl2Pren;
    CData/*0:0*/ __PVT__updPren;
    CData/*0:0*/ __PVT__inl2psw;
    CData/*0:0*/ __PVT__ftu2Sr;
    CData/*0:0*/ __PVT__sr2Ftu;
    CData/*0:0*/ __PVT__ftu2Ccr;
    CData/*0:0*/ __PVT__pswIToFtu;
    CData/*0:0*/ __PVT__ird2Ftu;
    CData/*0:0*/ __PVT__ssw2Ftu;
    CData/*0:0*/ __PVT__initST;
    CData/*0:0*/ __PVT__Ir2Ird;
    CData/*0:0*/ __PVT__auClkEn;
    CData/*0:0*/ __PVT__noSpAlign;
    CData/*2:0*/ __PVT__auCntrl;
    CData/*0:0*/ __PVT__todbin;
    CData/*0:0*/ __PVT__toIrc;
    CData/*0:0*/ __PVT__dbl2Atl;
    CData/*0:0*/ __PVT__abl2Atl;
    CData/*0:0*/ __PVT__atl2Abl;
    CData/*0:0*/ __PVT__atl2Dbl;
    CData/*0:0*/ __PVT__abh2Ath;
    CData/*0:0*/ __PVT__dbh2Ath;
    CData/*0:0*/ __PVT__ath2Dbh;
    CData/*0:0*/ __PVT__ath2Abh;
    CData/*0:0*/ __PVT__db2Aob;
    CData/*0:0*/ __PVT__ab2Aob;
    CData/*0:0*/ __PVT__au2Aob;
    CData/*0:0*/ __PVT__aob2Ab;
    CData/*0:0*/ __PVT__updSsw;
    CData/*1:0*/ __PVT__dobCtrl;
    CData/*0:0*/ __PVT__abh2reg;
    CData/*0:0*/ __PVT__abl2reg;
    CData/*0:0*/ __PVT__reg2abl;
    CData/*0:0*/ __PVT__reg2abh;
    CData/*0:0*/ __PVT__dbh2reg;
    CData/*0:0*/ __PVT__dbl2reg;
    CData/*0:0*/ __PVT__reg2dbl;
    CData/*0:0*/ __PVT__reg2dbh;
    CData/*0:0*/ __PVT__ssp;
    CData/*0:0*/ __PVT__pchdbh;
    CData/*0:0*/ __PVT__pcldbl;
    CData/*0:0*/ __PVT__pclabl;
    CData/*0:0*/ __PVT__pchabh;
    CData/*0:0*/ __PVT__rxh2dbh;
    CData/*0:0*/ __PVT__rxh2abh;
    CData/*0:0*/ __PVT__dbl2rxl;
    CData/*0:0*/ __PVT__dbh2rxh;
    CData/*0:0*/ __PVT__rxl2db;
    CData/*0:0*/ __PVT__rxl2ab;
    CData/*0:0*/ __PVT__abl2rxl;
    CData/*0:0*/ __PVT__abh2rxh;
    CData/*0:0*/ __PVT__dbh2ryh;
    CData/*0:0*/ __PVT__abh2ryh;
    CData/*0:0*/ __PVT__ryl2db;
    CData/*0:0*/ __PVT__ryl2ab;
    CData/*0:0*/ __PVT__ryh2dbh;
    CData/*0:0*/ __PVT__ryh2abh;
    CData/*0:0*/ __PVT__dbl2ryl;
    CData/*0:0*/ __PVT__abl2ryl;
    CData/*0:0*/ __PVT__rz;
    CData/*0:0*/ __PVT__rxlDbl;
    CData/*2:0*/ __PVT__aluColumn;
    CData/*1:0*/ __PVT__aluDctrl;
    CData/*0:0*/ __PVT__aluActrl;
    CData/*0:0*/ __PVT__aluInit;
    CData/*0:0*/ __PVT__aluFinish;
    CData/*0:0*/ __PVT__abd2Dcr;
    CData/*0:0*/ __PVT__dcr2Dbd;
    CData/*0:0*/ __PVT__dbd2Alue;
    CData/*0:0*/ __PVT__alue2Dbd;
    CData/*0:0*/ __PVT__dbd2Alub;
    CData/*0:0*/ __PVT__abd2Alub;
    CData/*0:0*/ __PVT__alu2Dbd;
    CData/*0:0*/ __PVT__alu2Abd;
    CData/*0:0*/ __PVT__au2Db;
    CData/*0:0*/ __PVT__au2Ab;
    CData/*0:0*/ __PVT__au2Pc;
    CData/*0:0*/ __PVT__dbin2Abd;
    CData/*0:0*/ __PVT__dbin2Dbd;
    CData/*0:0*/ __PVT__extDbh;
    CData/*0:0*/ __PVT__extAbh;
    CData/*0:0*/ __PVT__ablAbd;
    CData/*0:0*/ __PVT__ablAbh;
    CData/*0:0*/ __PVT__dblDbd;
    CData/*0:0*/ __PVT__dblDbh;
    CData/*0:0*/ __PVT__abdIsByte;

    bool operator==(const Vtb_system_s_nanod__struct__0& rhs) const {
        return __PVT__permStart == rhs.__PVT__permStart
            && __PVT__waitBusFinish == rhs.__PVT__waitBusFinish
            && __PVT__isWrite == rhs.__PVT__isWrite
            && __PVT__busByte == rhs.__PVT__busByte
            && __PVT__isRmc == rhs.__PVT__isRmc
            && __PVT__noLowByte == rhs.__PVT__noLowByte
            && __PVT__noHighByte == rhs.__PVT__noHighByte
            && __PVT__updTpend == rhs.__PVT__updTpend
            && __PVT__clrTpend == rhs.__PVT__clrTpend
            && __PVT__tvn2Ftu == rhs.__PVT__tvn2Ftu
            && __PVT__const2Ftu == rhs.__PVT__const2Ftu
            && __PVT__ftu2Dbl == rhs.__PVT__ftu2Dbl
            && __PVT__ftu2Abl == rhs.__PVT__ftu2Abl
            && __PVT__abl2Pren == rhs.__PVT__abl2Pren
            && __PVT__updPren == rhs.__PVT__updPren
            && __PVT__inl2psw == rhs.__PVT__inl2psw
            && __PVT__ftu2Sr == rhs.__PVT__ftu2Sr
            && __PVT__sr2Ftu == rhs.__PVT__sr2Ftu
            && __PVT__ftu2Ccr == rhs.__PVT__ftu2Ccr
            && __PVT__pswIToFtu == rhs.__PVT__pswIToFtu
            && __PVT__ird2Ftu == rhs.__PVT__ird2Ftu
            && __PVT__ssw2Ftu == rhs.__PVT__ssw2Ftu
            && __PVT__initST == rhs.__PVT__initST
            && __PVT__Ir2Ird == rhs.__PVT__Ir2Ird
            && __PVT__auClkEn == rhs.__PVT__auClkEn
            && __PVT__noSpAlign == rhs.__PVT__noSpAlign
            && __PVT__auCntrl == rhs.__PVT__auCntrl
            && __PVT__todbin == rhs.__PVT__todbin
            && __PVT__toIrc == rhs.__PVT__toIrc
            && __PVT__dbl2Atl == rhs.__PVT__dbl2Atl
            && __PVT__abl2Atl == rhs.__PVT__abl2Atl
            && __PVT__atl2Abl == rhs.__PVT__atl2Abl
            && __PVT__atl2Dbl == rhs.__PVT__atl2Dbl
            && __PVT__abh2Ath == rhs.__PVT__abh2Ath
            && __PVT__dbh2Ath == rhs.__PVT__dbh2Ath
            && __PVT__ath2Dbh == rhs.__PVT__ath2Dbh
            && __PVT__ath2Abh == rhs.__PVT__ath2Abh
            && __PVT__db2Aob == rhs.__PVT__db2Aob
            && __PVT__ab2Aob == rhs.__PVT__ab2Aob
            && __PVT__au2Aob == rhs.__PVT__au2Aob
            && __PVT__aob2Ab == rhs.__PVT__aob2Ab
            && __PVT__updSsw == rhs.__PVT__updSsw
            && __PVT__dobCtrl == rhs.__PVT__dobCtrl
            && __PVT__abh2reg == rhs.__PVT__abh2reg
            && __PVT__abl2reg == rhs.__PVT__abl2reg
            && __PVT__reg2abl == rhs.__PVT__reg2abl
            && __PVT__reg2abh == rhs.__PVT__reg2abh
            && __PVT__dbh2reg == rhs.__PVT__dbh2reg
            && __PVT__dbl2reg == rhs.__PVT__dbl2reg
            && __PVT__reg2dbl == rhs.__PVT__reg2dbl
            && __PVT__reg2dbh == rhs.__PVT__reg2dbh
            && __PVT__ssp == rhs.__PVT__ssp
            && __PVT__pchdbh == rhs.__PVT__pchdbh
            && __PVT__pcldbl == rhs.__PVT__pcldbl
            && __PVT__pclabl == rhs.__PVT__pclabl
            && __PVT__pchabh == rhs.__PVT__pchabh
            && __PVT__rxh2dbh == rhs.__PVT__rxh2dbh
            && __PVT__rxh2abh == rhs.__PVT__rxh2abh
            && __PVT__dbl2rxl == rhs.__PVT__dbl2rxl
            && __PVT__dbh2rxh == rhs.__PVT__dbh2rxh
            && __PVT__rxl2db == rhs.__PVT__rxl2db
            && __PVT__rxl2ab == rhs.__PVT__rxl2ab
            && __PVT__abl2rxl == rhs.__PVT__abl2rxl
            && __PVT__abh2rxh == rhs.__PVT__abh2rxh
            && __PVT__dbh2ryh == rhs.__PVT__dbh2ryh
            && __PVT__abh2ryh == rhs.__PVT__abh2ryh
            && __PVT__ryl2db == rhs.__PVT__ryl2db
            && __PVT__ryl2ab == rhs.__PVT__ryl2ab
            && __PVT__ryh2dbh == rhs.__PVT__ryh2dbh
            && __PVT__ryh2abh == rhs.__PVT__ryh2abh
            && __PVT__dbl2ryl == rhs.__PVT__dbl2ryl
            && __PVT__abl2ryl == rhs.__PVT__abl2ryl
            && __PVT__rz == rhs.__PVT__rz
            && __PVT__rxlDbl == rhs.__PVT__rxlDbl
            && __PVT__aluColumn == rhs.__PVT__aluColumn
            && __PVT__aluDctrl == rhs.__PVT__aluDctrl
            && __PVT__aluActrl == rhs.__PVT__aluActrl
            && __PVT__aluInit == rhs.__PVT__aluInit
            && __PVT__aluFinish == rhs.__PVT__aluFinish
            && __PVT__abd2Dcr == rhs.__PVT__abd2Dcr
            && __PVT__dcr2Dbd == rhs.__PVT__dcr2Dbd
            && __PVT__dbd2Alue == rhs.__PVT__dbd2Alue
            && __PVT__alue2Dbd == rhs.__PVT__alue2Dbd
            && __PVT__dbd2Alub == rhs.__PVT__dbd2Alub
            && __PVT__abd2Alub == rhs.__PVT__abd2Alub
            && __PVT__alu2Dbd == rhs.__PVT__alu2Dbd
            && __PVT__alu2Abd == rhs.__PVT__alu2Abd
            && __PVT__au2Db == rhs.__PVT__au2Db
            && __PVT__au2Ab == rhs.__PVT__au2Ab
            && __PVT__au2Pc == rhs.__PVT__au2Pc
            && __PVT__dbin2Abd == rhs.__PVT__dbin2Abd
            && __PVT__dbin2Dbd == rhs.__PVT__dbin2Dbd
            && __PVT__extDbh == rhs.__PVT__extDbh
            && __PVT__extAbh == rhs.__PVT__extAbh
            && __PVT__ablAbd == rhs.__PVT__ablAbd
            && __PVT__ablAbh == rhs.__PVT__ablAbh
            && __PVT__dblDbd == rhs.__PVT__dblDbd
            && __PVT__dblDbh == rhs.__PVT__dblDbh
            && __PVT__abdIsByte == rhs.__PVT__abdIsByte;
    }
    bool operator!=(const Vtb_system_s_nanod__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_system_s_nanod__struct__0& rhs) const {
        if (__PVT__permStart < rhs.__PVT__permStart) return true;
        if (rhs.__PVT__permStart < __PVT__permStart) return false;
        if (__PVT__waitBusFinish < rhs.__PVT__waitBusFinish) return true;
        if (rhs.__PVT__waitBusFinish < __PVT__waitBusFinish) return false;
        if (__PVT__isWrite < rhs.__PVT__isWrite) return true;
        if (rhs.__PVT__isWrite < __PVT__isWrite) return false;
        if (__PVT__busByte < rhs.__PVT__busByte) return true;
        if (rhs.__PVT__busByte < __PVT__busByte) return false;
        if (__PVT__isRmc < rhs.__PVT__isRmc) return true;
        if (rhs.__PVT__isRmc < __PVT__isRmc) return false;
        if (__PVT__noLowByte < rhs.__PVT__noLowByte) return true;
        if (rhs.__PVT__noLowByte < __PVT__noLowByte) return false;
        if (__PVT__noHighByte < rhs.__PVT__noHighByte) return true;
        if (rhs.__PVT__noHighByte < __PVT__noHighByte) return false;
        if (__PVT__updTpend < rhs.__PVT__updTpend) return true;
        if (rhs.__PVT__updTpend < __PVT__updTpend) return false;
        if (__PVT__clrTpend < rhs.__PVT__clrTpend) return true;
        if (rhs.__PVT__clrTpend < __PVT__clrTpend) return false;
        if (__PVT__tvn2Ftu < rhs.__PVT__tvn2Ftu) return true;
        if (rhs.__PVT__tvn2Ftu < __PVT__tvn2Ftu) return false;
        if (__PVT__const2Ftu < rhs.__PVT__const2Ftu) return true;
        if (rhs.__PVT__const2Ftu < __PVT__const2Ftu) return false;
        if (__PVT__ftu2Dbl < rhs.__PVT__ftu2Dbl) return true;
        if (rhs.__PVT__ftu2Dbl < __PVT__ftu2Dbl) return false;
        if (__PVT__ftu2Abl < rhs.__PVT__ftu2Abl) return true;
        if (rhs.__PVT__ftu2Abl < __PVT__ftu2Abl) return false;
        if (__PVT__abl2Pren < rhs.__PVT__abl2Pren) return true;
        if (rhs.__PVT__abl2Pren < __PVT__abl2Pren) return false;
        if (__PVT__updPren < rhs.__PVT__updPren) return true;
        if (rhs.__PVT__updPren < __PVT__updPren) return false;
        if (__PVT__inl2psw < rhs.__PVT__inl2psw) return true;
        if (rhs.__PVT__inl2psw < __PVT__inl2psw) return false;
        if (__PVT__ftu2Sr < rhs.__PVT__ftu2Sr) return true;
        if (rhs.__PVT__ftu2Sr < __PVT__ftu2Sr) return false;
        if (__PVT__sr2Ftu < rhs.__PVT__sr2Ftu) return true;
        if (rhs.__PVT__sr2Ftu < __PVT__sr2Ftu) return false;
        if (__PVT__ftu2Ccr < rhs.__PVT__ftu2Ccr) return true;
        if (rhs.__PVT__ftu2Ccr < __PVT__ftu2Ccr) return false;
        if (__PVT__pswIToFtu < rhs.__PVT__pswIToFtu) return true;
        if (rhs.__PVT__pswIToFtu < __PVT__pswIToFtu) return false;
        if (__PVT__ird2Ftu < rhs.__PVT__ird2Ftu) return true;
        if (rhs.__PVT__ird2Ftu < __PVT__ird2Ftu) return false;
        if (__PVT__ssw2Ftu < rhs.__PVT__ssw2Ftu) return true;
        if (rhs.__PVT__ssw2Ftu < __PVT__ssw2Ftu) return false;
        if (__PVT__initST < rhs.__PVT__initST) return true;
        if (rhs.__PVT__initST < __PVT__initST) return false;
        if (__PVT__Ir2Ird < rhs.__PVT__Ir2Ird) return true;
        if (rhs.__PVT__Ir2Ird < __PVT__Ir2Ird) return false;
        if (__PVT__auClkEn < rhs.__PVT__auClkEn) return true;
        if (rhs.__PVT__auClkEn < __PVT__auClkEn) return false;
        if (__PVT__noSpAlign < rhs.__PVT__noSpAlign) return true;
        if (rhs.__PVT__noSpAlign < __PVT__noSpAlign) return false;
        if (__PVT__auCntrl < rhs.__PVT__auCntrl) return true;
        if (rhs.__PVT__auCntrl < __PVT__auCntrl) return false;
        if (__PVT__todbin < rhs.__PVT__todbin) return true;
        if (rhs.__PVT__todbin < __PVT__todbin) return false;
        if (__PVT__toIrc < rhs.__PVT__toIrc) return true;
        if (rhs.__PVT__toIrc < __PVT__toIrc) return false;
        if (__PVT__dbl2Atl < rhs.__PVT__dbl2Atl) return true;
        if (rhs.__PVT__dbl2Atl < __PVT__dbl2Atl) return false;
        if (__PVT__abl2Atl < rhs.__PVT__abl2Atl) return true;
        if (rhs.__PVT__abl2Atl < __PVT__abl2Atl) return false;
        if (__PVT__atl2Abl < rhs.__PVT__atl2Abl) return true;
        if (rhs.__PVT__atl2Abl < __PVT__atl2Abl) return false;
        if (__PVT__atl2Dbl < rhs.__PVT__atl2Dbl) return true;
        if (rhs.__PVT__atl2Dbl < __PVT__atl2Dbl) return false;
        if (__PVT__abh2Ath < rhs.__PVT__abh2Ath) return true;
        if (rhs.__PVT__abh2Ath < __PVT__abh2Ath) return false;
        if (__PVT__dbh2Ath < rhs.__PVT__dbh2Ath) return true;
        if (rhs.__PVT__dbh2Ath < __PVT__dbh2Ath) return false;
        if (__PVT__ath2Dbh < rhs.__PVT__ath2Dbh) return true;
        if (rhs.__PVT__ath2Dbh < __PVT__ath2Dbh) return false;
        if (__PVT__ath2Abh < rhs.__PVT__ath2Abh) return true;
        if (rhs.__PVT__ath2Abh < __PVT__ath2Abh) return false;
        if (__PVT__db2Aob < rhs.__PVT__db2Aob) return true;
        if (rhs.__PVT__db2Aob < __PVT__db2Aob) return false;
        if (__PVT__ab2Aob < rhs.__PVT__ab2Aob) return true;
        if (rhs.__PVT__ab2Aob < __PVT__ab2Aob) return false;
        if (__PVT__au2Aob < rhs.__PVT__au2Aob) return true;
        if (rhs.__PVT__au2Aob < __PVT__au2Aob) return false;
        if (__PVT__aob2Ab < rhs.__PVT__aob2Ab) return true;
        if (rhs.__PVT__aob2Ab < __PVT__aob2Ab) return false;
        if (__PVT__updSsw < rhs.__PVT__updSsw) return true;
        if (rhs.__PVT__updSsw < __PVT__updSsw) return false;
        if (__PVT__dobCtrl < rhs.__PVT__dobCtrl) return true;
        if (rhs.__PVT__dobCtrl < __PVT__dobCtrl) return false;
        if (__PVT__abh2reg < rhs.__PVT__abh2reg) return true;
        if (rhs.__PVT__abh2reg < __PVT__abh2reg) return false;
        if (__PVT__abl2reg < rhs.__PVT__abl2reg) return true;
        if (rhs.__PVT__abl2reg < __PVT__abl2reg) return false;
        if (__PVT__reg2abl < rhs.__PVT__reg2abl) return true;
        if (rhs.__PVT__reg2abl < __PVT__reg2abl) return false;
        if (__PVT__reg2abh < rhs.__PVT__reg2abh) return true;
        if (rhs.__PVT__reg2abh < __PVT__reg2abh) return false;
        if (__PVT__dbh2reg < rhs.__PVT__dbh2reg) return true;
        if (rhs.__PVT__dbh2reg < __PVT__dbh2reg) return false;
        if (__PVT__dbl2reg < rhs.__PVT__dbl2reg) return true;
        if (rhs.__PVT__dbl2reg < __PVT__dbl2reg) return false;
        if (__PVT__reg2dbl < rhs.__PVT__reg2dbl) return true;
        if (rhs.__PVT__reg2dbl < __PVT__reg2dbl) return false;
        if (__PVT__reg2dbh < rhs.__PVT__reg2dbh) return true;
        if (rhs.__PVT__reg2dbh < __PVT__reg2dbh) return false;
        if (__PVT__ssp < rhs.__PVT__ssp) return true;
        if (rhs.__PVT__ssp < __PVT__ssp) return false;
        if (__PVT__pchdbh < rhs.__PVT__pchdbh) return true;
        if (rhs.__PVT__pchdbh < __PVT__pchdbh) return false;
        if (__PVT__pcldbl < rhs.__PVT__pcldbl) return true;
        if (rhs.__PVT__pcldbl < __PVT__pcldbl) return false;
        if (__PVT__pclabl < rhs.__PVT__pclabl) return true;
        if (rhs.__PVT__pclabl < __PVT__pclabl) return false;
        if (__PVT__pchabh < rhs.__PVT__pchabh) return true;
        if (rhs.__PVT__pchabh < __PVT__pchabh) return false;
        if (__PVT__rxh2dbh < rhs.__PVT__rxh2dbh) return true;
        if (rhs.__PVT__rxh2dbh < __PVT__rxh2dbh) return false;
        if (__PVT__rxh2abh < rhs.__PVT__rxh2abh) return true;
        if (rhs.__PVT__rxh2abh < __PVT__rxh2abh) return false;
        if (__PVT__dbl2rxl < rhs.__PVT__dbl2rxl) return true;
        if (rhs.__PVT__dbl2rxl < __PVT__dbl2rxl) return false;
        if (__PVT__dbh2rxh < rhs.__PVT__dbh2rxh) return true;
        if (rhs.__PVT__dbh2rxh < __PVT__dbh2rxh) return false;
        if (__PVT__rxl2db < rhs.__PVT__rxl2db) return true;
        if (rhs.__PVT__rxl2db < __PVT__rxl2db) return false;
        if (__PVT__rxl2ab < rhs.__PVT__rxl2ab) return true;
        if (rhs.__PVT__rxl2ab < __PVT__rxl2ab) return false;
        if (__PVT__abl2rxl < rhs.__PVT__abl2rxl) return true;
        if (rhs.__PVT__abl2rxl < __PVT__abl2rxl) return false;
        if (__PVT__abh2rxh < rhs.__PVT__abh2rxh) return true;
        if (rhs.__PVT__abh2rxh < __PVT__abh2rxh) return false;
        if (__PVT__dbh2ryh < rhs.__PVT__dbh2ryh) return true;
        if (rhs.__PVT__dbh2ryh < __PVT__dbh2ryh) return false;
        if (__PVT__abh2ryh < rhs.__PVT__abh2ryh) return true;
        if (rhs.__PVT__abh2ryh < __PVT__abh2ryh) return false;
        if (__PVT__ryl2db < rhs.__PVT__ryl2db) return true;
        if (rhs.__PVT__ryl2db < __PVT__ryl2db) return false;
        if (__PVT__ryl2ab < rhs.__PVT__ryl2ab) return true;
        if (rhs.__PVT__ryl2ab < __PVT__ryl2ab) return false;
        if (__PVT__ryh2dbh < rhs.__PVT__ryh2dbh) return true;
        if (rhs.__PVT__ryh2dbh < __PVT__ryh2dbh) return false;
        if (__PVT__ryh2abh < rhs.__PVT__ryh2abh) return true;
        if (rhs.__PVT__ryh2abh < __PVT__ryh2abh) return false;
        if (__PVT__dbl2ryl < rhs.__PVT__dbl2ryl) return true;
        if (rhs.__PVT__dbl2ryl < __PVT__dbl2ryl) return false;
        if (__PVT__abl2ryl < rhs.__PVT__abl2ryl) return true;
        if (rhs.__PVT__abl2ryl < __PVT__abl2ryl) return false;
        if (__PVT__rz < rhs.__PVT__rz) return true;
        if (rhs.__PVT__rz < __PVT__rz) return false;
        if (__PVT__rxlDbl < rhs.__PVT__rxlDbl) return true;
        if (rhs.__PVT__rxlDbl < __PVT__rxlDbl) return false;
        if (__PVT__aluColumn < rhs.__PVT__aluColumn) return true;
        if (rhs.__PVT__aluColumn < __PVT__aluColumn) return false;
        if (__PVT__aluDctrl < rhs.__PVT__aluDctrl) return true;
        if (rhs.__PVT__aluDctrl < __PVT__aluDctrl) return false;
        if (__PVT__aluActrl < rhs.__PVT__aluActrl) return true;
        if (rhs.__PVT__aluActrl < __PVT__aluActrl) return false;
        if (__PVT__aluInit < rhs.__PVT__aluInit) return true;
        if (rhs.__PVT__aluInit < __PVT__aluInit) return false;
        if (__PVT__aluFinish < rhs.__PVT__aluFinish) return true;
        if (rhs.__PVT__aluFinish < __PVT__aluFinish) return false;
        if (__PVT__abd2Dcr < rhs.__PVT__abd2Dcr) return true;
        if (rhs.__PVT__abd2Dcr < __PVT__abd2Dcr) return false;
        if (__PVT__dcr2Dbd < rhs.__PVT__dcr2Dbd) return true;
        if (rhs.__PVT__dcr2Dbd < __PVT__dcr2Dbd) return false;
        if (__PVT__dbd2Alue < rhs.__PVT__dbd2Alue) return true;
        if (rhs.__PVT__dbd2Alue < __PVT__dbd2Alue) return false;
        if (__PVT__alue2Dbd < rhs.__PVT__alue2Dbd) return true;
        if (rhs.__PVT__alue2Dbd < __PVT__alue2Dbd) return false;
        if (__PVT__dbd2Alub < rhs.__PVT__dbd2Alub) return true;
        if (rhs.__PVT__dbd2Alub < __PVT__dbd2Alub) return false;
        if (__PVT__abd2Alub < rhs.__PVT__abd2Alub) return true;
        if (rhs.__PVT__abd2Alub < __PVT__abd2Alub) return false;
        if (__PVT__alu2Dbd < rhs.__PVT__alu2Dbd) return true;
        if (rhs.__PVT__alu2Dbd < __PVT__alu2Dbd) return false;
        if (__PVT__alu2Abd < rhs.__PVT__alu2Abd) return true;
        if (rhs.__PVT__alu2Abd < __PVT__alu2Abd) return false;
        if (__PVT__au2Db < rhs.__PVT__au2Db) return true;
        if (rhs.__PVT__au2Db < __PVT__au2Db) return false;
        if (__PVT__au2Ab < rhs.__PVT__au2Ab) return true;
        if (rhs.__PVT__au2Ab < __PVT__au2Ab) return false;
        if (__PVT__au2Pc < rhs.__PVT__au2Pc) return true;
        if (rhs.__PVT__au2Pc < __PVT__au2Pc) return false;
        if (__PVT__dbin2Abd < rhs.__PVT__dbin2Abd) return true;
        if (rhs.__PVT__dbin2Abd < __PVT__dbin2Abd) return false;
        if (__PVT__dbin2Dbd < rhs.__PVT__dbin2Dbd) return true;
        if (rhs.__PVT__dbin2Dbd < __PVT__dbin2Dbd) return false;
        if (__PVT__extDbh < rhs.__PVT__extDbh) return true;
        if (rhs.__PVT__extDbh < __PVT__extDbh) return false;
        if (__PVT__extAbh < rhs.__PVT__extAbh) return true;
        if (rhs.__PVT__extAbh < __PVT__extAbh) return false;
        if (__PVT__ablAbd < rhs.__PVT__ablAbd) return true;
        if (rhs.__PVT__ablAbd < __PVT__ablAbd) return false;
        if (__PVT__ablAbh < rhs.__PVT__ablAbh) return true;
        if (rhs.__PVT__ablAbh < __PVT__ablAbh) return false;
        if (__PVT__dblDbd < rhs.__PVT__dblDbd) return true;
        if (rhs.__PVT__dblDbd < __PVT__dblDbd) return false;
        if (__PVT__dblDbh < rhs.__PVT__dblDbh) return true;
        if (rhs.__PVT__dblDbh < __PVT__dblDbh) return false;
        if (__PVT__abdIsByte < rhs.__PVT__abdIsByte) return true;
        if (rhs.__PVT__abdIsByte < __PVT__abdIsByte) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_system_s_nanod__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_system___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_system__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_system___024unit();
    ~Vtb_system___024unit();
    void ctor(Vtb_system__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_system___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
