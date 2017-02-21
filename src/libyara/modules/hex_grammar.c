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
 * hex_grammar.c
 * https://github.com/VirusTotal/yara/blob/master/libyara/modules/hex_grammar.c
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */

/**
 * yyparse 
 *
 * @param void *yyscanner
 * @param HEX_LEX_ENVIRONMENT *lex_env
 * @return int yyresult
 */
int __cdecl sub_4F1120(int a1, int a2)
{
  int v2; // ecx@0
  int v3; // esi@1
  signed int v4; // eax@1
  int v5; // eax@2
  int v6; // ecx@3
  char *v7; // ebx@3
  char *v8; // edx@3
  FILE *v9; // eax@4
  char *v10; // eax@4
  int v11; // edi@4
  signed int v12; // eax@6
  char *v13; // eax@8
  int v14; // ebx@9
  void *v15; // esi@10
  char *v16; // ecx@10
  int v17; // edx@10
  unsigned int v18; // edx@13
  char *v19; // edi@14
  unsigned int v20; // eax@14
  int v21; // ecx@14
  char *v22; // ecx@17
  int v23; // eax@20
  int v24; // eax@24
  int v25; // eax@25
  int v26; // ecx@25
  int v27; // eax@26
  int v28; // eax@28
  int v29; // edx@31
  int v30; // eax@37
  int v31; // ecx@37
  FILE *v32; // eax@37
  int v33; // eax@41
  int v34; // ecx@43
  int v35; // ecx@48
  FILE *v36; // eax@49
  __m128i v37; // xmm0@49
  int v38; // eax@56
  int v39; // ecx@56
  FILE *v40; // esi@56
  int v41; // ecx@59
  int v42; // eax@59
  signed int v43; // eax@60
  __m128i v44; // xmm0@60
  char *v45; // edx@62
  __m128i v46; // xmm0@62
  size_t v47; // eax@69
  size_t v48; // ecx@69
  char *v49; // edx@76
  int v50; // ecx@83
  char *v51; // edx@83
  int v52; // eax@85
  unsigned int v53; // eax@86
  int v54; // eax@88
  int v55; // eax@90
  char *i; // eax@103
  int v57; // eax@104
  int v58; // eax@104
  int v60; // esi@111
  int v61; // esi@113
  int v62; // eax@116
  int v63; // eax@119
  int v64; // eax@123
  int v65; // eax@126
  const char *v66; // eax@130
  unsigned int v67; // ecx@131
  LPVOID v68; // edx@132
  int v69; // eax@132
  bool v70; // cf@133
  unsigned __int8 v71; // bl@135
  int v72; // eax@137
  const char *v73; // eax@140
  LPVOID v74; // eax@148
  int v75; // eax@148
  int v76; // esi@148
  int v77; // eax@151
  int v78; // esi@151
  int v79; // eax@156
  int v80; // eax@158
  int v81; // esi@158
  int v82; // eax@160
  int v83; // eax@165
  int v84; // eax@166
  int v85; // eax@169
  int v86; // eax@172
  _BYTE *v87; // eax@181
  int v88; // eax@183
  int v89; // eax@185
  _BYTE *v90; // eax@206
  int v91; // eax@207
  int v92; // ecx@211
  int v93; // eax@211
  int v94; // eax@214
  int v95; // edx@223
  char *v96; // ecx@223
  char v97; // al@224
  LPVOID v98; // edx@236
  int v99; // ecx@236
  int v100; // eax@236
  int v101; // eax@243
  int v102; // eax@247
  bool v103; // zf@248
  int v104; // eax@253
  int v105; // eax@262
  int v106; // eax@263
  int v107; // esi@272
  int v108; // eax@288
  int v109; // eax@297
  int v110; // esi@298
  char v111; // di@298
  int v112; // eax@300
  int v113; // ebx@300
  int v114; // eax@305
  int v115; // esi@306
  int v116; // ebx@306
  int v117; // eax@306
  int v118; // esi@306
  char v119; // di@306
  int v120; // eax@306
  int v121; // esi@306
  int v122; // eax@310
  __m128i v123; // xmm0@323
  int v124; // eax@336
  bool v125; // zf@337
  int v126; // eax@342
  unsigned __int8 v127; // al@348
  int v128; // eax@349
  int v129; // eax@350
  int v130; // eax@351
  void *v131; // ecx@353
  int v132; // eax@354
  int v133; // eax@358
  LPVOID v134; // eax@361
  LPVOID v135; // eax@373
  int v136; // ecx@380
  unsigned int v137; // eax@380
  int v138; // ecx@383
  int v139; // eax@386
  int v140; // eax@391
  int v141; // eax@393
  int v142; // eax@399
  int v143; // eax@405
  int v144; // eax@411
  int v145; // eax@422
  int v146; // eax@432
  int v147; // eax@433
  int v148; // eax@439
  int v149; // eax@440
  int v150; // eax@450
  int v151; // eax@457
  int v152; // eax@460
  __int64 v153; // rax@470
  int v154; // eax@471
  __m128i v155; // xmm0@486
  int v156; // eax@487
  int v157; // ecx@487
  FILE *v158; // esi@487
  int v159; // ecx@490
  int v160; // eax@490
  signed __int64 v161; // rax@494
  int v162; // eax@498
  signed int v163; // ebx@498
  int v164; // ecx@498
  int v165; // eax@498
  FILE *v166; // esi@498
  int v167; // ecx@501
  int v168; // eax@501
  int v169; // ebx@502
  char *v170; // edx@502
  __m128i v171; // xmm0@504
  int v172; // eax@504
  int v173; // eax@504
  __int16 v174; // si@504
  int v175; // ecx@504
  unsigned int v176; // ecx@504
  char v177; // [sp-28h] [bp-1D04h]@0
  int v178; // [sp-24h] [bp-1D00h]@306
  int v179; // [sp-20h] [bp-1CFCh]@306
  int v180; // [sp-1Ch] [bp-1CF8h]@317
  int v181; // [sp-18h] [bp-1CF4h]@317
  int v182; // [sp-14h] [bp-1CF0h]@317
  int v183; // [sp-10h] [bp-1CECh]@119
  int *v184; // [sp-Ch] [bp-1CE8h]@119
  void *v185; // [sp-8h] [bp-1CE4h]@119
  signed int v186; // [sp-4h] [bp-1CE0h]@116
  __int64 v187; // [sp+0h] [bp-1CDCh]@20
  const char *v188; // [sp+8h] [bp-1CD4h]@20
  int v189; // [sp+18h] [bp-1CC4h]@116
  int v190; // [sp+1Ch] [bp-1CC0h]@116
  int v191; // [sp+20h] [bp-1CBCh]@116
  int v192; // [sp+24h] [bp-1CB8h]@116
  int v193; // [sp+28h] [bp-1CB4h]@116
  int v194; // [sp+2Ch] [bp-1CB0h]@116
  __int64 v195; // [sp+30h] [bp-1CACh]@29
  __int64 v196; // [sp+38h] [bp-1CA4h]@62
  __int64 v197; // [sp+40h] [bp-1C9Ch]@62
  int v198; // [sp+48h] [bp-1C94h]@295
  char *v199; // [sp+4Ch] [bp-1C90h]@295
  int v200; // [sp+50h] [bp-1C8Ch]@353
  int v201; // [sp+54h] [bp-1C88h]@3
  int v202; // [sp+58h] [bp-1C84h]@183
  int v203; // [sp+5Ch] [bp-1C80h]@208
  int v204; // [sp+60h] [bp-1C7Ch]@128
  int v205; // [sp+64h] [bp-1C78h]@172
  int v206; // [sp+68h] [bp-1C74h]@305
  int v207; // [sp+6Ch] [bp-1C70h]@3
  LPVOID lpMem; // [sp+70h] [bp-1C6Ch]@240
  int v209; // [sp+74h] [bp-1C68h]@292
  char *v210; // [sp+78h] [bp-1C64h]@1
  int v211; // [sp+7Ch] [bp-1C60h]@1
  size_t v212; // [sp+80h] [bp-1C5Ch]@1
  unsigned int v213; // [sp+84h] [bp-1C58h]@1
  void *v214; // [sp+88h] [bp-1C54h]@1
  int v215; // [sp+8Ch] [bp-1C50h]@295
  FILE *v216; // [sp+90h] [bp-1C4Ch]@4
  char *v217; // [sp+94h] [bp-1C48h]@5
  int v218; // [sp+98h] [bp-1C44h]@1
  int v219; // [sp+9Ch] [bp-1C40h]@3
  char *v220; // [sp+A0h] [bp-1C3Ch]@8
  int v221; // [sp+A4h] [bp-1C38h]@3
  char v222; // [sp+ABh] [bp-1C31h]@133
  void *v223; // [sp+ACh] [bp-1C30h]@1
  void *v224; // [sp+B0h] [bp-1C2Ch]@1
  char *v225; // [sp+B4h] [bp-1C28h]@4
  int v226; // [sp+B8h] [bp-1C24h]@4
  char *v227; // [sp+BCh] [bp-1C20h]@3
  __int64 v228; // [sp+C0h] [bp-1C1Ch]@49
  __int64 v229; // [sp+C8h] [bp-1C14h]@49
  __int64 v230; // [sp+D0h] [bp-1C0Ch]@49
  int v231; // [sp+D8h] [bp-1C04h]@119
  int v232; // [sp+608h] [bp-16D4h]@240
  char v233; // [sp+808h] [bp-14D4h]@1
  char v234; // [sp+1AC8h] [bp-214h]@1
  char v235; // [sp+1C58h] [bp-84h]@1

  v218 = 0;
  v214 = &v235;
  v223 = &v234;
  v3 = a1;
  v210 = &v233;
  v4 = 200;
  v224 = (void *)a1;
  v211 = a2;
  v212 = 128;
  v213 = 200;
  if ( dword_6FAFD0 )
  {
    v5 = sub_5A39F0(v2);
    fprintf((FILE *)(v5 + 64), "Starting parse\n");
    v4 = 200;
  }
  v6 = 0;
  v7 = &v233;
  v221 = 0;
  v207 = 0;
  v219 = -2;
  v8 = &v234;
  v227 = &v233;
  v201 = 32;
  while ( 1 )
  {
    v9 = (FILE *)(2 * v4);
    v216 = v9;
    v10 = (char *)v223 + (_DWORD)v9 - 2;
    v11 = v211;
    v225 = v8;
    v226 = v6;
    *(_WORD *)v8 = v6;
    if ( v10 <= v8 )
      break;
LABEL_23:
    if ( dword_6FAFD0 )
    {
      v188 = (const char *)v6;
      HIDWORD(v187) = "Entering state %d\n";
      v24 = sub_5A39F0(v6);
      fprintf((FILE *)(v24 + 64), (const char *)HIDWORD(v187), v188);
    }
    v25 = v226;
    v26 = word_659B50[v226];
    v217 = (char *)v26;
    if ( v26 == -65 )
    {
      v29 = v218;
LABEL_65:
      v35 = (unsigned __int8)byte_659A40[v25];
      v220 = (char *)v35;
      if ( !v35 )
        goto LABEL_68;
LABEL_49:
      v36 = (FILE *)(unsigned __int8)byte_6599C8[v35];
      v216 = v36;
      v36 = (FILE *)(24 * (_DWORD)v36);
      _mm_storel_epi64((__m128i *)&v228, _mm_loadl_epi64((const __m128i *)(v7 - (char *)v36 + 24)));
      _mm_storel_epi64((__m128i *)&v229, _mm_loadl_epi64((const __m128i *)(v7 - (char *)v36 + 32)));
      v37 = _mm_loadl_epi64((const __m128i *)(v7 - (char *)v36 + 40));
      v217 = (char *)(v7 - (char *)v36);
      _mm_storel_epi64((__m128i *)&v230, v37);
      if ( dword_6FAFD0 )
      {
        v188 = (const char *)v11;
        HIDWORD(v187) = v3;
        sub_4F43E0(v7, v35);
        v35 = (int)v220;
      }
      switch ( v35 )
      {
        case 8:
          v60 = sub_4F9A50(v3, *(_DWORD *)v7);
          sub_4DDF10(*(LPVOID *)v7);
          if ( !v60 )
            goto LABEL_497;
          v3 = (int)v224;
          goto LABEL_481;
        case 9:
          v61 = sub_4F9D30(
                  v3,
                  *((_DWORD *)v7 - 48),
                  *((void **)v7 - 36),
                  *((_DWORD *)v7 - 30),
                  *((_DWORD *)v7 - 12),
                  *((_DWORD *)v7 - 18));
          sub_4DDF10(*((LPVOID *)v7 - 36));
          if ( !v61 )
            goto LABEL_497;
          v3 = (int)v224;
          goto LABEL_481;
        case 10:
        case 19:
          LODWORD(v228) = 0;
          goto LABEL_497;
        case 11:
          v188 = 0;
          HIDWORD(v187) = 24;
          LODWORD(v187) = &v189;
          v186 = *(_DWORD *)(v11 + 120);
          v190 = -1;
          v191 = -1;
          v192 = -1;
          v193 = -1;
          v194 = -1;
          v189 = 0;
          v62 = sub_4DE7B0(v186, &v189, 0x18u, 0);
          *(_DWORD *)(v11 + 16) = v62;
          v35 = *(_DWORD *)v7;
          LODWORD(v228) = *(_DWORD *)v7;
          if ( v62 )
            goto LABEL_481;
          goto LABEL_497;
        case 12:
          LODWORD(v228) = 0;
          *(_DWORD *)(v11 + 140) = 0;
          goto LABEL_497;
        case 13:
          memset(&v231, 255, 0x530u);
          v186 = 0;
          v185 = (void *)1328;
          v184 = &v231;
          v183 = *(_DWORD *)(v11 + 92);
          v231 = 4096;
          v63 = sub_4DE7B0(v183, &v231, 0x530u, 0);
          *(_DWORD *)(v11 + 16) = v63;
          if ( v63 )
            goto LABEL_481;
          *(_DWORD *)(v11 + 140) = *(_DWORD *)v7;
          goto LABEL_121;
        case 23:
        case 29:
LABEL_121:
          LODWORD(v228) = *(_DWORD *)v7;
          goto LABEL_497;
        case 15:
        case 35:
          _mm_storel_pd((double *)&v228, 0i64);
          goto LABEL_497;
        case 16:
        case 36:
          v35 = *(_DWORD *)v7 | *((_DWORD *)v7 - 6);
          v64 = *((_DWORD *)v7 + 1) | *((_DWORD *)v7 - 5);
          LODWORD(v228) = *(_DWORD *)v7 | *((_DWORD *)v7 - 6);
          HIDWORD(v228) = v64;
          goto LABEL_497;
        case 17:
        case 74:
          v228 = 1i64;
          goto LABEL_497;
        case 18:
        case 75:
          v228 = 2i64;
          goto LABEL_497;
        case 20:
          v188 = 0;
          HIDWORD(v187) = &byte_6A8FAF;
          LODWORD(v187) = *(_DWORD *)(unknown_libname_115(v3) + 84);
          v65 = sub_4DE810(v187, (void *)HIDWORD(v187), (int)v188);
          *(_DWORD *)(v11 + 16) = v65;
          if ( v65 )
            goto LABEL_481;
          LODWORD(v228) = *(_DWORD *)v7;
          goto LABEL_497;
        case 21:
          v188 = (const char *)&v204;
          HIDWORD(v187) = *(_DWORD *)v7;
          LODWORD(v187) = *(_DWORD *)(unknown_libname_115(v3) + 84);
          *(_DWORD *)(v11 + 16) = sub_4DE810(v187, (void *)HIDWORD(v187), (int)v188);
          sub_4DDF10(*(LPVOID *)v7);
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
          LODWORD(v228) = v204;
          goto LABEL_497;
        case 22:
          v66 = (const char *)*((_DWORD *)v7 - 6);
          v226 = (int)v66;
          if ( !v66 )
            goto LABEL_144;
          v67 = strlen(v66);
          if ( !v67 )
            goto LABEL_144;
          while ( 1 )
          {
            v68 = *(LPVOID *)v7;
            v69 = v226;
            while ( 1 )
            {
              v70 = *(_BYTE *)v69 < *(_BYTE *)v68;
              v103 = *(_BYTE *)v69 == *(_BYTE *)v68;
              v222 = *(_BYTE *)v69;
              v7 = v227;
              if ( !v103 )
                break;
              if ( !v222 )
                goto LABEL_137;
              v71 = *(_BYTE *)(v69 + 1);
              v70 = v71 < *((_BYTE *)v68 + 1);
              v103 = v71 == *((_BYTE *)v68 + 1);
              v222 = *(_BYTE *)(v69 + 1);
              v7 = v227;
              if ( !v103 )
                break;
              v69 += 2;
              v68 = (char *)v68 + 2;
              if ( !v222 )
              {
LABEL_137:
                v72 = 0;
                goto LABEL_139;
              }
            }
            v72 = -v70 | 1;
LABEL_139:
            if ( !v72 )
              break;
            v188 = (const char *)(v67 + 1);
            HIDWORD(v187) = v226;
            LODWORD(v187) = *(_DWORD *)(unknown_libname_115(v3) + 84);
            v73 = (const char *)sub_4DE640(v187, HIDWORD(v187), v188);
            v226 = (int)v73;
            if ( v73 )
            {
              v67 = strlen(v73);
              if ( v67 )
                continue;
            }
            goto LABEL_144;
          }
          sub_4F49D0(v11 + 332, v226, 256);
          *(_DWORD *)(v11 + 16) = 15;
LABEL_144:
          if ( !*(_DWORD *)(v11 + 16) )
          {
            v188 = 0;
            HIDWORD(v187) = *(_DWORD *)v7;
            LODWORD(v187) = *(_DWORD *)(unknown_libname_115(v3) + 84);
            *(_DWORD *)(v11 + 16) = sub_4DE810(v187, (void *)HIDWORD(v187), (int)v188);
          }
          sub_4DDF10(*(LPVOID *)v7);
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
LABEL_147:
          LODWORD(v228) = *((_DWORD *)v7 - 6);
          goto LABEL_497;
        case 24:
        case 30:
          goto LABEL_147;
        case 25:
          v74 = *(LPVOID *)v7;
          v188 = 0;
          HIDWORD(v187) = (char *)v74 + 8;
          v75 = sub_4F9B40(v3, 2, *((void **)v7 - 12), (char *)v74 + 8, 0);
          v184 = (int *)*((_DWORD *)v7 - 12);
          v76 = v75;
          LODWORD(v228) = v75;
          sub_4DDF10(v184);
          sub_4DDF10(*(LPVOID *)v7);
          if ( v76 )
            goto LABEL_497;
          v3 = (int)v224;
          goto LABEL_481;
        case 26:
          v188 = *(const char **)v7;
          v187 = *((_DWORD *)v7 - 12);
          v186 = 1;
          goto LABEL_151;
        case 27:
          v188 = (const char *)1;
          v187 = *((_DWORD *)v7 - 12);
          v186 = 3;
          goto LABEL_151;
        case 28:
          v188 = 0;
          v187 = *((_DWORD *)v7 - 12);
          v186 = 3;
LABEL_151:
          v77 = sub_4F9B40(v3, v186, (void *)v187, (void *)HIDWORD(v187), (int)v188);
          v184 = (int *)*((_DWORD *)v7 - 12);
          v78 = v77;
          LODWORD(v228) = v77;
          goto LABEL_152;
        case 31:
          v79 = sub_4F9F00(v3, *(_DWORD *)v7, *((_DWORD *)v7 - 18), *((_DWORD *)v7 - 6));
          v185 = (void *)*((_DWORD *)v7 - 18);
          v78 = v79;
          LODWORD(v228) = v79;
          sub_4DDF10(v185);
          v184 = (int *)*((_DWORD *)v7 - 6);
          goto LABEL_152;
        case 32:
          *(_DWORD *)(v11 + 4) = sub_4E0820(v3);
          goto LABEL_497;
        case 33:
          v80 = sub_4F9F00(v3, *(_DWORD *)v7 | 0x20, *((_DWORD *)v7 - 24), *((_DWORD *)v7 - 6));
          v185 = (void *)*((_DWORD *)v7 - 24);
          v81 = v80;
          LODWORD(v228) = v80;
          sub_4DDF10(v185);
          sub_4DDF10(*((LPVOID *)v7 - 6));
          if ( !v81 )
            goto LABEL_153;
          *(_DWORD *)(v11 + 4) = 0;
          goto LABEL_497;
        case 34:
          v82 = sub_4F9F00(v3, 2, *((_DWORD *)v7 - 12), *(_DWORD *)v7);
          v185 = (void *)*((_DWORD *)v7 - 12);
          v78 = v82;
          LODWORD(v228) = v82;
          sub_4DDF10(v185);
          v184 = *(int **)v7;
LABEL_152:
          sub_4DDF10(v184);
          if ( v78 )
            goto LABEL_497;
LABEL_153:
          v3 = (int)v224;
          goto LABEL_481;
        case 37:
          v228 = 16i64;
          goto LABEL_497;
        case 38:
          v228 = 8i64;
          goto LABEL_497;
        case 39:
          v228 = 4i64;
          goto LABEL_497;
        case 40:
          v228 = 128i64;
          goto LABEL_497;
        case 41:
          v83 = sub_4F9940(v3, *(_DWORD *)v7);
          v227 = (char *)v83;
          v188 = 0;
          if ( v83 < 0 )
          {
            v227 = (char *)sub_4DEA80(*(_DWORD *)(v11 + 132), *(_DWORD *)v7, v188);
            if ( v227
              || (v227 = (char *)sub_4DEA80(
                                   *(_DWORD *)(v11 + 132),
                                   *(_DWORD *)v7,
                                   *(_DWORD *)(*(_DWORD *)(v11 + 136) + 128))) != 0 )
            {
              v188 = (const char *)&v205;
              v86 = sub_4DE810(*(_DWORD *)(v11 + 84), *(void **)v7, (int)&v205);
              *(_DWORD *)(v11 + 16) = v86;
              if ( !v86 )
                *(_DWORD *)(v11 + 16) = sub_4F98D0(v3, 16, v205, 0, 0);
              LODWORD(v229) = v227;
              v84 = *((_DWORD *)v227 + 1);
              LODWORD(v228) = 16;
            }
            else
            {
              v85 = sub_4DEA80(*(_DWORD *)(v11 + 128), *(_DWORD *)v7, *(_DWORD *)(*(_DWORD *)(v11 + 136) + 128));
              v227 = (char *)v85;
              if ( !v85 )
              {
                v188 = (const char *)256;
                sub_4F49D0(v11 + 332, *(_DWORD *)v7, 256);
                *(_DWORD *)(v11 + 16) = 20;
                goto LABEL_176;
              }
              *(_DWORD *)(v11 + 16) = sub_4F98D0(v3, 26, v85, 0, 0);
              v84 = *((_DWORD *)v227 + 33);
              LODWORD(v228) = 1;
              v229 = -1483400188077313i64;
            }
          }
          else
          {
            *(_DWORD *)(v11 + 16) = sub_4F9880(v3, 32, 4 * v83, (unsigned __int64)(4 * v83) >> 32, v188);
            v84 = *(_DWORD *)(v11 + 4 * (_DWORD)v227 + 168);
            LODWORD(v228) = 2;
            v229 = -1483400188077313i64;
          }
          LODWORD(v230) = v84;
LABEL_176:
          v188 = *(const char **)v7;
LABEL_177:
          sub_4DDF10((LPVOID)v188);
          goto LABEL_178;
        case 42:
          if ( *((_DWORD *)v7 - 12) != 16 || (v87 = (_BYTE *)*((_DWORD *)v7 - 10), *v87 != 3) )
          {
            v188 = (const char *)256;
            sub_4F49D0(v11 + 332, *((_DWORD *)v7 - 8), 256);
            *(_DWORD *)(v11 + 16) = 35;
          }
          else
          {
            v227 = (char *)sub_4E0070(v87, *(_DWORD *)v7);
            if ( v227 )
            {
              v188 = (const char *)&v202;
              v88 = sub_4DE810(*(_DWORD *)(v11 + 84), *(void **)v7, (int)&v202);
              *(_DWORD *)(v11 + 16) = v88;
              if ( !v88 )
                *(_DWORD *)(v11 + 16) = sub_4F98D0(v3, 18, v202, 0, 0);
              LODWORD(v229) = v227;
              v89 = *((_DWORD *)v227 + 1);
              LODWORD(v228) = 16;
              LODWORD(v230) = v89;
            }
            else
            {
              v188 = (const char *)256;
              sub_4F49D0(v11 + 332, *(_DWORD *)v7, 256);
              *(_DWORD *)(v11 + 16) = 33;
            }
          }
          sub_4DDF10(*(LPVOID *)v7);
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
          goto LABEL_497;
        case 43:
          if ( *((_DWORD *)v7 - 18) != 16 )
            goto LABEL_202;
          if ( **((_BYTE **)v7 - 16) == 4 )
          {
            if ( *((_DWORD *)v7 - 6) != 2 )
            {
              sub_4F49D0(v11 + 332, "array indexes must be of integer type", 256);
              *(_DWORD *)(v11 + 16) = 24;
            }
            v103 = *(_DWORD *)(v11 + 16) == 0;
            v188 = 0;
            if ( !v103 )
              goto LABEL_482;
            HIDWORD(v187) = 19;
LABEL_196:
            *(_DWORD *)(v11 + 16) = sub_4F9700(v3, SBYTE4(v187), v188);
            v35 = *((_DWORD *)v7 - 16);
            LODWORD(v228) = 16;
            LODWORD(v229) = *(_DWORD *)(v35 + 16);
            LODWORD(v230) = *(_DWORD *)(v35 + 4);
            goto LABEL_203;
          }
          if ( **((_BYTE **)v7 - 16) == 7 )
          {
            if ( *((_DWORD *)v7 - 6) != 4 )
            {
              sub_4F49D0(v11 + 332, "dictionary keys must be of string type", 256);
              *(_DWORD *)(v11 + 16) = 24;
            }
            v103 = *(_DWORD *)(v11 + 16) == 0;
            v188 = 0;
            if ( !v103 )
              goto LABEL_482;
            HIDWORD(v187) = 41;
            goto LABEL_196;
          }
LABEL_202:
          v188 = (const char *)256;
          sub_4F49D0(v11 + 332, *((_DWORD *)v7 - 14), 256);
          *(_DWORD *)(v11 + 16) = 36;
LABEL_203:
          if ( !*(_DWORD *)(v11 + 16) )
            goto LABEL_497;
LABEL_481:
          v188 = 0;
LABEL_482:
          sub_4E06D0(v3, v11, v188);
          v7 = v217;
          v51 = &v225[-2 * (_DWORD)v216];
          v225 -= 2 * (_DWORD)v216;
          if ( dword_6FAFD0 )
          {
            sub_4F59F0(v223, (unsigned int)v51);
            v51 = v225;
          }
          v50 = *(_WORD *)v51;
          goto LABEL_84;
        case 44:
          if ( *((_DWORD *)v7 - 18) != 16 || (v90 = (_BYTE *)*((_DWORD *)v7 - 16), *v90 != 5) )
          {
            v188 = (const char *)256;
            sub_4F49D0(v11 + 332, *((_DWORD *)v7 - 14), 256);
            *(_DWORD *)(v11 + 16) = 37;
            v188 = (const char *)*((_DWORD *)v7 - 6);
          }
          else
          {
            v91 = sub_4F9660(v11, v90, *((_DWORD *)v7 - 6));
            *(_DWORD *)(v11 + 16) = v91;
            if ( !v91 )
            {
              v188 = (const char *)&v203;
              *(_DWORD *)(v11 + 16) = sub_4DE810(*(_DWORD *)(v11 + 84), *((void **)v7 - 6), (int)&v203);
            }
            if ( !*(_DWORD *)(v11 + 16) )
              *(_DWORD *)(v11 + 16) = sub_4F98D0(v3, 15, v203, 0, 0);
            v92 = *((_DWORD *)v7 - 16);
            v188 = (const char *)*((_DWORD *)v7 - 6);
            LODWORD(v229) = *(_DWORD *)(v92 + 16);
            v93 = *(_DWORD *)(v92 + 4);
            LODWORD(v228) = 16;
            LODWORD(v230) = v93;
          }
          goto LABEL_177;
        case 45:
          LODWORD(v228) = sub_4DDFC0(&byte_6A8FAF);
          goto LABEL_497;
        case 46:
          v94 = sub_4DDF80(0x81u);
          v35 = *(_DWORD *)v7 - 1;
          LODWORD(v228) = v94;
          switch ( v35 )
          {
            case 1:
              v188 = (const char *)128;
              HIDWORD(v187) = "i";
              goto LABEL_220;
            case 31:
              v188 = (const char *)128;
              HIDWORD(v187) = "f";
              goto LABEL_220;
            case 0:
              v188 = (const char *)128;
              HIDWORD(v187) = "b";
              goto LABEL_220;
            case 3:
              v188 = (const char *)128;
              HIDWORD(v187) = "s";
              goto LABEL_220;
            case 7:
              v188 = (const char *)128;
              HIDWORD(v187) = "r";
LABEL_220:
              sub_4F49D0(v94, HIDWORD(v187), v188);
              v94 = v228;
              break;
            default:
              break;
          }
          if ( !v94 )
            goto LABEL_481;
          goto LABEL_497;
        case 47:
          v95 = *((_DWORD *)v7 - 12);
          v96 = (char *)*((_DWORD *)v7 - 12);
          v227 = v96 + 1;
          do
            v97 = *v96++;
          while ( v97 );
          v35 = v96 - v227;
          if ( v35 == 128 )
          {
            *(_DWORD *)(v11 + 16) = 39;
          }
          else
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
                v188 = (const char *)128;
                HIDWORD(v187) = "i";
                goto LABEL_233;
              case 0x20:
                v188 = (const char *)128;
                HIDWORD(v187) = "f";
                goto LABEL_233;
              case 1:
                v188 = (const char *)128;
                HIDWORD(v187) = "b";
                goto LABEL_233;
              case 4:
                v188 = (const char *)128;
                HIDWORD(v187) = "s";
                goto LABEL_233;
              case 8:
                v188 = (const char *)128;
                HIDWORD(v187) = "r";
LABEL_233:
                sub_4F4960(v95, HIDWORD(v187), v188);
                break;
              default:
                break;
            }
          }
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
          LODWORD(v228) = *((_DWORD *)v7 - 12);
          goto LABEL_497;
        case 48:
          v98 = *(LPVOID *)v7;
          v99 = 0;
          v100 = *(_DWORD *)(*(_DWORD *)v7 + 4);
          if ( v100 & 1 )
            v99 = v201;
          if ( v100 & 2 )
            v99 |= 0x80u;
          v188 = (const char *)&v232;
          HIDWORD(v187) = &lpMem;
          *(_DWORD *)(v11 + 16) = sub_4DCF00((int)v98 + 8, v99, *(_DWORD *)(v11 + 100), &lpMem, (int)&v232);
          sub_4DDF10(*(LPVOID *)v7);
          if ( *(_DWORD *)(v11 + 16) == 9 )
            sub_4F49D0(v11 + 332, &v232, 256);
          v103 = *(_DWORD *)(v11 + 16) == 0;
          v188 = 0;
          if ( !v103 )
            goto LABEL_482;
          v187 = *(_DWORD *)(*((_DWORD *)lpMem + 1) + 28);
          v101 = sub_4F98D0(v3, 13, v187, HIDWORD(v187), v188);
          v184 = (int *)lpMem;
          *(_DWORD *)(v11 + 16) = v101;
          sub_4DD030(v184);
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
          LODWORD(v228) = 8;
          goto LABEL_497;
        case 49:
          if ( *(_DWORD *)v7 != 4 )
            goto LABEL_250;
          v188 = 0;
          HIDWORD(v187) = 12;
          goto LABEL_247;
        case 50:
          v102 = sub_4F9880(v3, 13, 1, 0, 0);
          goto LABEL_248;
        case 51:
          v102 = sub_4F9880(v3, 13, 0, 0, 0);
          goto LABEL_248;
        case 52:
          v104 = *((_DWORD *)v7 - 12);
          if ( !(v104 & 4) )
          {
            switch ( v104 )
            {
              case 2:
                goto LABEL_255;
              case 4:
                goto LABEL_256;
              case 1:
                goto LABEL_257;
              case 32:
                goto LABEL_260;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( !(*(_DWORD *)v7 & 8) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
LABEL_255:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for matches operator";
                goto LABEL_479;
              case 4:
LABEL_256:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for matches operator";
                goto LABEL_479;
              case 1:
LABEL_257:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for matches operator";
                goto LABEL_479;
              case 0x20:
LABEL_260:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for matches operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
          v105 = sub_4F9700(v3, 39, 0);
          *(_DWORD *)(v11 + 16) = v105;
          v103 = v105 == 0;
          goto LABEL_249;
        case 53:
          v106 = *((_DWORD *)v7 - 12);
          if ( !(v106 & 4) )
          {
            switch ( v106 )
            {
              case 2:
                goto LABEL_265;
              case 4:
                goto LABEL_266;
              case 1:
                goto LABEL_267;
              case 32:
                goto LABEL_270;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( !(*(_DWORD *)v7 & 4) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
LABEL_265:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for contains operator";
                goto LABEL_479;
              case 4:
LABEL_266:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for contains operator";
                goto LABEL_479;
              case 1:
LABEL_267:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for contains operator";
                goto LABEL_479;
              case 0x20:
LABEL_270:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for contains operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          v188 = 0;
          HIDWORD(v187) = 38;
LABEL_247:
          v102 = sub_4F9700(v3, SBYTE4(v187), v188);
LABEL_248:
          *(_DWORD *)(v11 + 16) = v102;
          v103 = v102 == 0;
          goto LABEL_249;
        case 54:
          v188 = (const char *)-345382;
          v187 = -379750429807869931i64;
          v107 = sub_4FA300(v3, *(_DWORD *)v7, 21, -88417537, -345382);
          sub_4DDF10(*(LPVOID *)v7);
          if ( !v107 )
            goto LABEL_250;
          v3 = (int)v224;
          goto LABEL_481;
        case 55:
          if ( !(*(_DWORD *)v7 & 2) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for at operator";
                goto LABEL_479;
              case 0x20:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for at operator";
                goto LABEL_479;
              case 4:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for at operator";
                goto LABEL_479;
              case 1:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for at operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          v188 = (const char *)*((_DWORD *)v7 + 3);
          HIDWORD(v187) = *((_DWORD *)v7 + 2);
          LODWORD(v187) = 22;
          *(_DWORD *)(v11 + 16) = sub_4FA300(v3, *((_DWORD *)v7 - 12), 22, HIDWORD(v187), v188);
          sub_4DDF10(*((LPVOID *)v7 - 12));
          v103 = *(_DWORD *)(v11 + 16) == 0;
LABEL_249:
          if ( v103 )
          {
LABEL_250:
            LODWORD(v228) = 1;
            goto LABEL_497;
          }
          goto LABEL_481;
        case 56:
          v188 = (const char *)-345382;
          v187 = -379750429807869929i64;
          *(_DWORD *)(v11 + 16) = sub_4FA300(v3, *((_DWORD *)v7 - 12), 23, -88417537, -345382);
          sub_4DDF10(*((LPVOID *)v7 - 12));
          v103 = *(_DWORD *)(v11 + 16) == 0;
          goto LABEL_249;
        case 57:
          if ( *(_DWORD *)(v11 + 184) == 4 )
            *(_DWORD *)(v11 + 16) = 12;
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
          if ( sub_4F9940(v3, *((_DWORD *)v7 - 6)) >= 0 )
          {
            v188 = (const char *)256;
            sub_4F49D0(v11 + 332, *((_DWORD *)v7 - 6), 256);
            *(_DWORD *)(v11 + 16) = 13;
          }
          v103 = *(_DWORD *)(v11 + 16) == 0;
          v188 = 0;
          if ( !v103 )
            goto LABEL_482;
          v108 = sub_4F9880(v3, 13, -1, -345382, v188);
          *(_DWORD *)(v11 + 16) = v108;
          if ( v108 )
            goto LABEL_481;
          goto LABEL_497;
        case 58:
          v227 = (char *)(4 * *(_DWORD *)(v11 + 184));
          sub_4F9880(v3, 29, (_BYTE)v227 + 1, (unsigned __int64)(signed int)(v227 + 1) >> 32, 0);
          sub_4F9880(v3, 29, (_BYTE)v227 + 2, (unsigned __int64)(signed int)(v227 + 2) >> 32, 0);
          if ( *((_DWORD *)v7 - 6) != 1 || *((_DWORD *)v7 - 5) )
          {
            sub_4F9880(v3, 31, (_BYTE)v227 + 3, (unsigned __int64)(signed int)(v227 + 3) >> 32, &v209);
            sub_4F9880(v3, 31, (char)v227, (unsigned __int64)(signed int)v227 >> 32, 0);
          }
          else
          {
            sub_4F9880(v3, 31, (char)v227, (unsigned __int64)(signed int)v227 >> 32, &v209);
          }
          *(_DWORD *)(v11 + 4 * *(_DWORD *)(v11 + 184) + 152) = v209;
          v35 = *(_DWORD *)(v11 + 184);
          *(_DWORD *)(v11 + 4 * v35 + 168) = *((_DWORD *)v7 - 24);
          ++*(_DWORD *)(v11 + 184);
          goto LABEL_497;
        case 59:
          v227 = (char *)(4 * --*(_DWORD *)(v11 + 184));
          v215 = (int)(v227 + 1);
          v198 = (unsigned __int64)(signed int)(v227 + 1) >> 32;
          sub_4F9880(v3, 30, (_BYTE)v227 + 1, v198, 0);
          v199 = v227 + 2;
          v226 = (unsigned __int64)(signed int)(v227 + 2) >> 32;
          sub_4F9880(v3, 28, (_BYTE)v227 + 2, v226, 0);
          if ( *((_DWORD *)v7 - 30) != 1 || *((_DWORD *)v7 - 29) )
          {
            v110 = (unsigned __int64)(signed int)v227 >> 32;
            v111 = (char)v227;
            sub_4F9880(v224, 28, (char)v227, v110, 0);
            v183 = v110;
            v3 = (int)v224;
            sub_4F9880(v224, 32, v111, v183, 0);
            sub_4F9880(v3, 32, v177, (unsigned __int64)(signed int)(v227 + 3) >> 32, 0);
            v11 = v211;
            sub_4F98D0(v3, 35, *(_DWORD *)(v211 + 4 * *(_DWORD *)(v211 + 184) + 152), 0, 0);
            sub_4F9700(v3, 14, 0);
            sub_4F9700(v3, 14, 0);
          }
          else
          {
            v109 = *(_DWORD *)(v11 + 184);
            v188 = 0;
            v187 = *(_DWORD *)(v11 + 4 * v109 + 152);
            sub_4F98D0(v3, 34, v187, HIDWORD(v187), 0);
          }
          sub_4F9700(v3, 14, 0);
          sub_4F9880(v3, 33, (char)v199, v226, 0);
          sub_4F9880(v3, 32, v215, v198, 0);
          sub_4F9700(v3, 104, 0);
          *(_DWORD *)(v11 + 4 * *(_DWORD *)(v11 + 184) + 168) = 0;
          sub_4DDF10(*((LPVOID *)v7 - 48));
          LODWORD(v228) = 1;
          goto LABEL_497;
        case 60:
          v112 = *(_DWORD *)(v11 + 184);
          v113 = 4 * v112;
          if ( v112 == 4 )
            *(_DWORD *)(v11 + 16) = 12;
          if ( *(_DWORD *)(v11 + 188) != -1 )
            *(_DWORD *)(v11 + 16) = 32;
          v103 = *(_DWORD *)(v11 + 16) == 0;
          v188 = 0;
          if ( !v103 )
            goto LABEL_482;
          sub_4F9880(v3, 29, v113 + 1, (unsigned __int64)(v113 + 1) >> 32, v188);
          sub_4F9880(v3, 29, v113 + 2, (unsigned __int64)(v113 + 2) >> 32, 0);
          sub_4F9880(v3, 31, v177, (unsigned __int64)v113 >> 32, &v206);
          v35 = *(_DWORD *)(v11 + 184);
          v114 = v206;
          *(_DWORD *)(v11 + 188) = v113;
          *(_DWORD *)(v11 + 4 * v35 + 152) = v114;
          *(_DWORD *)(v11 + 4 * (*(_DWORD *)(v11 + 184))++ + 168) = 0;
          goto LABEL_497;
        case 61:
          v115 = --*(_DWORD *)(v11 + 184);
          v188 = 0;
          v116 = (unsigned __int64)(4 * v115 + 1) >> 32;
          v187 = 4 * v115 + 1;
          v186 = 30;
          v185 = v224;
          *(_DWORD *)(v11 + 188) = -1;
          v215 = 4 * v115 + 1;
          sub_4F9880(v185, v186, v187, HIDWORD(v187), v188);
          v117 = 4 * v115 + 2;
          v118 = (unsigned __int64)v117 >> 32;
          v119 = v117;
          sub_4F9880(v224, 28, v117, v118, 0);
          v179 = 0;
          v120 = *(_DWORD *)(v211 + 184);
          v178 = 0;
          sub_4F98D0(v224, 34, *(_DWORD *)(v211 + 4 * v120 + 152), 0, 0);
          sub_4F9700(v224, 14, 0);
          HIDWORD(v187) = v118;
          v121 = (int)v224;
          sub_4F9880(v224, 33, v119, HIDWORD(v187), 0);
          sub_4F9880(v121, 32, v215, v116, 0);
          sub_4F9700(v121, 104, 0);
          LODWORD(v228) = 1;
          goto LABEL_497;
        case 62:
          sub_4F9700(v3, 25, 0);
          LODWORD(v228) = 1;
          goto LABEL_497;
        case 63:
          sub_4F9700(v3, 3, 0);
          LODWORD(v228) = 1;
          goto LABEL_497;
        case 64:
          sub_4F9700(v3, 1, 0);
          LODWORD(v228) = 1;
          goto LABEL_497;
        case 65:
          v122 = *((_DWORD *)v7 - 12);
          if ( v122 & 1 )
          {
            sub_4F9700(v3, 2, 0);
            LODWORD(v228) = 1;
            goto LABEL_497;
          }
          switch ( v122 )
          {
            case 2:
              v188 = (const char *)256;
              HIDWORD(v187) = "wrong type \"integer\" for or operator";
              goto LABEL_479;
            case 32:
              v188 = (const char *)256;
              HIDWORD(v187) = "wrong type \"float\" for or operator";
              goto LABEL_479;
            case 4:
              v188 = (const char *)256;
              HIDWORD(v187) = "wrong type \"string\" for or operator";
              goto LABEL_479;
            case 1:
              v188 = (const char *)256;
              HIDWORD(v187) = "wrong type \"boolean\" for or operator";
              goto LABEL_479;
            default:
              goto LABEL_480;
          }
          goto LABEL_480;
        case 66:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v102 = sub_4F9BE0(v3, "<", v178, v179, v180, v181, v182, v183, v184);
          goto LABEL_248;
        case 67:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v102 = sub_4F9BE0(v3, ">", v178, v179, v180, v181, v182, v183, v184);
          goto LABEL_248;
        case 68:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v102 = sub_4F9BE0(v3, "<=", v178, v179, v180, v181, v182, v183, v184);
          goto LABEL_248;
        case 69:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v102 = sub_4F9BE0(v3, ">=", v178, v179, v180, v181, v182, v183, v184);
          goto LABEL_248;
        case 70:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v102 = sub_4F9BE0(v3, "==", v178, v179, v180, v181, v182, v183, v184);
          goto LABEL_248;
        case 71:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v102 = sub_4F9BE0(v3, "!=", v178, v179, v180, v181, v182, v183, v184);
          goto LABEL_248;
        case 73:
        case 89:
          _mm_storel_epi64((__m128i *)&v228, _mm_loadl_epi64((const __m128i *)(v7 - 24)));
          _mm_storel_epi64((__m128i *)&v229, _mm_loadl_epi64((const __m128i *)v7 - 1));
          v123 = _mm_loadl_epi64((const __m128i *)(v7 - 8));
          goto LABEL_496;
        case 76:
          if ( *((_DWORD *)v7 - 24) != 2 )
          {
            sub_4F49D0(v11 + 332, "wrong type for range's lower bound", 256);
            *(_DWORD *)(v11 + 16) = 24;
          }
          if ( *((_DWORD *)v7 - 6) == 2 )
            goto LABEL_178;
          v188 = (const char *)256;
          HIDWORD(v187) = "wrong type for range's upper bound";
          goto LABEL_328;
        case 77:
        case 78:
          if ( *(_DWORD *)v7 != 2 )
          {
            v188 = (const char *)256;
            HIDWORD(v187) = "wrong type for enumeration item";
LABEL_328:
            sub_4F49D0(v11 + 332, HIDWORD(v187), v188);
            *(_DWORD *)(v11 + 16) = 24;
          }
          goto LABEL_178;
        case 79:
        case 87:
          sub_4F9880(v3, 13, -1, -345382, 0);
          goto LABEL_497;
        case 81:
          sub_4F9880(v3, 13, -1, -345382, 0);
          sub_4F9730(v3, "$*");
          goto LABEL_497;
        case 84:
        case 85:
          sub_4F9730(v3, *(_DWORD *)v7);
          sub_4DDF10(*(LPVOID *)v7);
          goto LABEL_497;
        case 88:
          sub_4F9880(v3, 13, 1, 0, 0);
          goto LABEL_497;
        case 90:
          v188 = 0;
          HIDWORD(v187) = 36;
          goto LABEL_336;
        case 91:
          sub_4E1BE0(
            v3,
            "Using deprecated \"entrypoint\" keyword. Use the \"entry_point\" function from PE module instead.");
          v124 = sub_4F9700(v3, 37, 0);
          goto LABEL_337;
        case 92:
          v126 = *((_DWORD *)v7 - 6);
          if ( !(v126 & 2) )
          {
            switch ( v126 )
            {
              case 2:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for intXXXX or uintXXXX operator";
                goto LABEL_479;
              case 32:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for intXXXX or uintXXXX operator";
                goto LABEL_479;
              case 4:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for intXXXX or uintXXXX operator";
                goto LABEL_479;
              case 1:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for intXXXX or uintXXXX operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          v127 = *(v7 - 72) - 16;
          v188 = 0;
          HIDWORD(v187) = v127;
LABEL_336:
          v124 = sub_4F9700(v3, SBYTE4(v187), v188);
LABEL_337:
          *(_DWORD *)(v11 + 16) = v124;
          v125 = v124 == 0;
LABEL_338:
          if ( v125 )
          {
            LODWORD(v228) = 2;
            goto LABEL_340;
          }
          goto LABEL_481;
        case 93:
          v188 = 0;
          v128 = sub_4F9880(v3, 13, *(_QWORD *)v7, *(_QWORD *)v7 >> 32, 0);
          *(_DWORD *)(v11 + 16) = v128;
          if ( v128 )
            goto LABEL_481;
          LODWORD(v229) = *(_DWORD *)v7;
          v129 = *((_DWORD *)v7 + 1);
          LODWORD(v228) = 2;
          HIDWORD(v229) = v129;
          goto LABEL_497;
        case 94:
          v130 = sub_4F9880(v3, 13, *(_QWORD *)v7, *(_QWORD *)v7 >> 32, 0);
          *(_DWORD *)(v11 + 16) = v130;
          if ( !v130 )
            goto LABEL_352;
          goto LABEL_481;
        case 95:
          v131 = *(void **)v7;
          v188 = (const char *)&v200;
          HIDWORD(v187) = *(_DWORD *)v131 + 12;
          LODWORD(v187) = v131;
          *(_DWORD *)(v11 + 16) = sub_4DE7B0(*(_DWORD *)(v11 + 84), v131, HIDWORD(v187), (int)&v200);
          sub_4DDF10(*(LPVOID *)v7);
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
          v132 = sub_4F98D0(v3, 13, v200, 0, 0);
          *(_DWORD *)(v11 + 16) = v132;
          if ( v132 )
            goto LABEL_481;
          LODWORD(v228) = 4;
          goto LABEL_497;
        case 96:
          v188 = (const char *)-345382;
          v187 = -379750429807869932i64;
          *(_DWORD *)(v11 + 16) = sub_4FA300(v3, *(_DWORD *)v7, 20, -88417537, -345382);
          sub_4DDF10(*(LPVOID *)v7);
          v125 = *(_DWORD *)(v11 + 16) == 0;
          goto LABEL_338;
        case 97:
          v188 = (const char *)-345382;
          v187 = -379750429807869928i64;
          *(_DWORD *)(v11 + 16) = sub_4FA300(v3, *((_DWORD *)v7 - 18), 24, -88417537, -345382);
          sub_4DDF10(*((LPVOID *)v7 - 18));
          v125 = *(_DWORD *)(v11 + 16) == 0;
          goto LABEL_338;
        case 98:
          v133 = sub_4F9880(v3, 13, 1, 0, 0);
          *(_DWORD *)(v11 + 16) = v133;
          if ( !v133 )
          {
            v188 = (const char *)-345382;
            v187 = -379750429807869928i64;
            *(_DWORD *)(v11 + 16) = sub_4FA300(v3, *(_DWORD *)v7, 24, -88417537, -345382);
          }
          sub_4DDF10(*(LPVOID *)v7);
          v125 = *(_DWORD *)(v11 + 16) == 0;
          goto LABEL_338;
        case 99:
          v134 = *(LPVOID *)v7;
          if ( *(_DWORD *)v7 == 2 )
            goto LABEL_362;
          if ( v134 == (LPVOID)1 )
          {
            LODWORD(v228) = 1;
            v229 = -1483400188077313i64;
          }
          else
          {
            if ( v134 != (LPVOID)16 )
              _wassert(&off_653130, &off_65AE14, 0x62Bu);
            *(_DWORD *)(v11 + 16) = sub_4F9700(v3, 17, 0);
            switch ( **((_BYTE **)v7 + 2) )
            {
              case 1:
LABEL_362:
                LODWORD(v228) = 2;
                v229 = -1483400188077313i64;
                break;
              case 2:
                LODWORD(v228) = 4;
                break;
              case 8:
                LODWORD(v228) = 32;
                break;
              default:
                v188 = (const char *)*((_DWORD *)v7 + 4);
                _snprintf((char *)(v11 + 332), 0x100u, "wrong usage of identifier \"%s\"", v188);
                *(_DWORD *)(v11 + 16) = 24;
                break;
            }
          }
          goto LABEL_178;
        case 100:
          v135 = *(LPVOID *)v7;
          if ( !(*(_DWORD *)v7 & 0x22) )
          {
            switch ( v135 )
            {
              case 2u:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for - operator";
                goto LABEL_479;
              case 0x20u:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for - operator";
                goto LABEL_479;
              case 4u:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for - operator";
                goto LABEL_479;
              case 1u:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for - operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( v135 == (LPVOID)2 )
          {
            v136 = *((_DWORD *)v7 + 2);
            LODWORD(v228) = 2;
            v137 = *((_DWORD *)v7 + 3);
            if ( v136 != -88417537 || v137 != -345382 )
            {
              v138 = -v136;
              LODWORD(v229) = v138;
              HIDWORD(v229) = (unsigned __int64)-(signed __int64)__PAIR__(v137, v138) >> 32;
              *(_DWORD *)(v11 + 16) = sub_4F9700(v3, 110, 0);
            }
            else
            {
              v229 = -1483400188077313i64;
              *(_DWORD *)(v11 + 16) = sub_4F9700(v3, 110, 0);
            }
          }
          else if ( v135 == (LPVOID)32 )
          {
            LODWORD(v228) = 32;
            *(_DWORD *)(v11 + 16) = sub_4F9700(v3, -126, 0);
          }
LABEL_178:
          if ( *(_DWORD *)(v11 + 16) )
            goto LABEL_481;
          goto LABEL_497;
        case 101:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v139 = sub_4F9BE0(v3, "+", v178, v179, v180, v181, v182, v183, v184);
          *(_DWORD *)(v11 + 16) = v139;
          if ( v139 )
            goto LABEL_481;
          if ( *((_DWORD *)v7 - 12) != 2 || *(_DWORD *)v7 != 2 )
            goto LABEL_352;
          if ( *((_DWORD *)v7 - 10) == -88417537 || *((_DWORD *)v7 + 2) == -88417537 )
            goto LABEL_392;
          v140 = (__PAIR__(*((_DWORD *)v7 - 9), *((_DWORD *)v7 - 10)) + *((_QWORD *)v7 + 1)) >> 32;
          v35 = *((_DWORD *)v7 - 10) + *((_DWORD *)v7 + 2);
          LODWORD(v229) = *((_DWORD *)v7 - 10) + *((_DWORD *)v7 + 2);
          HIDWORD(v229) = v140;
          LODWORD(v228) = 2;
          goto LABEL_497;
        case 102:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v141 = sub_4F9BE0(v3, "-", v178, v179, v180, v181, v182, v183, v184);
          *(_DWORD *)(v11 + 16) = v141;
          if ( v141 )
            goto LABEL_481;
          if ( *((_DWORD *)v7 - 12) != 2 || *(_DWORD *)v7 != 2 )
            goto LABEL_352;
          if ( *((_DWORD *)v7 - 10) == -88417537 || *((_DWORD *)v7 + 2) == -88417537 )
            goto LABEL_392;
          v35 = *((_DWORD *)v7 - 10) - *((_DWORD *)v7 + 2);
          v229 = __PAIR__(*((_DWORD *)v7 - 9), *((_DWORD *)v7 - 10)) - *((_QWORD *)v7 + 1);
          LODWORD(v228) = 2;
          goto LABEL_497;
        case 103:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v142 = sub_4F9BE0(v3, "*", v178, v179, v180, v181, v182, v183, v184);
          *(_DWORD *)(v11 + 16) = v142;
          if ( v142 )
            goto LABEL_481;
          if ( *((_DWORD *)v7 - 12) != 2 || *(_DWORD *)v7 != 2 )
            goto LABEL_352;
          if ( *((_DWORD *)v7 - 10) == -88417537 || *((_DWORD *)v7 + 2) == -88417537 )
            goto LABEL_392;
          v188 = (const char *)*((_DWORD *)v7 - 9);
          HIDWORD(v187) = *((_DWORD *)v7 - 10);
          *(_QWORD *)&v186 = *((_QWORD *)v7 + 1);
          v229 = *(_QWORD *)&v186 * *(__int64 *)((char *)&v187 + 4);
          LODWORD(v228) = 2;
          goto LABEL_497;
        case 104:
          _mm_storel_epi64((__m128i *)&v184, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v186, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          _mm_storel_epi64((__m128i *)((char *)&v187 + 4), _mm_loadl_epi64((const __m128i *)v7 + 1));
          _mm_storel_epi64((__m128i *)&v178, _mm_loadl_epi64((const __m128i *)v7 - 3));
          _mm_storel_epi64((__m128i *)&v180, _mm_loadl_epi64((const __m128i *)(v7 - 40)));
          _mm_storel_epi64((__m128i *)&v182, _mm_loadl_epi64((const __m128i *)v7 - 2));
          v143 = sub_4F9BE0(v3, &byte_6A9194, v178, v179, v180, v181, v182, v183, v184);
          *(_DWORD *)(v11 + 16) = v143;
          if ( v143 )
            goto LABEL_481;
          if ( *((_DWORD *)v7 - 12) != 2 || *(_DWORD *)v7 != 2 )
          {
LABEL_352:
            LODWORD(v228) = 32;
          }
          else if ( *((_DWORD *)v7 - 10) == -88417537 || *((_DWORD *)v7 + 2) == -88417537 )
          {
LABEL_392:
            v229 = -1483400188077313i64;
            LODWORD(v228) = 2;
          }
          else
          {
            v188 = (const char *)*((_DWORD *)v7 + 3);
            HIDWORD(v187) = *((_DWORD *)v7 + 2);
            LODWORD(v187) = *((_DWORD *)v7 - 9);
            v186 = *((_DWORD *)v7 - 10);
            v229 = *(_QWORD *)&v186 / *(__int64 *)((char *)&v187 + 4);
            LODWORD(v228) = 2;
          }
          goto LABEL_497;
        case 105:
          v144 = *((_DWORD *)v7 - 12);
          if ( !(v144 & 2) )
          {
            switch ( v144 )
            {
              case 2:
                goto LABEL_413;
              case 4:
                goto LABEL_414;
              case 1:
                goto LABEL_415;
              case 32:
                goto LABEL_418;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( !(*(_DWORD *)v7 & 2) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
LABEL_413:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for % operator";
                goto LABEL_479;
              case 4:
LABEL_414:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for % operator";
                goto LABEL_479;
              case 1:
LABEL_415:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for % operator";
                goto LABEL_479;
              case 0x20:
LABEL_418:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for % operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          sub_4F9700(v3, 10, 0);
          v103 = *((_DWORD *)v7 - 10) == -88417537;
          LODWORD(v228) = 2;
          if ( !v103 && *((_DWORD *)v7 + 2) != -88417537 )
          {
            v188 = (const char *)*((_DWORD *)v7 + 3);
            HIDWORD(v187) = *((_DWORD *)v7 + 2);
            LODWORD(v187) = *((_DWORD *)v7 - 9);
            v186 = *((_DWORD *)v7 - 10);
            v229 = *(_QWORD *)&v186 % *(__int64 *)((char *)&v187 + 4);
            goto LABEL_497;
          }
          goto LABEL_340;
        case 106:
          v145 = *((_DWORD *)v7 - 12);
          if ( !(v145 & 2) )
          {
            switch ( v145 )
            {
              case 2:
                goto LABEL_424;
              case 4:
                goto LABEL_425;
              case 1:
                goto LABEL_426;
              case 32:
                goto LABEL_429;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( !(*(_DWORD *)v7 & 2) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
                goto LABEL_424;
              case 4:
                goto LABEL_425;
              case 1:
                goto LABEL_426;
              case 0x20:
                goto LABEL_429;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          sub_4F9700(v3, 7, 0);
          v103 = *((_DWORD *)v7 - 10) == -88417537;
          LODWORD(v228) = 2;
          if ( !v103 && *((_DWORD *)v7 + 2) != -88417537 )
          {
            v35 = *((_DWORD *)v7 - 10) ^ *((_DWORD *)v7 + 2);
            v146 = *((_DWORD *)v7 - 9) ^ *((_DWORD *)v7 + 3);
            LODWORD(v229) = *((_DWORD *)v7 - 10) ^ *((_DWORD *)v7 + 2);
            HIDWORD(v229) = v146;
            goto LABEL_497;
          }
          goto LABEL_340;
        case 107:
          v147 = *((_DWORD *)v7 - 12);
          if ( !(v147 & 2) )
          {
            switch ( v147 )
            {
              case 2:
                goto LABEL_424;
              case 4:
                goto LABEL_425;
              case 1:
                goto LABEL_426;
              case 32:
                goto LABEL_429;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( !(*(_DWORD *)v7 & 2) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
LABEL_424:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for ^ operator";
                goto LABEL_479;
              case 4:
LABEL_425:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for ^ operator";
                goto LABEL_479;
              case 1:
LABEL_426:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for ^ operator";
                goto LABEL_479;
              case 0x20:
LABEL_429:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for ^ operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          sub_4F9700(v3, 5, 0);
          v103 = *((_DWORD *)v7 - 10) == -88417537;
          LODWORD(v228) = 2;
          if ( !v103 && *((_DWORD *)v7 + 2) != -88417537 )
          {
            v35 = *((_DWORD *)v7 - 10) & *((_DWORD *)v7 + 2);
            v148 = *((_DWORD *)v7 - 9) & *((_DWORD *)v7 + 3);
            LODWORD(v229) = *((_DWORD *)v7 - 10) & *((_DWORD *)v7 + 2);
            HIDWORD(v229) = v148;
            goto LABEL_497;
          }
          goto LABEL_340;
        case 108:
          v149 = *((_DWORD *)v7 - 12);
          if ( !(v149 & 2) )
          {
            switch ( v149 )
            {
              case 2:
                goto LABEL_442;
              case 4:
                goto LABEL_443;
              case 1:
                goto LABEL_444;
              case 32:
                goto LABEL_447;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( !(*(_DWORD *)v7 & 2) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
LABEL_442:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for | operator";
                goto LABEL_479;
              case 4:
LABEL_443:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for | operator";
                goto LABEL_479;
              case 1:
LABEL_444:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for | operator";
                goto LABEL_479;
              case 0x20:
LABEL_447:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for | operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          sub_4F9700(v3, 6, 0);
          v103 = *((_DWORD *)v7 - 10) == -88417537;
          LODWORD(v228) = 2;
          if ( !v103 && *((_DWORD *)v7 + 2) != -88417537 )
          {
            v35 = *((_DWORD *)v7 - 10) | *((_DWORD *)v7 + 2);
            v150 = *((_DWORD *)v7 - 9) | *((_DWORD *)v7 + 3);
            LODWORD(v229) = *((_DWORD *)v7 - 10) | *((_DWORD *)v7 + 2);
            HIDWORD(v229) = v150;
            goto LABEL_497;
          }
          goto LABEL_340;
        case 109:
          if ( !(*(_DWORD *)v7 & 2) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for ~ operator";
                goto LABEL_479;
              case 0x20:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for ~ operator";
                goto LABEL_479;
              case 4:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for ~ operator";
                goto LABEL_479;
              case 1:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for ~ operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          sub_4F9700(v3, 4, 0);
          v35 = *((_DWORD *)v7 + 2);
          v151 = *((_DWORD *)v7 + 3);
          LODWORD(v228) = 2;
          if ( v35 != -88417537 || v151 != -345382 )
          {
            v35 = ~v35;
            LODWORD(v229) = v35;
            HIDWORD(v229) = ~v151;
            goto LABEL_497;
          }
          goto LABEL_340;
        case 110:
          v152 = *((_DWORD *)v7 - 12);
          if ( !(v152 & 2) )
          {
            switch ( v152 )
            {
              case 2:
                goto LABEL_462;
              case 4:
                goto LABEL_463;
              case 1:
                goto LABEL_464;
              case 32:
                goto LABEL_467;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          if ( !(*(_DWORD *)v7 & 2) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
LABEL_462:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for << operator";
                goto LABEL_479;
              case 4:
LABEL_463:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for << operator";
                goto LABEL_479;
              case 1:
LABEL_464:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for << operator";
                goto LABEL_479;
              case 0x20:
LABEL_467:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for << operator";
                goto LABEL_479;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          sub_4F9700(v3, 8, 0);
          v103 = *((_DWORD *)v7 - 10) == -88417537;
          LODWORD(v228) = 2;
          if ( !v103 )
          {
            v35 = *((_DWORD *)v7 + 2);
            if ( v35 != -88417537 )
            {
              LODWORD(v153) = *((_DWORD *)v7 - 10);
              HIDWORD(v153) = *((_DWORD *)v7 - 9);
              v229 = v153 << v35;
              goto LABEL_497;
            }
          }
          goto LABEL_340;
        case 111:
          v154 = *((_DWORD *)v7 - 12);
          if ( !(v154 & 2) )
          {
            switch ( v154 )
            {
              case 2:
                goto LABEL_473;
              case 4:
                goto LABEL_474;
              case 32:
                goto LABEL_477;
              case 1:
                goto LABEL_478;
              default:
                break;
            }
LABEL_480:
            *(_DWORD *)(v11 + 16) = 24;
            goto LABEL_481;
          }
          if ( !(*(_DWORD *)v7 & 2) )
          {
            switch ( *(_DWORD *)v7 )
            {
              case 2:
LABEL_473:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"integer\" for >> operator";
                goto LABEL_479;
              case 4:
LABEL_474:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"string\" for >> operator";
                goto LABEL_479;
              case 0x20:
LABEL_477:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"float\" for >> operator";
                goto LABEL_479;
              case 1:
LABEL_478:
                v188 = (const char *)256;
                HIDWORD(v187) = "wrong type \"boolean\" for >> operator";
LABEL_479:
                sub_4F49D0(v11 + 332, HIDWORD(v187), v188);
                break;
              default:
                goto LABEL_480;
            }
            goto LABEL_480;
          }
          sub_4F9700(v3, 9, 0);
          v103 = *((_DWORD *)v7 - 10) == -88417537;
          LODWORD(v228) = 2;
          if ( v103 || (v35 = *((_DWORD *)v7 + 2), v35 == -88417537) )
          {
LABEL_340:
            v229 = -1483400188077313i64;
          }
          else
          {
            LODWORD(v161) = *((_DWORD *)v7 - 10);
            HIDWORD(v161) = *((_DWORD *)v7 - 9);
            v229 = v161 >> v35;
          }
LABEL_497:
          if ( dword_6FAFD0 )
          {
            v188 = "-> $$ =";
            HIDWORD(v187) = "%s ";
            v162 = sub_5A39F0(v35);
            fprintf((FILE *)(v162 + 64), (const char *)HIDWORD(v187), v188);
            v163 = v220[(_DWORD)byte_659950];
            v165 = sub_5A39F0(v164);
            v188 = off_6597A8[v163];
            v166 = (FILE *)(v165 + 64);
            if ( v163 >= 70 )
              HIDWORD(v187) = "nterm %s (";
            else
              HIDWORD(v187) = "token %s (";
            fprintf((FILE *)(v165 + 64), (const char *)HIDWORD(v187), v188);
            fprintf(v166, ")");
            v188 = "\n";
            v168 = sub_5A39F0(v167);
            fprintf((FILE *)(v168 + 64), v188);
          }
          v169 = (int)v217;
          v170 = &v225[-2 * (_DWORD)v216];
          v225 -= 2 * (_DWORD)v216;
          if ( dword_6FAFD0 )
          {
            sub_4F59F0(v223, (unsigned int)v170);
            v170 = v225;
          }
          v171 = _mm_loadl_epi64((const __m128i *)&v228);
          v172 = (int)v220;
          v7 = (char *)(v169 + 24);
          v227 = v7;
          _mm_storel_epi64((__m128i *)v7, v171);
          _mm_storel_epi64((__m128i *)(v7 + 8), _mm_loadl_epi64((const __m128i *)&v229));
          _mm_storel_epi64((__m128i *)v7 + 1, _mm_loadl_epi64((const __m128i *)&v230));
          v173 = (unsigned __int8)byte_659950[v172];
          v174 = *(_WORD *)v170;
          v175 = word_659C54[v173];
          v215 = v173;
          v176 = v174 + v175;
          if ( v176 > 0x17F || word_65A028[v176] != v174 )
          {
            v3 = (int)v224;
            v6 = word_659A7C[v215];
            v4 = v213;
            v8 = v170 + 2;
          }
          else
          {
            v6 = word_659D28[v176];
            v3 = (int)v224;
            v4 = v213;
            v8 = v170 + 2;
          }
          break;
        case 72:
        case 112:
          _mm_storel_epi64((__m128i *)&v228, _mm_loadl_epi64((const __m128i *)v7));
          _mm_storel_epi64((__m128i *)&v229, _mm_loadl_epi64((const __m128i *)(v7 + 8)));
          v123 = _mm_loadl_epi64((const __m128i *)v7 + 1);
LABEL_496:
          _mm_storel_epi64((__m128i *)&v230, v123);
          goto LABEL_497;
        default:
          goto LABEL_497;
      }
    }
    else
    {
      v27 = v219;
      if ( v219 == -2 )
      {
        if ( dword_6FAFD0 )
        {
          v188 = "Reading a token: ";
          v28 = sub_5A39F0(v26);
          fprintf((FILE *)(v28 + 64), v188);
        }
        v27 = ((int (__cdecl *)(__int64 *, int, int))sub_4E0840)(&v195, v3, v11);
        v219 = v27;
      }
      if ( v27 > 0 )
      {
        if ( (unsigned int)v27 > 0x131 )
          v218 = 2;
        else
          v218 = (unsigned __int8)byte_659338[v27];
        if ( !dword_6FAFD0 )
          goto LABEL_42;
        v188 = "Next token is";
        HIDWORD(v187) = "%s ";
        v30 = sub_5A39F0(v26);
        fprintf((FILE *)(v30 + 64), (const char *)HIDWORD(v187), v188);
        v32 = (FILE *)(sub_5A39F0(v31) + 64);
        v188 = off_6597A8[v218];
        v216 = v32;
        if ( v218 >= 70 )
          HIDWORD(v187) = "nterm %s (";
        else
          HIDWORD(v187) = "token %s (";
        fprintf(v32, (const char *)HIDWORD(v187), v188);
        fprintf(v216, ")");
        v188 = "\n";
LABEL_41:
        v33 = sub_5A39F0(v26);
        fprintf((FILE *)(v33 + 64), v188);
LABEL_42:
        v29 = v218;
        goto LABEL_43;
      }
      v29 = 0;
      v218 = 0;
      v219 = 0;
      if ( dword_6FAFD0 )
      {
        v188 = "Now at end of input.\n";
        goto LABEL_41;
      }
LABEL_43:
      v34 = (int)&v217[v29];
      if ( (unsigned int)&v217[v29] > 0x17F || word_65A028[v34] != v29 )
      {
        v25 = v226;
        goto LABEL_65;
      }
      v6 = word_659D28[v34];
      v220 = (char *)v6;
      if ( v6 > 0 )
      {
        if ( v6 == 2 )
          goto LABEL_508;
        if ( v221 )
          --v221;
        if ( dword_6FAFD0 )
        {
          v188 = "Shifting";
          HIDWORD(v187) = "%s ";
          v38 = sub_5A39F0(v6);
          fprintf((FILE *)(v38 + 64), (const char *)HIDWORD(v187), v188);
          v40 = (FILE *)(sub_5A39F0(v39) + 64);
          v188 = off_6597A8[v218];
          if ( v218 >= 70 )
            HIDWORD(v187) = "nterm %s (";
          else
            HIDWORD(v187) = "token %s (";
          fprintf(v40, (const char *)HIDWORD(v187), v188);
          fprintf(v40, ")");
          v188 = "\n";
          v42 = sub_5A39F0(v41);
          fprintf((FILE *)(v42 + 64), v188);
          v6 = (int)v220;
        }
        v43 = v219;
        v44 = _mm_loadl_epi64((const __m128i *)&v195);
        v3 = (int)v224;
        if ( v219 )
          v43 = -2;
        v45 = v225;
        v7 += 24;
        v219 = v43;
        v4 = v213;
        _mm_storel_epi64((__m128i *)v7, v44);
        _mm_storel_epi64((__m128i *)(v7 + 8), _mm_loadl_epi64((const __m128i *)&v196));
        v46 = _mm_loadl_epi64((const __m128i *)&v197);
        v227 = v7;
        _mm_storel_epi64((__m128i *)v7 + 1, v46);
        v8 = v45 + 2;
      }
      else
      {
        if ( v6 && v6 != -87 )
        {
          v35 = -v6;
          v220 = (char *)v35;
          goto LABEL_49;
        }
        v25 = v226;
LABEL_68:
        if ( v221 )
        {
          if ( v221 == 3 )
          {
            if ( v219 > 0 )
            {
              v188 = (const char *)v11;
              HIDWORD(v187) = v3;
              sub_4F44B0("Error: discarding", v29, &v195);
              v219 = -2;
            }
            else if ( !v219 )
            {
              goto LABEL_97;
            }
          }
        }
        else
        {
          ++v207;
          v47 = sub_4F4580(v221, v25, v219);
          v48 = v212;
          v221 = v47;
          if ( v212 >= v47 || v212 >= 0xFFFFFFFF )
          {
            v49 = (char *)v214;
          }
          else
          {
            v212 = 2 * v47;
            if ( v47 > 2 * v47 || 2 * v47 > 0xFFFFFFFF )
              v212 = -1;
            if ( v214 != &v235 )
              free(v214);
            v49 = (char *)malloc(v212);
            v47 = v221;
            v214 = v49;
            if ( v49 )
            {
              v48 = v212;
            }
            else
            {
              v49 = &v235;
              v48 = 128;
              v214 = &v235;
              v212 = 128;
            }
          }
          if ( v47 && v47 <= v48 )
          {
            sub_4F4580(v49, v226, v219);
            sub_4E06D0(v3, v11, v214);
          }
          else
          {
            sub_4E06D0(v3, v11, "syntax error");
            if ( v221 )
              goto LABEL_93;
          }
        }
        v50 = v226;
        v51 = v225;
LABEL_84:
        v221 = 3;
        while ( 1 )
        {
          v52 = word_659B50[v50];
          if ( v52 != -65 )
          {
            v53 = v52 + 1;
            if ( v53 <= 0x17F && word_65A028[v53] == 1 )
            {
              v54 = word_659D28[v53];
              v220 = (char *)v54;
              if ( v54 > 0 )
                break;
            }
          }
          if ( v51 == v223 )
            goto LABEL_97;
          v55 = (unsigned __int8)byte_65A328[v50];
          v188 = (const char *)v11;
          HIDWORD(v187) = v3;
          sub_4F44B0("Error: popping", v55, v7);
          v51 = v225 - 2;
          v50 = *((_WORD *)v225 - 1);
          v7 -= 24;
          v225 -= 2;
          v226 = v50;
          if ( dword_6FAFD0 )
          {
            sub_4F59F0(v223, (unsigned int)v51);
            v50 = v226;
            v51 = v225;
          }
        }
        if ( v54 == 2 )
        {
LABEL_508:
          v221 = 0;
          goto LABEL_98;
        }
        v155 = _mm_loadl_epi64((const __m128i *)&v195);
        v7 += 24;
        v227 = v7;
        _mm_storel_epi64((__m128i *)v7, v155);
        _mm_storel_epi64((__m128i *)(v7 + 8), _mm_loadl_epi64((const __m128i *)&v196));
        _mm_storel_epi64((__m128i *)v7 + 1, _mm_loadl_epi64((const __m128i *)&v197));
        if ( dword_6FAFD0 )
        {
          v188 = "Shifting";
          HIDWORD(v187) = "%s ";
          v156 = sub_5A39F0(v50);
          fprintf((FILE *)(v156 + 64), (const char *)HIDWORD(v187), v188);
          v215 = v220[(_DWORD)byte_65A328];
          v158 = (FILE *)(sub_5A39F0(v157) + 64);
          v188 = off_6597A8[v215];
          if ( v215 >= 70 )
            HIDWORD(v187) = "nterm %s (";
          else
            HIDWORD(v187) = "token %s (";
          fprintf(v158, (const char *)HIDWORD(v187), v188);
          fprintf(v158, ")");
          v188 = "\n";
          v160 = sub_5A39F0(v159);
          fprintf((FILE *)(v160 + 64), v188);
          v54 = (int)v220;
        }
        v3 = (int)v224;
        v6 = v54;
        v4 = v213;
        v8 = v225 + 2;
      }
    }
  }
  v217 = (char *)(((v8 - (_BYTE *)v223) >> 1) + 1);
  if ( v213 < 0x2710 )
  {
    v12 = (signed int)v216;
    if ( (unsigned int)v216 > 0x2710 )
      v12 = 10000;
    v213 = v12;
    v216 = (FILE *)v223;
    v13 = (char *)malloc(26 * v12 + 23);
    v220 = v13;
    if ( v13 )
    {
      v14 = (int)v217;
      if ( v217 )
      {
        v223 = (void *)((_BYTE *)v223 - v13);
        v15 = v223;
        v16 = v13;
        v17 = (int)v217;
        do
        {
          *(_WORD *)v16 = *(_WORD *)&v16[(_DWORD)v15];
          v16 += 2;
          --v17;
        }
        while ( v17 );
        v3 = (int)v224;
        v13 = v220;
      }
      v223 = v13;
      v18 = (unsigned int)&v220[24 * ((2 * v213 + 23) / 0x18)];
      v217 = &v220[24 * ((2 * v213 + 23) / 0x18)];
      if ( v14 )
      {
        v210 -= v18;
        v19 = v210;
        v20 = (unsigned int)&v220[24 * ((2 * v213 + 23) / 0x18)];
        v21 = v14;
        do
        {
          _mm_storel_epi64((__m128i *)v20, _mm_loadl_epi64((const __m128i *)&v19[v20]));
          _mm_storel_epi64((__m128i *)(v20 + 8), _mm_loadl_epi64((const __m128i *)&v19[v20 + 8]));
          _mm_storel_epi64((__m128i *)(v20 + 16), _mm_loadl_epi64((const __m128i *)&v19[v20 + 16]));
          v20 += 24;
          --v21;
        }
        while ( v21 );
        v11 = v211;
      }
      v22 = &v234;
      v210 = (char *)v18;
      if ( (char *)v216 != &v234 )
      {
        free(v216);
        v18 = (unsigned int)v217;
      }
      v225 = (char *)v223 + 2 * v14 - 2;
      v7 = (char *)(v18 + 8 * (3 * v14 - 3));
      v227 = v7;
      if ( dword_6FAFD0 )
      {
        v188 = (const char *)v213;
        HIDWORD(v187) = "Stack size increased to %lu\n";
        v23 = sub_5A39F0(v22);
        fprintf((FILE *)(v23 + 64), (const char *)HIDWORD(v187), v188);
      }
      if ( (char *)v223 + 2 * v213 - 2 <= v225 )
      {
LABEL_97:
        v221 = 1;
        goto LABEL_98;
      }
      v6 = v226;
      goto LABEL_23;
    }
  }
LABEL_93:
  sub_4E06D0(v3, v11, "memory exhausted");
  v221 = 2;
LABEL_98:
  if ( v219 && v219 != -2 )
  {
    v188 = (const char *)v11;
    HIDWORD(v187) = v3;
    sub_4F44B0("Cleanup: discarding lookahead", v218, &v195);
  }
  if ( dword_6FAFD0 )
    sub_4F59F0(v223, (unsigned int)v225);
  for ( i = v225; i != v223; v225 = i )
  {
    v57 = *(_WORD *)i;
    v188 = (const char *)v11;
    v58 = (unsigned __int8)byte_65A328[v57];
    HIDWORD(v187) = v3;
    sub_4F44B0("Cleanup: popping", v58, v7);
    i = v225 - 2;
    v7 -= 24;
  }
  if ( v223 != &v234 )
    free(v223);
  if ( v214 != &v235 )
    free(v214);
  return v221;
}


/**
 * yy_stack_print - Print the state stack from its BOTTOM up to its TOP
 *
 * @param yytype_int16 *yybottom
 * @param yytype_int16 *yytop
 */
 int __cdecl sub_4F59F0(_WORD *a1, unsigned int a2)
{
  int v2; // ecx@0
  int v3; // eax@1
  int v4; // ecx@1
  _WORD *i; // esi@1
  int v6; // ST08_4@2
  int v7; // eax@2
  int v8; // eax@3

  v3 = sub_5A39F0(v2);
  fprintf((FILE *)(v3 + 64), "Stack now");
  for ( i = a1; (unsigned int)i <= a2; ++i )
  {
    v6 = *i;
    v7 = sub_5A39F0(v4);
    fprintf((FILE *)(v7 + 64), off_65A870, v6);
  }
  v8 = sub_5A39F0(v4);
  return fprintf((FILE *)(v8 + 64), "\n");
}
