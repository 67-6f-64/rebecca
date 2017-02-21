/** 
 *   This file is part of rebecca.
 *
 *   rebecca is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   rebecca is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with rebecca.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * IocpPipeConnection.cpp
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */


/**
 *
 */
BOOL __thiscall sub_49F8B0(int this, DWORD dwMilliseconds)
{
  return WaitForSingleObject(*(HANDLE *)(this + 4), dwMilliseconds) == 0;
}



/**
 *
 */
int __thiscall sub_438650(int this)
{
  int result; // eax@1
  int v2; // eax@2
  int v3; // [sp+0h] [bp-58h]@1
  char v4; // [sp+4h] [bp-54h]@2
  char v5; // [sp+5h] [bp-53h]@2
  char v6; // [sp+6h] [bp-52h]@2
  char v7; // [sp+7h] [bp-51h]@2
  char v8; // [sp+8h] [bp-50h]@2
  char v9; // [sp+9h] [bp-4Fh]@2
  char v10; // [sp+Ah] [bp-4Eh]@2
  char v11; // [sp+Bh] [bp-4Dh]@2
  char v12; // [sp+Ch] [bp-4Ch]@2
  char v13; // [sp+Dh] [bp-4Bh]@2
  char v14; // [sp+Eh] [bp-4Ah]@2
  char v15; // [sp+Fh] [bp-49h]@2
  char v16; // [sp+10h] [bp-48h]@2
  char v17; // [sp+11h] [bp-47h]@2
  char v18; // [sp+12h] [bp-46h]@2
  char v19; // [sp+13h] [bp-45h]@2
  char v20; // [sp+14h] [bp-44h]@2
  char v21; // [sp+15h] [bp-43h]@2
  char v22; // [sp+16h] [bp-42h]@2
  char v23; // [sp+17h] [bp-41h]@2
  char v24; // [sp+18h] [bp-40h]@2
  char v25; // [sp+19h] [bp-3Fh]@2
  char v26; // [sp+1Ah] [bp-3Eh]@2
  char v27; // [sp+1Bh] [bp-3Dh]@2
  char v28; // [sp+1Ch] [bp-3Ch]@2
  char v29; // [sp+1Dh] [bp-3Bh]@2
  char v30; // [sp+1Eh] [bp-3Ah]@2
  char v31; // [sp+1Fh] [bp-39h]@2
  char v32; // [sp+20h] [bp-38h]@2
  char v33; // [sp+21h] [bp-37h]@2
  char v34; // [sp+22h] [bp-36h]@2
  char v35; // [sp+23h] [bp-35h]@2
  char v36; // [sp+24h] [bp-34h]@2
  char v37; // [sp+25h] [bp-33h]@2
  char v38; // [sp+26h] [bp-32h]@2
  char v39; // [sp+27h] [bp-31h]@2
  char v40; // [sp+28h] [bp-30h]@2
  char v41; // [sp+29h] [bp-2Fh]@2
  char v42; // [sp+2Ah] [bp-2Eh]@2
  char v43; // [sp+2Bh] [bp-2Dh]@2
  char v44; // [sp+2Ch] [bp-2Ch]@2
  char v45; // [sp+2Dh] [bp-2Bh]@2
  char v46; // [sp+2Eh] [bp-2Ah]@2
  char v47; // [sp+2Fh] [bp-29h]@2
  char v48; // [sp+30h] [bp-28h]@2
  char v49; // [sp+31h] [bp-27h]@2
  char v50; // [sp+32h] [bp-26h]@2
  char v51; // [sp+33h] [bp-25h]@2
  char v52; // [sp+34h] [bp-24h]@2
  char v53; // [sp+35h] [bp-23h]@2
  char v54; // [sp+36h] [bp-22h]@2
  char v55; // [sp+37h] [bp-21h]@2
  char v56; // [sp+38h] [bp-20h]@2
  char v57; // [sp+39h] [bp-1Fh]@2
  char v58; // [sp+3Ah] [bp-1Eh]@2
  char v59; // [sp+3Bh] [bp-1Dh]@2
  char v60; // [sp+3Ch] [bp-1Ch]@2
  char v61; // [sp+3Dh] [bp-1Bh]@2
  char v62; // [sp+3Eh] [bp-1Ah]@2
  char v63; // [sp+3Fh] [bp-19h]@2
  char v64; // [sp+40h] [bp-18h]@2
  char v65; // [sp+41h] [bp-17h]@2
  char v66; // [sp+42h] [bp-16h]@2
  char v67; // [sp+43h] [bp-15h]@2
  char v68; // [sp+44h] [bp-14h]@2
  char v69; // [sp+45h] [bp-13h]@2
  char v70; // [sp+46h] [bp-12h]@2
  char v71; // [sp+47h] [bp-11h]@2
  char v72; // [sp+48h] [bp-10h]@2
  char v73; // [sp+49h] [bp-Fh]@2
  char v74; // [sp+4Ah] [bp-Eh]@2
  char v75; // [sp+4Bh] [bp-Dh]@2
  char v76; // [sp+4Ch] [bp-Ch]@2
  char v77; // [sp+4Dh] [bp-Bh]@2
  char v78; // [sp+4Eh] [bp-Ah]@2
  char v79; // [sp+4Fh] [bp-9h]@2
  char v80; // [sp+50h] [bp-8h]@2
  char v81; // [sp+51h] [bp-7h]@2

  v3 = this;
  *(_BYTE *)(this + 96) = 1;
  result = sub_49F8B0(this, 0x1388u);
  if ( !result )
  {
    v4 = 91;
    v5 = 43;
    v6 = 93;
    v7 = 32;
    v8 = 80;
    v9 = 114;
    v10 = 111;
    v11 = 99;
    v12 = 101;
    v13 = 115;
    v14 = 115;
    v15 = 32;
    v16 = 105;
    v17 = 115;
    v18 = 32;
    v19 = 116;
    v20 = 101;
    v21 = 114;
    v22 = 109;
    v23 = 105;
    v24 = 110;
    v25 = 97;
    v26 = 116;
    v27 = 101;
    v28 = 100;
    v29 = 32;
    v30 = 98;
    v31 = 101;
    v32 = 99;
    v33 = 97;
    v34 = 117;
    v35 = 115;
    v36 = 101;
    v37 = 32;
    v38 = 84;
    v39 = 104;
    v40 = 114;
    v41 = 101;
    v42 = 97;
    v43 = 100;
    v44 = 32;
    v45 = 91;
    v46 = 37;
    v47 = 120;
    v48 = 93;
    v49 = 32;
    v50 = 105;
    v51 = 115;
    v52 = 32;
    v53 = 114;
    v54 = 117;
    v55 = 110;
    v56 = 110;
    v57 = 105;
    v58 = 110;
    v59 = 103;
    v60 = 32;
    v61 = 40;
    v62 = 105;
    v63 = 100;
    v64 = 58;
    v65 = 32;
    v66 = 37;
    v67 = 100;
    v68 = 44;
    v69 = 32;
    v70 = 111;
    v71 = 98;
    v72 = 106;
    v73 = 101;
    v74 = 99;
    v75 = 116;
    v76 = 58;
    v77 = 32;
    v78 = 37;
    v79 = 120;
    v80 = 41;
    v81 = 0;
    v2 = sub_4054C0(&v4, *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 8), v3);
    sub_4825A0(v2);
    sub_40F090();
    sub_494740(0);
    sub_40EA60();
    ExitProcess(0xE0300000);
  }
  return result;
}
