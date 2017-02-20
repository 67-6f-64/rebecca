/**
 * ParserEngine.cpp
 * poco/XML/src/ParserEngine.cpp
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */




/** 
 * handleError
 *
 * @param int errorNo
 */
void __thiscall sub_573600(void *this, int a2)
{
  int v2; // [sp+0h] [bp-135Ch]@1
  char v3; // [sp+70h] [bp-12ECh]@11
  char v4; // [sp+D4h] [bp-1288h]@75
  char v5; // [sp+138h] [bp-1224h]@27
  char v6; // [sp+19Ch] [bp-11C0h]@73
  char v7; // [sp+200h] [bp-115Ch]@35
  char v8; // [sp+264h] [bp-10F8h]@71
  char v9; // [sp+2C8h] [bp-1094h]@19
  char v10; // [sp+32Ch] [bp-1030h]@69
  char v11; // [sp+390h] [bp-FCCh]@5
  char v12; // [sp+3F4h] [bp-F68h]@67
  char v13; // [sp+458h] [bp-F04h]@31
  char v14; // [sp+4BCh] [bp-EA0h]@65
  char v15; // [sp+520h] [bp-E3Ch]@23
  char v16; // [sp+584h] [bp-DD8h]@63
  char v17; // [sp+5E8h] [bp-D74h]@15
  char v18; // [sp+64Ch] [bp-D10h]@61
  char v19; // [sp+6B0h] [bp-CACh]@7
  char v20; // [sp+714h] [bp-C48h]@59
  char v21; // [sp+778h] [bp-BE4h]@37
  char v22; // [sp+7DCh] [bp-B80h]@57
  char v23; // [sp+840h] [bp-B1Ch]@33
  char v24; // [sp+8A4h] [bp-AB8h]@55
  char v25; // [sp+908h] [bp-A54h]@29
  char v26; // [sp+96Ch] [bp-9F0h]@53
  char v27; // [sp+9D0h] [bp-98Ch]@25
  char v28; // [sp+A34h] [bp-928h]@51
  char v29; // [sp+A98h] [bp-8C4h]@21
  char v30; // [sp+AFCh] [bp-860h]@49
  char v31; // [sp+B60h] [bp-7FCh]@17
  char v32; // [sp+BC4h] [bp-798h]@47
  char v33; // [sp+C28h] [bp-734h]@13
  char v34; // [sp+C8Ch] [bp-6D0h]@45
  char v35; // [sp+CF0h] [bp-66Ch]@9
  char v36; // [sp+D54h] [bp-608h]@43
  char v37; // [sp+DB8h] [bp-5A4h]@41
  char v38; // [sp+E1Ch] [bp-540h]@39
  char v39; // [sp+E80h] [bp-4DCh]@76
  char v40; // [sp+EACh] [bp-4B0h]@2
  char v41; // [sp+EF0h] [bp-46Ch]@12
  char v42; // [sp+F08h] [bp-454h]@76
  char v43; // [sp+F20h] [bp-43Ch]@28
  char v44; // [sp+F38h] [bp-424h]@74
  char v45; // [sp+F50h] [bp-40Ch]@36
  char v46; // [sp+F68h] [bp-3F4h]@72
  char v47; // [sp+F80h] [bp-3DCh]@20
  char v48; // [sp+F98h] [bp-3C4h]@70
  char v49; // [sp+FB0h] [bp-3ACh]@4
  char v50; // [sp+FC8h] [bp-394h]@68
  char v51; // [sp+FE0h] [bp-37Ch]@32
  char v52; // [sp+FF8h] [bp-364h]@66
  char v53; // [sp+1010h] [bp-34Ch]@24
  char v54; // [sp+1028h] [bp-334h]@64
  char v55; // [sp+1040h] [bp-31Ch]@16
  char v56; // [sp+1058h] [bp-304h]@62
  char v57; // [sp+1070h] [bp-2ECh]@8
  char v58; // [sp+1088h] [bp-2D4h]@60
  char v59; // [sp+10A0h] [bp-2BCh]@38
  char v60; // [sp+10B8h] [bp-2A4h]@58
  char v61; // [sp+10D0h] [bp-28Ch]@34
  char v62; // [sp+10E8h] [bp-274h]@56
  char v63; // [sp+1100h] [bp-25Ch]@30
  char v64; // [sp+1118h] [bp-244h]@54
  char v65; // [sp+1130h] [bp-22Ch]@26
  char v66; // [sp+1148h] [bp-214h]@52
  char v67; // [sp+1160h] [bp-1FCh]@22
  char v68; // [sp+1178h] [bp-1E4h]@50
  char v69; // [sp+1190h] [bp-1CCh]@18
  char v70; // [sp+11A8h] [bp-1B4h]@48
  char v71; // [sp+11C0h] [bp-19Ch]@14
  char v72; // [sp+11D8h] [bp-184h]@46
  char v73; // [sp+11F0h] [bp-16Ch]@10
  char v74; // [sp+1208h] [bp-154h]@44
  char v75; // [sp+1220h] [bp-13Ch]@6
  char v76; // [sp+1238h] [bp-124h]@42
  char v77; // [sp+1250h] [bp-10Ch]@2
  char v78; // [sp+1268h] [bp-F4h]@40
  int v79; // [sp+1284h] [bp-D8h]@14
  int v80; // [sp+1288h] [bp-D4h]@2
  int v81; // [sp+128Ch] [bp-D0h]@30
  int v82; // [sp+1290h] [bp-CCh]@76
  int v83; // [sp+1294h] [bp-C8h]@38
  int v84; // [sp+1298h] [bp-C4h]@74
  int v85; // [sp+129Ch] [bp-C0h]@22
  int v86; // [sp+12A0h] [bp-BCh]@72
  int v87; // [sp+12A4h] [bp-B8h]@6
  int v88; // [sp+12A8h] [bp-B4h]@70
  int v89; // [sp+12ACh] [bp-B0h]@34
  int v90; // [sp+12B0h] [bp-ACh]@68
  int v91; // [sp+12B4h] [bp-A8h]@26
  int v92; // [sp+12B8h] [bp-A4h]@66
  int v93; // [sp+12BCh] [bp-A0h]@18
  int v94; // [sp+12C0h] [bp-9Ch]@64
  int v95; // [sp+12C4h] [bp-98h]@10
  int v96; // [sp+12C8h] [bp-94h]@62
  int v97; // [sp+12CCh] [bp-90h]@40
  int v98; // [sp+12D0h] [bp-8Ch]@60
  int v99; // [sp+12D4h] [bp-88h]@36
  int v100; // [sp+12D8h] [bp-84h]@58
  int v101; // [sp+12DCh] [bp-80h]@32
  int v102; // [sp+12E0h] [bp-7Ch]@56
  int v103; // [sp+12E4h] [bp-78h]@28
  int v104; // [sp+12E8h] [bp-74h]@54
  int v105; // [sp+12ECh] [bp-70h]@24
  int v106; // [sp+12F0h] [bp-6Ch]@52
  int v107; // [sp+12F4h] [bp-68h]@20
  int v108; // [sp+12F8h] [bp-64h]@50
  int v109; // [sp+12FCh] [bp-60h]@16
  int v110; // [sp+1300h] [bp-5Ch]@48
  int v111; // [sp+1304h] [bp-58h]@12
  int v112; // [sp+1308h] [bp-54h]@46
  int v113; // [sp+130Ch] [bp-50h]@8
  int v114; // [sp+1310h] [bp-4Ch]@44
  int v115; // [sp+1314h] [bp-48h]@4
  int v116; // [sp+1318h] [bp-44h]@42
  int v117; // [sp+1324h] [bp-38h]@12
  int v118; // [sp+132Ch] [bp-30h]@28
  int v119; // [sp+1330h] [bp-2Ch]@74
  int v120; // [sp+1334h] [bp-28h]@36
  int v121; // [sp+1338h] [bp-24h]@72
  int v122; // [sp+133Ch] [bp-20h]@20
  int v123; // [sp+1340h] [bp-1Ch]@70
  int v124; // [sp+1344h] [bp-18h]@40
  int v125; // [sp+1348h] [bp-14h]@68
  int *v126; // [sp+134Ch] [bp-10h]@1
  int v127; // [sp+1358h] [bp-4h]@1
  int v128; // [sp+135Ch] [bp+0h]@32
  int v129; // [sp+1360h] [bp+4h]@66
  int v130; // [sp+1364h] [bp+8h]@24
  int v131; // [sp+1368h] [bp+Ch]@64
  int v132; // [sp+136Ch] [bp+10h]@16
  int v133; // [sp+1370h] [bp+14h]@62
  int v134; // [sp+1374h] [bp+18h]@8
  int v135; // [sp+1378h] [bp+1Ch]@60
  int v136; // [sp+137Ch] [bp+20h]@4
  int v137; // [sp+1380h] [bp+24h]@58
  int v138; // [sp+1384h] [bp+28h]@34
  int v139; // [sp+1388h] [bp+2Ch]@56
  int v140; // [sp+138Ch] [bp+30h]@30
  int v141; // [sp+1390h] [bp+34h]@54
  int v142; // [sp+1394h] [bp+38h]@26
  int v143; // [sp+1398h] [bp+3Ch]@52
  int v144; // [sp+139Ch] [bp+40h]@22
  int v145; // [sp+13A0h] [bp+44h]@50
  int v146; // [sp+13A4h] [bp+48h]@18
  int v147; // [sp+13A8h] [bp+4Ch]@48
  int v148; // [sp+13ACh] [bp+50h]@14
  int v149; // [sp+13B0h] [bp+54h]@46
  int v150; // [sp+13B4h] [bp+58h]@10
  int v151; // [sp+13B8h] [bp+5Ch]@44
  int v152; // [sp+13BCh] [bp+60h]@6
  int v153; // [sp+13C0h] [bp+64h]@42
  int v154; // [sp+13C4h] [bp+68h]@38
  int v155; // [sp+13C8h] [bp+6Ch]@1
  void *v156; // [sp+13CCh] [bp+70h]@1

  v126 = &v2;
  v156 = this;
  v127 = 0;
  v155 = a2 - 1;
  switch ( a2 )
  {
    case 1:
      v80 = sub_4066F0("No memory");
      LOBYTE(v127) = 1;
      Concurrency::scheduler_worker_creation_error::scheduler_worker_creation_error(
        (Concurrency::scheduler_worker_creation_error *)&v40,
        &v77,
        0);
      _CxxThrowException(&v40, &dword_6CC9F8);
      return;
    case 2:
      v115 = sub_4066F0("Syntax error");
      LOBYTE(v127) = 2;
      v136 = sub_574C10(v156);
      sub_571A60(&v49, v136);
      _CxxThrowException(&v11, &dword_6CF130);
      return;
    case 3:
      v87 = sub_4066F0("No element found");
      LOBYTE(v127) = 3;
      v152 = sub_574C10(v156);
      sub_571A60(&v75, v152);
      _CxxThrowException(&v19, &dword_6CF130);
      return;
    case 4:
      v113 = sub_4066F0("Invalid token");
      LOBYTE(v127) = 4;
      v134 = sub_574C10(v156);
      sub_571A60(&v57, v134);
      _CxxThrowException(&v35, &dword_6CF130);
      return;
    case 5:
      v95 = sub_4066F0("Unclosed token");
      LOBYTE(v127) = 5;
      v150 = sub_574C10(v156);
      sub_571A60(&v73, v150);
      _CxxThrowException(&v3, &dword_6CF130);
      return;
    case 6:
      v111 = sub_4066F0("Partial character");
      LOBYTE(v127) = 6;
      v117 = sub_574C10(v156);
      sub_571A60(&v41, v117);
      _CxxThrowException(&v33, &dword_6CF130);
      return;
    case 7:
      v79 = sub_4066F0("Tag mismatch");
      LOBYTE(v127) = 7;
      v148 = sub_574C10(v156);
      sub_571A60(&v71, v148);
      _CxxThrowException(&v17, &dword_6CF130);
      return;
    case 8:
      v109 = sub_4066F0("Duplicate attribute");
      LOBYTE(v127) = 8;
      v132 = sub_574C10(v156);
      sub_571A60(&v55, v132);
      _CxxThrowException(&v31, &dword_6CF130);
      return;
    case 9:
      v93 = sub_4066F0("Junk after document element");
      LOBYTE(v127) = 9;
      v146 = sub_574C10(v156);
      sub_571A60(&v69, v146);
      _CxxThrowException(&v9, &dword_6CF130);
      return;
    case 10:
      v107 = sub_4066F0("Illegal parameter entity reference");
      LOBYTE(v127) = 10;
      v122 = sub_574C10(v156);
      sub_571A60(&v47, v122);
      _CxxThrowException(&v29, &dword_6CF130);
      return;
    case 11:
      v85 = sub_4066F0("Undefined entity");
      LOBYTE(v127) = 11;
      v144 = sub_574C10(v156);
      sub_571A60(&v67, v144);
      _CxxThrowException(&v15, &dword_6CF130);
      return;
    case 12:
      v105 = sub_4066F0("Recursive entity reference");
      LOBYTE(v127) = 12;
      v130 = sub_574C10(v156);
      sub_571A60(&v53, v130);
      _CxxThrowException(&v27, &dword_6CF130);
      return;
    case 13:
      v91 = sub_4066F0("Asynchronous entity");
      LOBYTE(v127) = 13;
      v142 = sub_574C10(v156);
      sub_571A60(&v65, v142);
      _CxxThrowException(&v5, &dword_6CF130);
      return;
    case 14:
      v103 = sub_4066F0("Reference to invalid character number");
      LOBYTE(v127) = 14;
      v118 = sub_574C10(v156);
      sub_571A60(&v43, v118);
      _CxxThrowException(&v25, &dword_6CF130);
      return;
    case 15:
      v81 = sub_4066F0("Reference to binary entity");
      LOBYTE(v127) = 15;
      v140 = sub_574C10(v156);
      sub_571A60(&v63, v140);
      _CxxThrowException(&v13, &dword_6CF130);
      return;
    case 16:
      v101 = sub_4066F0("Reference to external entity in attribute");
      LOBYTE(v127) = 16;
      v128 = sub_574C10(v156);
      sub_571A60(&v51, v128);
      _CxxThrowException(&v23, &dword_6CF130);
      return;
    case 17:
      v89 = sub_4066F0("XML processing instruction not at start of external entity");
      LOBYTE(v127) = 17;
      v138 = sub_574C10(v156);
      sub_571A60(&v61, v138);
      _CxxThrowException(&v7, &dword_6CF130);
      return;
    case 18:
      v99 = sub_4066F0("Unknown encoding");
      LOBYTE(v127) = 18;
      v120 = sub_574C10(v156);
      sub_571A60(&v45, v120);
      _CxxThrowException(&v21, &dword_6CF130);
      return;
    case 19:
      v83 = sub_4066F0("Encoding specified in XML declaration is incorrect");
      LOBYTE(v127) = 19;
      v154 = sub_574C10(v156);
      sub_571A60(&v59, v154);
      _CxxThrowException(&v38, &dword_6CF130);
      return;
    case 20:
      v97 = sub_4066F0("Unclosed CDATA section");
      LOBYTE(v127) = 20;
      v124 = sub_574C10(v156);
      sub_571A60(&v78, v124);
      _CxxThrowException(&v37, &dword_6CF130);
      return;
    case 21:
      v116 = sub_4066F0("Error in processing external entity reference");
      LOBYTE(v127) = 21;
      v153 = sub_574C10(v156);
      sub_571A60(&v76, v153);
      _CxxThrowException(&v36, &dword_6CF130);
      return;
    case 22:
      v114 = sub_4066F0("Document is not standalone");
      LOBYTE(v127) = 22;
      v151 = sub_574C10(v156);
      sub_571A60(&v74, v151);
      _CxxThrowException(&v34, &dword_6CF130);
      return;
    case 23:
      v112 = sub_4066F0("Unexpected parser state - please send a bug report");
      LOBYTE(v127) = 23;
      v149 = sub_574C10(v156);
      sub_571A60(&v72, v149);
      _CxxThrowException(&v32, &dword_6CF130);
      return;
    case 24:
      v110 = sub_4066F0("Entity declared in parameter entity");
      LOBYTE(v127) = 24;
      v147 = sub_574C10(v156);
      sub_571A60(&v70, v147);
      _CxxThrowException(&v30, &dword_6CF130);
      return;
    case 25:
      v108 = sub_4066F0("Requested feature requires XML_DTD support in Expat");
      LOBYTE(v127) = 25;
      v145 = sub_574C10(v156);
      sub_571A60(&v68, v145);
      _CxxThrowException(&v28, &dword_6CF130);
      return;
    case 26:
      v106 = sub_4066F0("Cannot change setting once parsing has begun");
      LOBYTE(v127) = 26;
      v143 = sub_574C10(v156);
      sub_571A60(&v66, v143);
      _CxxThrowException(&v26, &dword_6CF130);
      return;
    case 27:
      v104 = sub_4066F0("Unbound prefix");
      LOBYTE(v127) = 27;
      v141 = sub_574C10(v156);
      sub_571A60(&v64, v141);
      _CxxThrowException(&v24, &dword_6CF130);
      return;
    case 28:
      v102 = sub_4066F0("Must not undeclare prefix");
      LOBYTE(v127) = 28;
      v139 = sub_574C10(v156);
      sub_571A60(&v62, v139);
      _CxxThrowException(&v22, &dword_6CF130);
      return;
    case 29:
      v100 = sub_4066F0("Incomplete markup in parameter entity");
      LOBYTE(v127) = 29;
      v137 = sub_574C10(v156);
      sub_571A60(&v60, v137);
      _CxxThrowException(&v20, &dword_6CF130);
      return;
    case 30:
      v98 = sub_4066F0("XML declaration not well-formed");
      LOBYTE(v127) = 30;
      v135 = sub_574C10(v156);
      sub_571A60(&v58, v135);
      _CxxThrowException(&v18, &dword_6CF130);
      return;
    case 31:
      v96 = sub_4066F0("Text declaration not well-formed");
      LOBYTE(v127) = 31;
      v133 = sub_574C10(v156);
      sub_571A60(&v56, v133);
      _CxxThrowException(&v16, &dword_6CF130);
      return;
    case 32:
      v94 = sub_4066F0("Illegal character(s) in public identifier");
      LOBYTE(v127) = 32;
      v131 = sub_574C10(v156);
      sub_571A60(&v54, v131);
      _CxxThrowException(&v14, &dword_6CF130);
      return;
    case 33:
      v92 = sub_4066F0("Parser suspended");
      LOBYTE(v127) = 33;
      v129 = sub_574C10(v156);
      sub_571A60(&v52, v129);
      _CxxThrowException(&v12, &dword_6CF130);
      return;
    case 34:
      v90 = sub_4066F0("Parser not suspended");
      LOBYTE(v127) = 34;
      v125 = sub_574C10(v156);
      sub_571A60(&v50, v125);
      _CxxThrowException(&v10, &dword_6CF130);
      return;
    case 35:
      v88 = sub_4066F0("Parsing aborted");
      LOBYTE(v127) = 35;
      v123 = sub_574C10(v156);
      sub_571A60(&v48, v123);
      _CxxThrowException(&v8, &dword_6CF130);
      return;
    case 36:
      v86 = sub_4066F0("Parsing finished");
      LOBYTE(v127) = 36;
      v121 = sub_574C10(v156);
      sub_571A60(&v46, v121);
      _CxxThrowException(&v6, &dword_6CF130);
      return;
    case 37:
      v84 = sub_4066F0("Cannot suspend in external parameter entity");
      LOBYTE(v127) = 37;
      v119 = sub_574C10(v156);
      sub_571A60(&v44, v119);
      _CxxThrowException(&v4, &dword_6CF130);
      return;
    default:
      v82 = sub_4066F0("Unknown Expat error code");
      LOBYTE(v127) = 38;
      Concurrency::scheduler_worker_creation_error::scheduler_worker_creation_error(
        (Concurrency::scheduler_worker_creation_error *)&v39,
        &v42,
        0);
      _CxxThrowException(&v39, &dword_6CC9F8);
      return;
  }
}
