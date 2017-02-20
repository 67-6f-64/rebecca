/**
 * pe.c
 * https://github.com/VirusTotal/yara/blob/master/libyara/modules/pe.c
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */


/**
 * define_function - looks like module.h #define return_type has been embeded on compile
 *
 * @param valid_on
 */
int __cdecl sub_4ED3C0(int a1, int a2, int a3)
{
  int v3; // esi@1
  int v4; // ecx@1
  int v5; // ebx@3
  unsigned int v6; // edi@3
  unsigned int v7; // eax@3
  int v8; // ST00_4@3
  int v9; // edx@3
  signed __int64 v10; // rax@3
  _BYTE *v11; // esi@3
  int result; // eax@8
  _BYTE *v13; // eax@10
  int v14; // eax@13
  signed int v15; // [sp-Ch] [bp-18h]@0
  int v16; // [sp+4h] [bp-8h]@9
  unsigned int v17; // [sp+8h] [bp-4h]@3
  int v18; // [sp+1Ch] [bp+10h]@3

  v3 = a3;
  if ( sub_4DFFD0(*(_DWORD *)(a3 + 12), "not_before") || sub_4DFFD0(*(_DWORD *)(a3 + 12), "not_after") )
  {
    v13 = *(_BYTE **)(a3 + 16);
    if ( *v13 == 1 )
    {
      sub_4E0180(-88417537, -345382, v13, 0);
      return 0;
    }
LABEL_13:
    v14 = sub_5A39F0(v4);
    fprintf(
      (FILE *)(v14 + 64),
      "%s:%d: return type differs from function declaration\n",
      "..\\..\\libyara\\modules\\pe.c",
      v15);
    abort();
  }
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)a1;
  v7 = sub_4DFEE0(*(_DWORD *)(a3 + 12), "not_before");
  v8 = *(_DWORD *)(a3 + 12);
  v17 = v7;
  v18 = v9;
  LODWORD(v10) = sub_4DFEE0(v8, "not_after");
  v11 = *(_BYTE **)(v3 + 16);
  if ( *v11 != 1 )
  {
    v15 = 1293;
    goto LABEL_13;
  }
  if ( v5 < v18 || v5 <= v18 && v6 < v17 || __PAIR__(v5, v6) > v10 )
  {
    _mm_storel_pd((double *)&v16, 0i64);
    sub_4E0180(v16, v17, v11, 0);
    result = 0;
  }
  else
  {
    sub_4E0180(1, 0, v11, 0);
    result = 0;
  }
  return result;
}



/**
 * pe_parse_rich_signature
 *
 * @param PE* pe
 * @param size_t base_address
 */
char *__usercall sub_4ECB00@<eax>(char a1@<dil>, _DWORD *lpMem, int a3)
{
  _DWORD *v3; // ebx@1
  char *result; // eax@1
  _WORD *v5; // ecx@2
  int v6; // edx@3
  unsigned int v7; // edx@4
  char *v8; // esi@5
  unsigned int v9; // edi@5
  char *v10; // esi@8
  unsigned int v11; // esi@12
  char *v12; // eax@13
  char *i; // ecx@15
  char v14; // ST30_1@17
  char v15; // [sp-8h] [bp-10h]@5
  char *v16; // [sp+4h] [bp-4h]@13
  char *lpMema; // [sp+10h] [bp+8h]@12

  v3 = lpMem;
  result = (char *)lpMem[1];
  if ( (unsigned int)result >= 0x40 )
  {
    v5 = (_WORD *)*lpMem;
    if ( *(_WORD *)*lpMem == 23117 )
    {
      v6 = *((_DWORD *)v5 + 15);
      if ( v6 >= 0 )
      {
        v7 = v6 + 24;
        if ( (unsigned int)result >= v7 )
        {
          result = (char *)*((_DWORD *)v5 + 34);
          v8 = (char *)*((_DWORD *)v5 + 33);
          v15 = a1;
          v9 = (unsigned int)(v5 + 64);
          if ( v8 == result && result == *((char **)v5 + 35) )
          {
            result = (char *)((unsigned int)v8 ^ *(_DWORD *)v9);
            if ( result == (char *)1399742788 )
            {
              result = (char *)v5 + v7;
              v10 = (char *)(v5 + 64);
              if ( v9 <= (unsigned int)v5 + v7 )
              {
                while ( *(_DWORD *)v10 != 1751345490 )
                {
                  v10 += 4;
                  if ( v10 > result )
                    return result;
                }
                v11 = (unsigned int)&v10[-v9] & 0xFFFFFFFC;
                result = (char *)sub_4DDF80(v11);
                lpMema = result;
                if ( result )
                {
                  memmove_0(result, (const void *)v9, v11);
                  sub_4E0180(a3 + 128, 0, v3[3], "rich_signature.offset");
                  sub_4E0180(v11, 0, v3[3], "rich_signature.length");
                  sub_4E0180(*(_DWORD *)(v9 + 4), 0, v3[3], "rich_signature.key");
                  v12 = (char *)sub_4DDF80(v11);
                  v16 = v12;
                  if ( v12 )
                  {
                    memmove_0(v12, lpMema, v11);
                    for ( i = v16; i < &v16[v11]; i += 4 )
                      *(_DWORD *)i ^= *(_DWORD *)(v9 + 4);
                    sub_4E01F0(lpMema, v11, v3[3], (int)"rich_signature.raw_data", v15);
                    result = (char *)sub_4E01F0(v16, v11, v3[3], (int)"rich_signature.clear_data", v14);
                  }
                  else
                  {
                    result = (char *)sub_4DDF10(lpMema);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

/**
 * pe_parse_version_info
 *
 * @param PIMAGE_RESOURCE_DATA_ENTRY rsrc_data
 * @param PE* pe
 */
int __cdecl sub_4ECC70(_DWORD *a1, int a2)
{
  int v2; // esi@1
  int result; // eax@1
  int v4; // edi@2
  unsigned int v5; // edx@2
  unsigned int v6; // edx@5
  char *v7; // ebx@5
  char *v8; // edx@8
  char *v9; // edi@9
  int v10; // ebx@9
  unsigned int v11; // esi@11
  int v12; // eax@11
  char *v13; // [sp+8h] [bp-14Ch]@8
  char *v14; // [sp+Ch] [bp-148h]@8
  char v15; // [sp+10h] [bp-144h]@11
  char v16; // [sp+110h] [bp-44h]@11

  v2 = a2;
  result = sub_4ECE60(a2, *a1, 0);
  if ( result )
  {
    v4 = *(_DWORD *)a2 + result;
    v5 = *(_DWORD *)a2 + *(_DWORD *)(a2 + 4);
    if ( v4 + 6 <= v5 )
    {
      result = v4 + 16;
      if ( v4 + 16 <= v5 )
      {
        result = sub_4F4920(v4 + 6, "VS_VERSION_INFO");
        if ( !result )
        {
          v6 = *(_DWORD *)(a2 + 4) + *(_DWORD *)a2;
          v7 = (char *)(v4 + 92);
          if ( v4 + 98 <= v6 )
          {
            result = v4 + 107;
            if ( v4 + 107 <= v6 )
            {
              for ( result = sub_4F4920(v4 + 98, "StringFileInfo"); !result; result = sub_4F4920(
                                                                                        v7 + 6,
                                                                                        "StringFileInfo") )
              {
                v8 = v7 + 36;
                v7 += (*(_WORD *)v7 + 3) & 0xFFFFFFFC;
                v14 = v8;
                v13 = v7;
                if ( v8 < v7 )
                {
                  do
                  {
                    v9 = &v14[(2 * sub_4F4A60(v8 + 6) + 11) & 0xFFFFFFFC];
                    v8 = &v14[(*(_WORD *)v14 + 3) & 0xFFFFFFFC];
                    v10 = (int)(v9 + 6);
                    v14 += (*(_WORD *)v14 + 3) & 0xFFFFFFFC;
                    if ( (unsigned int)(v9 + 6) <= *(_DWORD *)(v2 + 4) + *(_DWORD *)v2 )
                    {
                      do
                      {
                        if ( v9 >= v8 )
                          break;
                        v11 = (unsigned int)&v9[(2 * sub_4F4A60(v10) + 11) & 0xFFFFFFFC];
                        sub_4F4A10(&v16, v10, 64);
                        sub_4F4A10(&v15, v11, 256);
                        v2 = a2;
                        sub_4E01F0(
                          &v15,
                          strlen(&v15),
                          *(_DWORD *)(a2 + 12),
                          (int)"version_info[%s]",
                          (unsigned int)&v16);
                        v12 = *(_WORD *)v9;
                        v8 = v14;
                        if ( !(_WORD)v12 )
                          break;
                        v9 += (v12 + 3) & 0xFFFFFFFC;
                        v10 = (int)(v9 + 6);
                      }
                      while ( (unsigned int)(v9 + 6) <= *(_DWORD *)(a2 + 4) + *(_DWORD *)a2 );
                    }
                    v7 = v13;
                  }
                  while ( (unsigned int)(v8 + 6) <= *(_DWORD *)(v2 + 4) + *(_DWORD *)v2 && *(_WORD *)v8 && v8 < v13 );
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


/**
 * _pe_iterate_resources
 *
 * @param PE* pe
 * @param PIMAGE_RESOURCE_DIRECTORY resource_dir
 * @param uint8_t* rsrc_data
 * @param int rsrc_tree_level
 * @param int* type
 * @param int* id
 * @param int* language
 * @param uint8_t* type_string
 * @param uint8_t* name_string
 * @param uint8_t* lang_string
 * @param RESOURCE_CALLBACK_FUNC callback
 * @param void* callback_data
 * @return result or RESOURCE_ITERATOR_ABORTED
 */
signed int __cdecl sub_4E7BB0(int a1, int a2, int a3, signed int a4, _DWORD *a5, _DWORD *a6, _DWORD *a7, _BYTE *a8, _BYTE *a9, _BYTE *a10, int (__cdecl *a11)(int, _DWORD, _DWORD, _DWORD, _BYTE *, _BYTE *, _BYTE *, int), int a12)
{
  int v12; // eax@2
  int v13; // ecx@3
  int v14; // esi@4
  signed int v15; // ecx@6
  int v16; // edx@13
  int v17; // edx@15
  int v18; // edx@16
  bool v19; // zf@17
  int v20; // edx@18
  signed int result; // eax@24
  int v22; // [sp+4h] [bp-Ch]@4
  int v23; // [sp+Ch] [bp-4h]@1
  int v24; // [sp+1Ch] [bp+Ch]@4

  v23 = 0;
  if ( *(_DWORD *)a2
    || (v12 = *(_WORD *)(a2 + 12), (unsigned __int16)v12 > 0x8000u)
    || (v13 = *(_WORD *)(a2 + 14), (unsigned __int16)v13 > 0x8000u) )
  {
    result = 0;
  }
  else
  {
    v14 = a2 + 16;
    v22 = v12 + v13;
    v24 = 0;
    if ( v12 + v13 > 0 )
    {
      while ( 1 )
      {
        if ( v14 + 8 > (unsigned int)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1) )
          goto LABEL_24;
        v15 = a4;
        if ( !a4 )
        {
          *a5 = *(_DWORD *)v14;
          a8 = sub_4EA3F0(a1, a3, (_DWORD *)v14);
          goto LABEL_12;
        }
        if ( a4 == 1 )
          break;
        if ( a4 == 2 )
        {
          *a7 = *(_DWORD *)v14;
          a10 = sub_4EA3F0(a1, a3, (_DWORD *)v14);
LABEL_12:
          v15 = a4;
        }
        v16 = *(_DWORD *)(v14 + 4);
        if ( v16 >= 0 || v15 >= 2 )
        {
          v20 = a3 + (v16 & 0x7FFFFFFF);
          if ( v20 + 16 > (unsigned int)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1) )
          {
            v18 = v23;
          }
          else
          {
            v18 = a11(v20, *a5, *a6, *a7, a8, a9, a10, a12);
            v23 = v18;
          }
        }
        else
        {
          v17 = a3 + (v16 & 0x7FFFFFFF);
          if ( v17 + 16 > (unsigned int)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1) )
          {
            v19 = v23 == 1;
            goto LABEL_22;
          }
          v18 = sub_4E7BB0(a1, v17, a3, a4 + 1, a5, a6, a7, a8, a9, a10, a11, a12);
          v23 = v18;
        }
        v19 = v18 == 1;
LABEL_22:
        if ( v19 )
          return 1;
        v14 += 8;
        if ( ++v24 >= v22 )
          goto LABEL_24;
      }
      *a6 = *(_DWORD *)v14;
      a9 = sub_4EA3F0(a1, a3, (_DWORD *)v14);
      goto LABEL_12;
    }
LABEL_24:
    result = 0;
  }
  return result;
}


/**
 * parse_resource_name
 * 
 * @param PE* pe
 * @param uint8_t* rsrc_data
 * @param PIMAGE_RESOURCE_DIRECTORY_ENTRY entry
 * @return null or rsrc_str_ptr
 */
_BYTE *__cdecl sub_4EA3F0(int a1, int a2, _DWORD *a3)
{
  _BYTE *v3; // edx@2
  unsigned int v4; // esi@2
  _BYTE *result; // eax@3

  if ( *a3 >= 0 )
  {
    result = 0;
  }
  else
  {
    v3 = (_BYTE *)(a2 + (*a3 & 0x7FFFFFFF));
    v4 = *(_DWORD *)a1 + *(_DWORD *)(a1 + 4);
    if ( (unsigned int)(v3 + 2) <= v4 )
    {
      if ( (unsigned int)&v3[*v3 + 2] > v4 )
        v3 = 0;
      result = v3;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}


/**
 * begin_declarations;
 *
 * begin_struct / begin_struct_array
 * declare_function / declare_integer / declare_string
 * end_struct / end_struct_array
 */
int __cdecl sub_4EA440(int a1)
{
  int v1; // esi@1
  int result; // eax@1
  int v3; // edi@88
  int v4; // eax@92
  const char *v5; // ecx@92
  bool v6; // cf@93
  unsigned __int8 v7; // dl@95
  int v8; // eax@97
  int v9; // edi@101
  int v10; // eax@105
  bool v11; // cf@106
  unsigned __int8 v12; // dl@108
  int v13; // eax@110
  int v14; // edi@115
  int v15; // eax@119
  bool v16; // cf@120
  unsigned __int8 v17; // dl@122
  int v18; // eax@124
  int v19; // edi@129
  int v20; // eax@133
  bool v21; // cf@134
  unsigned __int8 v22; // dl@136
  int v23; // eax@138
  int v24; // edi@145
  int v25; // eax@153
  bool v26; // cf@154
  unsigned __int8 v27; // dl@156
  int v28; // eax@158
  int v29; // edi@163
  int v30; // eax@170
  bool v31; // cf@171
  unsigned __int8 v32; // dl@173
  int v33; // eax@175
  int v34; // edi@188
  int v35; // eax@192
  bool v36; // cf@193
  unsigned __int8 v37; // dl@195
  int v38; // eax@197
  int v39; // edi@203
  int v40; // eax@213
  bool v41; // cf@214
  unsigned __int8 v42; // dl@216
  int v43; // eax@218
  int v44; // edi@225
  int v45; // eax@235
  bool v46; // cf@236
  unsigned __int8 v47; // dl@238
  int v48; // eax@240
  int v49; // eax@247
  signed int v50; // [sp-8h] [bp-10h]@113
  int v51; // [sp+4h] [bp-4h]@144

  v1 = a1;
  result = sub_4DF770(1, "MACHINE_UNKNOWN", a1, 0);
  if ( !result )
  {
    result = sub_4DF770(1, "MACHINE_AM33", v1, 0);
    if ( !result )
    {
      result = sub_4DF770(1, "MACHINE_AMD64", v1, 0);
      if ( !result )
      {
        result = sub_4DF770(1, "MACHINE_ARM", v1, 0);
        if ( !result )
        {
          result = sub_4DF770(1, "MACHINE_ARMNT", v1, 0);
          if ( !result )
          {
            result = sub_4DF770(1, "MACHINE_ARM64", v1, 0);
            if ( !result )
            {
              result = sub_4DF770(1, "MACHINE_EBC", v1, 0);
              if ( !result )
              {
                result = sub_4DF770(1, "MACHINE_I386", v1, 0);
                if ( !result )
                {
                  result = sub_4DF770(1, "MACHINE_IA64", v1, 0);
                  if ( !result )
                  {
                    result = sub_4DF770(1, "MACHINE_M32R", v1, 0);
                    if ( !result )
                    {
                      result = sub_4DF770(1, "MACHINE_MIPS16", v1, 0);
                      if ( !result )
                      {
                        result = sub_4DF770(1, "MACHINE_MIPSFPU", v1, 0);
                        if ( !result )
                        {
                          result = sub_4DF770(1, "MACHINE_MIPSFPU16", v1, 0);
                          if ( !result )
                          {
                            result = sub_4DF770(1, "MACHINE_POWERPC", v1, 0);
                            if ( !result )
                            {
                              result = sub_4DF770(1, "MACHINE_POWERPCFP", v1, 0);
                              if ( !result )
                              {
                                result = sub_4DF770(1, "MACHINE_R4000", v1, 0);
                                if ( !result )
                                {
                                  result = sub_4DF770(1, "MACHINE_SH3", v1, 0);
                                  if ( !result )
                                  {
                                    result = sub_4DF770(1, "MACHINE_SH3DSP", v1, 0);
                                    if ( !result )
                                    {
                                      result = sub_4DF770(1, "MACHINE_SH4", v1, 0);
                                      if ( !result )
                                      {
                                        result = sub_4DF770(1, "MACHINE_SH5", v1, 0);
                                        if ( !result )
                                        {
                                          result = sub_4DF770(1, "MACHINE_THUMB", v1, 0);
                                          if ( !result )
                                          {
                                            result = sub_4DF770(1, "MACHINE_WCEMIPSV2", v1, 0);
                                            if ( !result )
                                            {
                                              result = sub_4DF770(1, "SUBSYSTEM_UNKNOWN", v1, 0);
                                              if ( !result )
                                              {
                                                result = sub_4DF770(1, "SUBSYSTEM_NATIVE", v1, 0);
                                                if ( !result )
                                                {
                                                  result = sub_4DF770(1, "SUBSYSTEM_WINDOWS_GUI", v1, 0);
                                                  if ( !result )
                                                  {
                                                    result = sub_4DF770(1, "SUBSYSTEM_WINDOWS_CUI", v1, 0);
                                                    if ( !result )
                                                    {
                                                      result = sub_4DF770(1, "SUBSYSTEM_OS2_CUI", v1, 0);
                                                      if ( !result )
                                                      {
                                                        result = sub_4DF770(1, "SUBSYSTEM_POSIX_CUI", v1, 0);
                                                        if ( !result )
                                                        {
                                                          result = sub_4DF770(1, "SUBSYSTEM_NATIVE_WINDOWS", v1, 0);
                                                          if ( !result )
                                                          {
                                                            result = sub_4DF770(1, "RELOCS_STRIPPED", v1, 0);
                                                            if ( !result )
                                                            {
                                                              result = sub_4DF770(1, "EXECUTABLE_IMAGE", v1, 0);
                                                              if ( !result )
                                                              {
                                                                result = sub_4DF770(1, "LINE_NUMS_STRIPPED", v1, 0);
                                                                if ( !result )
                                                                {
                                                                  result = sub_4DF770(1, "LOCAL_SYMS_STRIPPED", v1, 0);
                                                                  if ( !result )
                                                                  {
                                                                    result = sub_4DF770(1, "AGGRESIVE_WS_TRIM", v1, 0);
                                                                    if ( !result )
                                                                    {
                                                                      result = sub_4DF770(
                                                                                 1,
                                                                                 "LARGE_ADDRESS_AWARE",
                                                                                 v1,
                                                                                 0);
                                                                      if ( !result )
                                                                      {
                                                                        result = sub_4DF770(
                                                                                   1,
                                                                                   "BYTES_REVERSED_LO",
                                                                                   v1,
                                                                                   0);
                                                                        if ( !result )
                                                                        {
                                                                          result = sub_4DF770(1, "MACHINE_32BIT", v1, 0);
                                                                          if ( !result )
                                                                          {
                                                                            result = sub_4DF770(
                                                                                       1,
                                                                                       "DEBUG_STRIPPED",
                                                                                       v1,
                                                                                       0);
                                                                            if ( !result )
                                                                            {
                                                                              result = sub_4DF770(
                                                                                         1,
                                                                                         "REMOVABLE_RUN_FROM_SWAP",
                                                                                         v1,
                                                                                         0);
                                                                              if ( !result )
                                                                              {
                                                                                result = sub_4DF770(
                                                                                           1,
                                                                                           "NET_RUN_FROM_SWAP",
                                                                                           v1,
                                                                                           0);
                                                                                if ( !result )
                                                                                {
                                                                                  result = sub_4DF770(
                                                                                             1,
                                                                                             "SYSTEM",
                                                                                             v1,
                                                                                             0);
                                                                                  if ( !result )
                                                                                  {
                                                                                    result = sub_4DF770(
                                                                                               1,
                                                                                               &off_6589AC,
                                                                                               v1,
                                                                                               0);
                                                                                    if ( !result )
                                                                                    {
                                                                                      result = sub_4DF770(
                                                                                                 1,
                                                                                                 "UP_SYSTEM_ONLY",
                                                                                                 v1,
                                                                                                 0);
                                                                                      if ( !result )
                                                                                      {
                                                                                        result = sub_4DF770(
                                                                                                   1,
                                                                                                   "BYTES_REVERSED_HI",
                                                                                                   v1,
                                                                                                   0);
                                                                                        if ( !result )
                                                                                        {
                                                                                          result = sub_4DF770(
                                                                                                     1,
                                                                                                     "SECTION_CNT_CODE",
                                                                                                     v1,
                                                                                                     0);
                                                                                          if ( !result )
                                                                                          {
                                                                                            result = sub_4DF770(1, "SECTION_CNT_INITIALIZED_DATA", v1, 0);
                                                                                            if ( !result )
                                                                                            {
                                                                                              result = sub_4DF770(1, "SECTION_CNT_UNINITIALIZED_DATA", v1, 0);
                                                                                              if ( !result )
                                                                                              {
                                                                                                result = sub_4DF770(1, "SECTION_GPREL", v1, 0);
                                                                                                if ( !result )
                                                                                                {
                                                                                                  result = sub_4DF770(1, "SECTION_MEM_16BIT", v1, 0);
                                                                                                  if ( !result )
                                                                                                  {
                                                                                                    result = sub_4DF770(1, "SECTION_LNK_NRELOC_OVFL", v1, 0);
                                                                                                    if ( !result )
                                                                                                    {
                                                                                                      result = sub_4DF770(1, "SECTION_MEM_DISCARDABLE", v1, 0);
                                                                                                      if ( !result )
                                                                                                      {
                                                                                                        result = sub_4DF770(1, "SECTION_MEM_NOT_CACHED", v1, 0);
                                                                                                        if ( !result )
                                                                                                        {
                                                                                                          result = sub_4DF770(1, "SECTION_MEM_NOT_PAGED", v1, 0);
                                                                                                          if ( !result )
                                                                                                          {
                                                                                                            result = sub_4DF770(1, "SECTION_MEM_SHARED", v1, 0);
                                                                                                            if ( !result )
                                                                                                            {
                                                                                                              result = sub_4DF770(1, "SECTION_MEM_EXECUTE", v1, 0);
                                                                                                              if ( !result )
                                                                                                              {
                                                                                                                result = sub_4DF770(1, "SECTION_MEM_READ", v1, 0);
                                                                                                                if ( !result )
                                                                                                                {
                                                                                                                  result = sub_4DF770(1, "SECTION_MEM_WRITE", v1, 0);
                                                                                                                  if ( !result )
                                                                                                                  {
                                                                                                                    result = sub_4DF770(1, "RESOURCE_TYPE_CURSOR", v1, 0);
                                                                                                                    if ( !result )
                                                                                                                    {
                                                                                                                      result = sub_4DF770(1, "RESOURCE_TYPE_BITMAP", v1, 0);
                                                                                                                      if ( !result )
                                                                                                                      {
                                                                                                                        result = sub_4DF770(1, "RESOURCE_TYPE_ICON", v1, 0);
                                                                                                                        if ( !result )
                                                                                                                        {
                                                                                                                          result = sub_4DF770(1, "RESOURCE_TYPE_MENU", v1, 0);
                                                                                                                          if ( !result )
                                                                                                                          {
                                                                                                                            result = sub_4DF770(1, "RESOURCE_TYPE_DIALOG", v1, 0);
                                                                                                                            if ( !result )
                                                                                                                            {
                                                                                                                              result = sub_4DF770(1, "RESOURCE_TYPE_STRING", v1, 0);
                                                                                                                              if ( !result )
                                                                                                                              {
                                                                                                                                result = sub_4DF770(1, "RESOURCE_TYPE_FONTDIR", v1, 0);
                                                                                                                                if ( !result )
                                                                                                                                {
                                                                                                                                  result = sub_4DF770(1, "RESOURCE_TYPE_FONT", v1, 0);
                                                                                                                                  if ( !result )
                                                                                                                                  {
                                                                                                                                    result = sub_4DF770(1, "RESOURCE_TYPE_ACCELERATOR", v1, 0);
                                                                                                                                    if ( !result )
                                                                                                                                    {
                                                                                                                                      result = sub_4DF770(1, "RESOURCE_TYPE_RCDATA", v1, 0);
                                                                                                                                      if ( !result )
                                                                                                                                      {
                                                                                                                                        result = sub_4DF770(1, "RESOURCE_TYPE_MESSAGETABLE", v1, 0);
                                                                                                                                        if ( !result )
                                                                                                                                        {
                                                                                                                                          result = sub_4DF770(1, "RESOURCE_TYPE_GROUP_CURSOR", v1, 0);
                                                                                                                                          if ( !result )
                                                                                                                                          {
                                                                                                                                            result = sub_4DF770(1, "RESOURCE_TYPE_GROUP_ICON", v1, 0);
                                                                                                                                            if ( !result )
                                                                                                                                            {
                                                                                                                                              result = sub_4DF770(1, "RESOURCE_TYPE_VERSION", v1, 0);
                                                                                                                                              if ( !result )
                                                                                                                                              {
                                                                                                                                                result = sub_4DF770(1, "RESOURCE_TYPE_DLGINCLUDE", v1, 0);
                                                                                                                                                if ( !result )
                                                                                                                                                {
                                                                                                                                                  result = sub_4DF770(1, "RESOURCE_TYPE_PLUGPLAY", v1, 0);
                                                                                                                                                  if ( !result )
                                                                                                                                                  {
                                                                                                                                                    result = sub_4DF770(1, "RESOURCE_TYPE_VXD", v1, 0);
                                                                                                                                                    if ( !result )
                                                                                                                                                    {
                                                                                                                                                      result = sub_4DF770(1, "RESOURCE_TYPE_ANICURSOR", v1, 0);
                                                                                                                                                      if ( !result )
                                                                                                                                                      {
                                                                                                                                                        result = sub_4DF770(1, "RESOURCE_TYPE_ANIICON", v1, 0);
                                                                                                                                                        if ( !result )
                                                                                                                                                        {
                                                                                                                                                          result = sub_4DF770(1, "RESOURCE_TYPE_HTML", v1, 0);
                                                                                                                                                          if ( !result )
                                                                                                                                                          {
                                                                                                                                                            result = sub_4DF770(1, "RESOURCE_TYPE_MANIFEST", v1, 0);
                                                                                                                                                            if ( !result )
                                                                                                                                                            {
                                                                                                                                                              result = sub_4DF770(1, "machine", v1, 0);
                                                                                                                                                              if ( !result )
                                                                                                                                                              {
                                                                                                                                                                result = sub_4DF770(1, "number_of_sections", v1, 0);
                                                                                                                                                                if ( !result )
                                                                                                                                                                {
                                                                                                                                                                  result = sub_4DF770(1, "timestamp", v1, 0);
                                                                                                                                                                  if ( !result )
                                                                                                                                                                  {
                                                                                                                                                                    result = sub_4DF770(1, "characteristics", v1, 0);
                                                                                                                                                                    if ( !result )
                                                                                                                                                                    {
                                                                                                                                                                      result = sub_4DF770(1, "entry_point", v1, 0);
                                                                                                                                                                      if ( !result )
                                                                                                                                                                      {
                                                                                                                                                                        result = sub_4DF770(1, "image_base", v1, 0);
                                                                                                                                                                        if ( !result )
                                                                                                                                                                        {
                                                                                                                                                                          result = sub_4DF770(7, "version_info", v1, (int)&a1);
                                                                                                                                                                          if ( !result )
                                                                                                                                                                          {
                                                                                                                                                                            result = sub_4DF770(2, "version_info", a1, 0);
                                                                                                                                                                            if ( !result )
                                                                                                                                                                            {
                                                                                                                                                                              result = sub_4DF770(3, "linker_version", v1, (int)&a1);
                                                                                                                                                                              if ( !result )
                                                                                                                                                                              {
                                                                                                                                                                                v3 = a1;
                                                                                                                                                                                result = sub_4DF770(1, "major", a1, 0);
                                                                                                                                                                                if ( !result )
                                                                                                                                                                                {
                                                                                                                                                                                  result = sub_4DF770(1, "minor", v3, 0);
                                                                                                                                                                                  if ( !result )
                                                                                                                                                                                  {
                                                                                                                                                                                    if ( *(_BYTE *)v3 != 3 )
                                                                                                                                                                                      _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6B2u);
                                                                                                                                                                                    v4 = *(_DWORD *)(v3 + 4);
                                                                                                                                                                                    v5 = "linker_version";
                                                                                                                                                                                    while ( 1 )
                                                                                                                                                                                    {
                                                                                                                                                                                      v6 = *(_BYTE *)v4 < (const unsigned __int8)*v5;
                                                                                                                                                                                      if ( *(_BYTE *)v4 != *v5 )
                                                                                                                                                                                        break;
                                                                                                                                                                                      if ( !*(_BYTE *)v4 )
                                                                                                                                                                                        goto LABEL_97;
                                                                                                                                                                                      v7 = *(_BYTE *)(v4 + 1);
                                                                                                                                                                                      v6 = v7 < v5[1];
                                                                                                                                                                                      if ( v7 != v5[1] )
                                                                                                                                                                                        break;
                                                                                                                                                                                      v4 += 2;
                                                                                                                                                                                      v5 += 2;
                                                                                                                                                                                      if ( !v7 )
                                                                                                                                                                                      {
LABEL_97:
                                                                                                                                                                                        v8 = 0;
                                                                                                                                                                                        goto LABEL_99;
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                    v8 = -v6 | 1;
LABEL_99:
                                                                                                                                                                                    if ( v8 )
                                                                                                                                                                                    {
                                                                                                                                                                                      v50 = 1714;
                                                                                                                                                                                      goto LABEL_247;
                                                                                                                                                                                    }
                                                                                                                                                                                    result = sub_4DF770(3, "os_version", v1, (int)&a1);
                                                                                                                                                                                    if ( !result )
                                                                                                                                                                                    {
                                                                                                                                                                                      v9 = a1;
                                                                                                                                                                                      result = sub_4DF770(1, "major", a1, 0);
                                                                                                                                                                                      if ( !result )
                                                                                                                                                                                      {
                                                                                                                                                                                        result = sub_4DF770(1, "minor", v9, 0);
                                                                                                                                                                                        if ( !result )
                                                                                                                                                                                        {
                                                                                                                                                                                          if ( *(_BYTE *)v9 != 3 )
                                                                                                                                                                                            _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6B7u);
                                                                                                                                                                                          v10 = *(_DWORD *)(v9 + 4);
                                                                                                                                                                                          v5 = "os_version";
                                                                                                                                                                                          while ( 1 )
                                                                                                                                                                                          {
                                                                                                                                                                                            v11 = *(_BYTE *)v10 < (const unsigned __int8)*v5;
                                                                                                                                                                                            if ( *(_BYTE *)v10 != *v5 )
                                                                                                                                                                                              break;
                                                                                                                                                                                            if ( !*(_BYTE *)v10 )
                                                                                                                                                                                              goto LABEL_110;
                                                                                                                                                                                            v12 = *(_BYTE *)(v10 + 1);
                                                                                                                                                                                            v11 = v12 < v5[1];
                                                                                                                                                                                            if ( v12 != v5[1] )
                                                                                                                                                                                              break;
                                                                                                                                                                                            v10 += 2;
                                                                                                                                                                                            v5 += 2;
                                                                                                                                                                                            if ( !v12 )
                                                                                                                                                                                            {
LABEL_110:
                                                                                                                                                                                              v13 = 0;
                                                                                                                                                                                              goto LABEL_112;
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                          v13 = -v11 | 1;
LABEL_112:
                                                                                                                                                                                          if ( v13 )
                                                                                                                                                                                          {
                                                                                                                                                                                            v50 = 1719;
LABEL_247:
                                                                                                                                                                                            v49 = sub_5A39F0(v5);
                                                                                                                                                                                            fprintf((FILE *)(v49 + 64), "%s:%d: unbalanced begin_struct/end_struct\n", "..\\..\\libyara\\modules\\pe.c", v50);
                                                                                                                                                                                            abort();
                                                                                                                                                                                          }
                                                                                                                                                                                          result = sub_4DF770(3, "image_version", v1, (int)&a1);
                                                                                                                                                                                          if ( !result )
                                                                                                                                                                                          {
                                                                                                                                                                                            v14 = a1;
                                                                                                                                                                                            result = sub_4DF770(1, "major", a1, 0);
                                                                                                                                                                                            if ( !result )
                                                                                                                                                                                            {
                                                                                                                                                                                              result = sub_4DF770(1, "minor", v14, 0);
                                                                                                                                                                                              if ( !result )
                                                                                                                                                                                              {
                                                                                                                                                                                                if ( *(_BYTE *)v14 != 3 )
                                                                                                                                                                                                  _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6BCu);
                                                                                                                                                                                                v15 = *(_DWORD *)(v14 + 4);
                                                                                                                                                                                                v5 = "image_version";
                                                                                                                                                                                                while ( 1 )
                                                                                                                                                                                                {
                                                                                                                                                                                                  v16 = *(_BYTE *)v15 < (const unsigned __int8)*v5;
                                                                                                                                                                                                  if ( *(_BYTE *)v15 != *v5 )
                                                                                                                                                                                                    break;
                                                                                                                                                                                                  if ( !*(_BYTE *)v15 )
                                                                                                                                                                                                    goto LABEL_124;
                                                                                                                                                                                                  v17 = *(_BYTE *)(v15 + 1);
                                                                                                                                                                                                  v16 = v17 < v5[1];
                                                                                                                                                                                                  if ( v17 != v5[1] )
                                                                                                                                                                                                    break;
                                                                                                                                                                                                  v15 += 2;
                                                                                                                                                                                                  v5 += 2;
                                                                                                                                                                                                  if ( !v17 )
                                                                                                                                                                                                  {
LABEL_124:
                                                                                                                                                                                                    v18 = 0;
                                                                                                                                                                                                    goto LABEL_126;
                                                                                                                                                                                                  }
                                                                                                                                                                                                }
                                                                                                                                                                                                v18 = -v16 | 1;
LABEL_126:
                                                                                                                                                                                                if ( v18 )
                                                                                                                                                                                                {
                                                                                                                                                                                                  v50 = 1724;
                                                                                                                                                                                                  goto LABEL_247;
                                                                                                                                                                                                }
                                                                                                                                                                                                result = sub_4DF770(3, "subsystem_version", v1, (int)&a1);
                                                                                                                                                                                                if ( !result )
                                                                                                                                                                                                {
                                                                                                                                                                                                  v19 = a1;
                                                                                                                                                                                                  result = sub_4DF770(1, "major", a1, 0);
                                                                                                                                                                                                  if ( !result )
                                                                                                                                                                                                  {
                                                                                                                                                                                                    result = sub_4DF770(1, "minor", v19, 0);
                                                                                                                                                                                                    if ( !result )
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if ( *(_BYTE *)v19 != 3 )
                                                                                                                                                                                                        _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6C1u);
                                                                                                                                                                                                      v20 = *(_DWORD *)(v19 + 4);
                                                                                                                                                                                                      v5 = "subsystem_version";
                                                                                                                                                                                                      while ( 1 )
                                                                                                                                                                                                      {
                                                                                                                                                                                                        v21 = *(_BYTE *)v20 < (const unsigned __int8)*v5;
                                                                                                                                                                                                        if ( *(_BYTE *)v20 != *v5 )
                                                                                                                                                                                                          break;
                                                                                                                                                                                                        if ( !*(_BYTE *)v20 )
                                                                                                                                                                                                          goto LABEL_138;
                                                                                                                                                                                                        v22 = *(_BYTE *)(v20 + 1);
                                                                                                                                                                                                        v21 = v22 < v5[1];
                                                                                                                                                                                                        if ( v22 != v5[1] )
                                                                                                                                                                                                          break;
                                                                                                                                                                                                        v20 += 2;
                                                                                                                                                                                                        v5 += 2;
                                                                                                                                                                                                        if ( !v22 )
                                                                                                                                                                                                        {
LABEL_138:
                                                                                                                                                                                                          v23 = 0;
                                                                                                                                                                                                          goto LABEL_140;
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                      v23 = -v21 | 1;
LABEL_140:
                                                                                                                                                                                                      if ( v23 )
                                                                                                                                                                                                      {
                                                                                                                                                                                                        v50 = 1729;
                                                                                                                                                                                                        goto LABEL_247;
                                                                                                                                                                                                      }
                                                                                                                                                                                                      result = sub_4DF770(1, "subsystem", v1, 0);
                                                                                                                                                                                                      if ( !result )
                                                                                                                                                                                                      {
                                                                                                                                                                                                        result = sub_4DF770(4, "sections", v1, (int)&a1);
                                                                                                                                                                                                        if ( !result )
                                                                                                                                                                                                        {
                                                                                                                                                                                                          result = sub_4DF770(3, "sections", a1, (int)&v51);
                                                                                                                                                                                                          if ( !result )
                                                                                                                                                                                                          {
                                                                                                                                                                                                            v24 = v51;
                                                                                                                                                                                                            result = sub_4DF770(2, "name", v51, 0);
                                                                                                                                                                                                            if ( !result )
                                                                                                                                                                                                            {
                                                                                                                                                                                                              result = sub_4DF770(1, "characteristics", v24, 0);
                                                                                                                                                                                                              if ( !result )
                                                                                                                                                                                                              {
                                                                                                                                                                                                                result = sub_4DF770(1, "virtual_address", v24, 0);
                                                                                                                                                                                                                if ( !result )
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  result = sub_4DF770(1, "virtual_size", v24, 0);
                                                                                                                                                                                                                  if ( !result )
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    result = sub_4DF770(1, "raw_data_offset", v24, 0);
                                                                                                                                                                                                                    if ( !result )
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      result = sub_4DF770(1, "raw_data_size", v24, 0);
                                                                                                                                                                                                                      if ( !result )
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        if ( *(_BYTE *)v24 != 3 )
                                                                                                                                                                                                                          _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6CCu);
                                                                                                                                                                                                                        v25 = *(_DWORD *)(v24 + 4);
                                                                                                                                                                                                                        v5 = "sections";
                                                                                                                                                                                                                        while ( 1 )
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          v26 = *(_BYTE *)v25 < (const unsigned __int8)*v5;
                                                                                                                                                                                                                          if ( *(_BYTE *)v25 != *v5 )
                                                                                                                                                                                                                            break;
                                                                                                                                                                                                                          if ( !*(_BYTE *)v25 )
                                                                                                                                                                                                                            goto LABEL_158;
                                                                                                                                                                                                                          v27 = *(_BYTE *)(v25 + 1);
                                                                                                                                                                                                                          v26 = v27 < v5[1];
                                                                                                                                                                                                                          if ( v27 != v5[1] )
                                                                                                                                                                                                                            break;
                                                                                                                                                                                                                          v25 += 2;
                                                                                                                                                                                                                          v5 += 2;
                                                                                                                                                                                                                          if ( !v27 )
                                                                                                                                                                                                                          {
LABEL_158:
                                                                                                                                                                                                                            v28 = 0;
                                                                                                                                                                                                                            goto LABEL_160;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        v28 = -v26 | 1;
LABEL_160:
                                                                                                                                                                                                                        if ( v28 )
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          v50 = 1740;
                                                                                                                                                                                                                          goto LABEL_247;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        result = sub_4DF770(3, "rich_signature", v1, (int)&a1);
                                                                                                                                                                                                                        if ( !result )
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          v29 = a1;
                                                                                                                                                                                                                          result = sub_4DF770(1, "offset", a1, 0);
                                                                                                                                                                                                                          if ( !result )
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                            result = sub_4DF770(1, "length", v29, 0);
                                                                                                                                                                                                                            if ( !result )
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              result = sub_4DF770(1, &off_658DF8, v29, 0);
                                                                                                                                                                                                                              if ( !result )
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                result = sub_4DF770(2, "raw_data", v29, 0);
                                                                                                                                                                                                                                if ( !result )
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  result = sub_4DF770(2, "clear_data", v29, 0);
                                                                                                                                                                                                                                  if ( !result )
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                    if ( *(_BYTE *)v29 != 3 )
                                                                                                                                                                                                                                      _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6D4u);
                                                                                                                                                                                                                                    v30 = *(_DWORD *)(v29 + 4);
                                                                                                                                                                                                                                    v5 = "rich_signature";
                                                                                                                                                                                                                                    while ( 1 )
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      v31 = *(_BYTE *)v30 < (const unsigned __int8)*v5;
                                                                                                                                                                                                                                      if ( *(_BYTE *)v30 != *v5 )
                                                                                                                                                                                                                                        break;
                                                                                                                                                                                                                                      if ( !*(_BYTE *)v30 )
                                                                                                                                                                                                                                        goto LABEL_175;
                                                                                                                                                                                                                                      v32 = *(_BYTE *)(v30 + 1);
                                                                                                                                                                                                                                      v31 = v32 < v5[1];
                                                                                                                                                                                                                                      if ( v32 != v5[1] )
                                                                                                                                                                                                                                        break;
                                                                                                                                                                                                                                      v30 += 2;
                                                                                                                                                                                                                                      v5 += 2;
                                                                                                                                                                                                                                      if ( !v32 )
                                                                                                                                                                                                                                      {
LABEL_175:
                                                                                                                                                                                                                                        v33 = 0;
                                                                                                                                                                                                                                        goto LABEL_177;
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                    v33 = -v31 | 1;
LABEL_177:
                                                                                                                                                                                                                                    if ( v33 )
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      v50 = 1748;
                                                                                                                                                                                                                                      goto LABEL_247;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                    result = sub_4DFDD0("imphash", (int)&byte_6A8FAF, (int)"s", (int)&sub_4E7F50, v1, (int)&a1);
                                                                                                                                                                                                                                    if ( !result )
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      result = sub_4DFDD0("section_index", (int)"s", (int)"i", (int)sub_4ED0E0, v1, (int)&a1);
                                                                                                                                                                                                                                      if ( !result )
                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                        result = sub_4DFDD0("section_index", (int)"i", (int)"i", (int)sub_4ECF50, v1, (int)&a1);
                                                                                                                                                                                                                                        if ( !result )
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          result = sub_4DFDD0("exports", (int)"s", (int)"i", (int)sub_4E7D40, v1, (int)&a1);
                                                                                                                                                                                                                                          if ( !result )
                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                            result = sub_4DFDD0("imports", (int)dword_6B5720, (int)"i", (int)sub_4E8230, v1, (int)&a1);
                                                                                                                                                                                                                                            if ( !result )
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              result = sub_4DFDD0("locale", (int)"i", (int)"i", (int)sub_4E8490, v1, (int)&a1);
                                                                                                                                                                                                                                              if ( !result )
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                result = sub_4DFDD0("language", (int)"i", (int)"i", (int)sub_4E8340, v1, (int)&a1);
                                                                                                                                                                                                                                                if ( !result )
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  result = sub_4DF770(1, "resource_timestamp", v1, 0);
                                                                                                                                                                                                                                                  if ( !result )
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    result = sub_4DF770(3, "resource_version", v1, (int)&a1);
                                                                                                                                                                                                                                                    if ( !result )
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      v34 = a1;
                                                                                                                                                                                                                                                      result = sub_4DF770(1, "major", a1, 0);
                                                                                                                                                                                                                                                      if ( !result )
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        result = sub_4DF770(1, "minor", v34, 0);
                                                                                                                                                                                                                                                        if ( !result )
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if ( *(_BYTE *)v34 != 3 )
                                                                                                                                                                                                                                                            _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6E5u);
                                                                                                                                                                                                                                                          v35 = *(_DWORD *)(v34 + 4);
                                                                                                                                                                                                                                                          v5 = "resource_version";
                                                                                                                                                                                                                                                          while ( 1 )
                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                            v36 = *(_BYTE *)v35 < (const unsigned __int8)*v5;
                                                                                                                                                                                                                                                            if ( *(_BYTE *)v35 != *v5 )
                                                                                                                                                                                                                                                              break;
                                                                                                                                                                                                                                                            if ( !*(_BYTE *)v35 )
                                                                                                                                                                                                                                                              goto LABEL_197;
                                                                                                                                                                                                                                                            v37 = *(_BYTE *)(v35 + 1);
                                                                                                                                                                                                                                                            v36 = v37 < v5[1];
                                                                                                                                                                                                                                                            if ( v37 != v5[1] )
                                                                                                                                                                                                                                                              break;
                                                                                                                                                                                                                                                            v35 += 2;
                                                                                                                                                                                                                                                            v5 += 2;
                                                                                                                                                                                                                                                            if ( !v37 )
                                                                                                                                                                                                                                                            {
LABEL_197:
                                                                                                                                                                                                                                                              v38 = 0;
                                                                                                                                                                                                                                                              goto LABEL_199;
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                          v38 = -v36 | 1;
LABEL_199:
                                                                                                                                                                                                                                                          if ( v38 )
                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                            v50 = 1765;
                                                                                                                                                                                                                                                            goto LABEL_247;
                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                          result = sub_4DF770(4, "resources", v1, (int)&a1);
                                                                                                                                                                                                                                                          if ( !result )
                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                            result = sub_4DF770(3, "resources", a1, (int)&v51);
                                                                                                                                                                                                                                                            if ( !result )
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              v39 = v51;
                                                                                                                                                                                                                                                              result = sub_4DF770(1, "offset", v51, 0);
                                                                                                                                                                                                                                                              if ( !result )
                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                result = sub_4DF770(1, "length", v39, 0);
                                                                                                                                                                                                                                                                if ( !result )
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  result = sub_4DF770(1, "type", v39, 0);
                                                                                                                                                                                                                                                                  if ( !result )
                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                    result = sub_4DF770(1, "id", v39, 0);
                                                                                                                                                                                                                                                                    if ( !result )
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      result = sub_4DF770(1, "language", v39, 0);
                                                                                                                                                                                                                                                                      if ( !result )
                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                        result = sub_4DF770(2, "type_string", v39, 0);
                                                                                                                                                                                                                                                                        if ( !result )
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          result = sub_4DF770(2, "name_string", v39, 0);
                                                                                                                                                                                                                                                                          if ( !result )
                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                            result = sub_4DF770(2, "language_string", v39, 0);
                                                                                                                                                                                                                                                                            if ( !result )
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if ( *(_BYTE *)v39 != 3 )
                                                                                                                                                                                                                                                                                _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6EFu);
                                                                                                                                                                                                                                                                              v40 = *(_DWORD *)(v39 + 4);
                                                                                                                                                                                                                                                                              v5 = "resources";
                                                                                                                                                                                                                                                                              while ( 1 )
                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                v41 = *(_BYTE *)v40 < (const unsigned __int8)*v5;
                                                                                                                                                                                                                                                                                if ( *(_BYTE *)v40 != *v5 )
                                                                                                                                                                                                                                                                                  break;
                                                                                                                                                                                                                                                                                if ( !*(_BYTE *)v40 )
                                                                                                                                                                                                                                                                                  goto LABEL_218;
                                                                                                                                                                                                                                                                                v42 = *(_BYTE *)(v40 + 1);
                                                                                                                                                                                                                                                                                v41 = v42 < v5[1];
                                                                                                                                                                                                                                                                                if ( v42 != v5[1] )
                                                                                                                                                                                                                                                                                  break;
                                                                                                                                                                                                                                                                                v40 += 2;
                                                                                                                                                                                                                                                                                v5 += 2;
                                                                                                                                                                                                                                                                                if ( !v42 )
                                                                                                                                                                                                                                                                                {
LABEL_218:
                                                                                                                                                                                                                                                                                  v43 = 0;
                                                                                                                                                                                                                                                                                  goto LABEL_220;
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                              v43 = -v41 | 1;
LABEL_220:
                                                                                                                                                                                                                                                                              if ( v43 )
                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                v50 = 1775;
                                                                                                                                                                                                                                                                                goto LABEL_247;
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                              result = sub_4DF770(1, "number_of_resources", v1, 0);
                                                                                                                                                                                                                                                                              if ( !result )
                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                result = sub_4DF770(4, "signatures", v1, (int)&a1);
                                                                                                                                                                                                                                                                                if ( !result )
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  result = sub_4DF770(3, "signatures", a1, (int)&v51);
                                                                                                                                                                                                                                                                                  if ( !result )
                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                    v44 = v51;
                                                                                                                                                                                                                                                                                    result = sub_4DF770(2, "issuer", v51, 0);
                                                                                                                                                                                                                                                                                    if ( !result )
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      result = sub_4DF770(2, "subject", v44, 0);
                                                                                                                                                                                                                                                                                      if ( !result )
                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                        result = sub_4DF770(1, "version", v44, 0);
                                                                                                                                                                                                                                                                                        if ( !result )
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          result = sub_4DF770(2, "algorithm", v44, 0);
                                                                                                                                                                                                                                                                                          if ( !result )
                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                            result = sub_4DF770(2, "serial", v44, 0);
                                                                                                                                                                                                                                                                                            if ( !result )
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              result = sub_4DF770(1, "not_before", v44, 0);
                                                                                                                                                                                                                                                                                              if ( !result )
                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                result = sub_4DF770(1, "not_after", v44, 0);
                                                                                                                                                                                                                                                                                                if ( !result )
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  result = sub_4DFDD0("valid_on", (int)"i", (int)"i", (int)sub_4ED3C0, v44, (int)&a1);
                                                                                                                                                                                                                                                                                                  if ( !result )
                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                    if ( *(_BYTE *)v44 != 3 )
                                                                                                                                                                                                                                                                                                      _wassert(&off_655E98, L"..\\..\\libyara\\modules\\pe.c", 0x6FCu);
                                                                                                                                                                                                                                                                                                    v45 = *(_DWORD *)(v44 + 4);
                                                                                                                                                                                                                                                                                                    v5 = "signatures";
                                                                                                                                                                                                                                                                                                    while ( 1 )
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      v46 = *(_BYTE *)v45 < (const unsigned __int8)*v5;
                                                                                                                                                                                                                                                                                                      if ( *(_BYTE *)v45 != *v5 )
                                                                                                                                                                                                                                                                                                        break;
                                                                                                                                                                                                                                                                                                      if ( !*(_BYTE *)v45 )
                                                                                                                                                                                                                                                                                                        goto LABEL_240;
                                                                                                                                                                                                                                                                                                      v47 = *(_BYTE *)(v45 + 1);
                                                                                                                                                                                                                                                                                                      v46 = v47 < v5[1];
                                                                                                                                                                                                                                                                                                      if ( v47 != v5[1] )
                                                                                                                                                                                                                                                                                                        break;
                                                                                                                                                                                                                                                                                                      v45 += 2;
                                                                                                                                                                                                                                                                                                      v5 += 2;
                                                                                                                                                                                                                                                                                                      if ( !v47 )
                                                                                                                                                                                                                                                                                                      {
LABEL_240:
                                                                                                                                                                                                                                                                                                        v48 = 0;
                                                                                                                                                                                                                                                                                                        goto LABEL_242;
                                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                    v48 = -v46 | 1;
LABEL_242:
                                                                                                                                                                                                                                                                                                    if ( v48 )
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      v50 = 1788;
                                                                                                                                                                                                                                                                                                      goto LABEL_247;
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                    result = sub_4DF770(1, "number_of_signatures", v1, 0);
                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                }
                                                                                                                                                                                                              }
                                                                                                                                                                                                            }
                                                                                                                                                                                                          }
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                    }
                                                                                                                                                                                                  }
                                                                                                                                                                                                }
                                                                                                                                                                                              }
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                        }
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                  }
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                        }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


/**
 * module_load
 *
 * @param YR_SCAN_CONTEXT* context
 * @param YR_OBJECT* module_object
 * @param void* module_data
 * @param size_t module_data_size
 * @return ERROR_SUCCESS
 */
signed int __cdecl sub_4EB690(int a1, int a2)
{
  int v2; // edi@1
  int v3; // ebx@2
  int v5; // eax@7
  int v6; // [sp+Ch] [bp-4h]@7
 
  // begin_declarations;
  sub_4E0180(0, 0, a2, "MACHINE_UNKNOWN");
  sub_4E0180(467, 0, a2, "MACHINE_AM33");
  sub_4E0180(34404, 0, a2, "MACHINE_AMD64");
  sub_4E0180(448, 0, a2, "MACHINE_ARM");
  sub_4E0180(452, 0, a2, "MACHINE_ARMNT");
  sub_4E0180(43620, 0, a2, "MACHINE_ARM64");
  sub_4E0180(3772, 0, a2, "MACHINE_EBC");
  sub_4E0180(332, 0, a2, "MACHINE_I386");
  sub_4E0180(512, 0, a2, "MACHINE_IA64");
  sub_4E0180(36929, 0, a2, "MACHINE_M32R");
  sub_4E0180(614, 0, a2, "MACHINE_MIPS16");
  sub_4E0180(870, 0, a2, "MACHINE_MIPSFPU");
  sub_4E0180(1126, 0, a2, "MACHINE_MIPSFPU16");
  sub_4E0180(496, 0, a2, "MACHINE_POWERPC");
  sub_4E0180(497, 0, a2, "MACHINE_POWERPCFP");
  sub_4E0180(358, 0, a2, "MACHINE_R4000");
  sub_4E0180(418, 0, a2, "MACHINE_SH3");
  sub_4E0180(419, 0, a2, "MACHINE_SH3DSP");
  sub_4E0180(422, 0, a2, "MACHINE_SH4");
  sub_4E0180(424, 0, a2, "MACHINE_SH5");
  sub_4E0180(450, 0, a2, "MACHINE_THUMB");
  sub_4E0180(361, 0, a2, "MACHINE_WCEMIPSV2");
  sub_4E0180(0, 0, a2, "SUBSYSTEM_UNKNOWN");
  sub_4E0180(1, 0, a2, "SUBSYSTEM_NATIVE");
  sub_4E0180(2, 0, a2, "SUBSYSTEM_WINDOWS_GUI");
  sub_4E0180(3, 0, a2, "SUBSYSTEM_WINDOWS_CUI");
  sub_4E0180(5, 0, a2, "SUBSYSTEM_OS2_CUI");
  sub_4E0180(7, 0, a2, "SUBSYSTEM_POSIX_CUI");
  sub_4E0180(8, 0, a2, "SUBSYSTEM_NATIVE_WINDOWS");
  sub_4E0180(1, 0, a2, "RELOCS_STRIPPED");
  sub_4E0180(2, 0, a2, "EXECUTABLE_IMAGE");
  sub_4E0180(4, 0, a2, "LINE_NUMS_STRIPPED");
  sub_4E0180(8, 0, a2, "LOCAL_SYMS_STRIPPED");
  sub_4E0180(16, 0, a2, "AGGRESIVE_WS_TRIM");
  sub_4E0180(32, 0, a2, "LARGE_ADDRESS_AWARE");
  sub_4E0180(128, 0, a2, "BYTES_REVERSED_LO");
  sub_4E0180(256, 0, a2, "MACHINE_32BIT");
  sub_4E0180(512, 0, a2, "DEBUG_STRIPPED");
  sub_4E0180(1024, 0, a2, "REMOVABLE_RUN_FROM_SWAP");
  sub_4E0180(2048, 0, a2, "NET_RUN_FROM_SWAP");
  sub_4E0180(4096, 0, a2, "SYSTEM");
  sub_4E0180(0x2000, 0, a2, &off_6589AC); // "DLL"
  sub_4E0180(0x4000, 0, a2, "UP_SYSTEM_ONLY");
  sub_4E0180(0x8000, 0, a2, "BYTES_REVERSED_HI");
  sub_4E0180(32, 0, a2, "SECTION_CNT_CODE");
  sub_4E0180(64, 0, a2, "SECTION_CNT_INITIALIZED_DATA");
  sub_4E0180(128, 0, a2, "SECTION_CNT_UNINITIALIZED_DATA");
  sub_4E0180(0x8000, 0, a2, "SECTION_GPREL");
  sub_4E0180(0x20000, 0, a2, "SECTION_MEM_16BIT");
  sub_4E0180(&byte_1000000, 0, a2, "SECTION_LNK_NRELOC_OVFL");
  sub_4E0180(0x2000000, 0, a2, "SECTION_MEM_DISCARDABLE");
  sub_4E0180(0x4000000, 0, a2, "SECTION_MEM_NOT_CACHED");
  sub_4E0180(0x8000000, 0, a2, "SECTION_MEM_NOT_PAGED");
  sub_4E0180(0x10000000, 0, a2, "SECTION_MEM_SHARED");
  sub_4E0180(0x20000000, 0, a2, "SECTION_MEM_EXECUTE");
  sub_4E0180(0x40000000, 0, a2, "SECTION_MEM_READ");
  sub_4E0180(2147483648, 0, a2, "SECTION_MEM_WRITE");
  sub_4E0180(1, 0, a2, "RESOURCE_TYPE_CURSOR");
  sub_4E0180(2, 0, a2, "RESOURCE_TYPE_BITMAP");
  sub_4E0180(3, 0, a2, "RESOURCE_TYPE_ICON");
  sub_4E0180(4, 0, a2, "RESOURCE_TYPE_MENU");
  sub_4E0180(5, 0, a2, "RESOURCE_TYPE_DIALOG");
  sub_4E0180(6, 0, a2, "RESOURCE_TYPE_STRING");
  sub_4E0180(7, 0, a2, "RESOURCE_TYPE_FONTDIR");
  sub_4E0180(8, 0, a2, "RESOURCE_TYPE_FONT");
  sub_4E0180(9, 0, a2, "RESOURCE_TYPE_ACCELERATOR");
  sub_4E0180(10, 0, a2, "RESOURCE_TYPE_RCDATA");
  sub_4E0180(11, 0, a2, "RESOURCE_TYPE_MESSAGETABLE");
  sub_4E0180(12, 0, a2, "RESOURCE_TYPE_GROUP_CURSOR");
  sub_4E0180(14, 0, a2, "RESOURCE_TYPE_GROUP_ICON");
  sub_4E0180(16, 0, a2, "RESOURCE_TYPE_VERSION");
  sub_4E0180(17, 0, a2, "RESOURCE_TYPE_DLGINCLUDE");
  sub_4E0180(19, 0, a2, "RESOURCE_TYPE_PLUGPLAY");
  sub_4E0180(20, 0, a2, "RESOURCE_TYPE_VXD");
  sub_4E0180(21, 0, a2, "RESOURCE_TYPE_ANICURSOR");
  sub_4E0180(22, 0, a2, "RESOURCE_TYPE_ANIICON");
  sub_4E0180(23, 0, a2, "RESOURCE_TYPE_HTML");
  sub_4E0180(24, 0, a2, "RESOURCE_TYPE_MANIFEST");

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = sub_4EBE30(*(_DWORD *)v2, *(_DWORD *)(v2 + 4));
      if ( v3 )
      {
        // Ignore DLLs while scanning a process
        if ( !(*(_BYTE *)(a1 + 16) & 2) || !(*(_WORD *)(v3 + 22) & 0x2000) ) // has to do with dll declare
          break;
      }
      v2 = *(_DWORD *)(v2 + 12);
      if ( !v2 )
        return 0;
    }
    v5 = sub_4DDF80(0x18u);
    v6 = v5;
    if ( !v5 )
      return 1;
    *(_DWORD *)v5 = *(_DWORD *)v2;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v5 + 8) = v3;
    *(_DWORD *)(v5 + 12) = a2;
    *(_DWORD *)(v5 + 20) = 0;
    *(_DWORD *)(a2 + 8) = v5;
    sub_4EC470(v5, *(_DWORD *)(v2 + 8), *(_DWORD *)(a1 + 16));
    sub_4ECB00(v6, *(_DWORD *)(v2 + 8));
    sub_4EC070(v6);
    *(_DWORD *)(v6 + 16) = sub_4EC9C0(v6);
  }
  return 0;
}


/** 
 * module_unload
 *
 * @param PIMAGE_RESOURCE_DATA_ENTRY rsrc_data
 * @param YR_OBJECT* module_object
 * @return ERROR_SUCCESS
 */
int __cdecl sub_4EBCA0(int a1)
{
  int v1; // ebx@1
  int v2; // edi@2
  int v3; // eax@3
  int v4; // esi@4
  int v5; // esi@5

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 16);
    if ( v2 )
    {
      do
      {
        v3 = *(_DWORD *)(v2 + 4);
        if ( v3 )
        {
          do
          {
            v4 = *(_DWORD *)(v3 + 4);
            sub_4DDF10((LPVOID)v3);
            v3 = v4;
          }
          while ( v4 );
        }
        v5 = *(_DWORD *)(v2 + 8);
        sub_4DDF10((LPVOID)v2);
        v2 = v5;
      }
      while ( v5 );
    }
    sub_4DDF10((LPVOID)v1);
  }
  return 0;
}




/** 
 * pe_collect_resources
 *
 * @param PIMAGE_RESOURCE_DATA_ENTRY rsrc_data
 * @param int rsrc_type
 * @param int rsrc_id
 * @param int rsrc_language
 * @param uint8_t* type_string
 * @param uint8_t* name_string
 * @param uint8_t* lang_string
 * @param PE* pe
 * @return RESOURCE_CALLBACK_CONTINUE
 */
int __cdecl sub_4EBD00(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax@1
  int v9; // ST24_4@3
  int v10; // ST10_4@3
  int v12; // [sp-4h] [bp-Ch]@3

  v8 = sub_4ECE60(a8, *(_DWORD *)a1, 0);
  if ( v8 && v8 + *(_DWORD *)(a1 + 4) <= (unsigned int)(*(_DWORD *)a8 + *(_DWORD *)(a8 + 4)) )
  {
    v9 = *(_DWORD *)(a8 + 20);
    sub_4E0180(v8, 0, *(_DWORD *)(a8 + 12), "resources[%i].offset");
    v10 = *(_DWORD *)(a8 + 20);
    sub_4E0180(*(_DWORD *)(a1 + 4), 0, *(_DWORD *)(a8 + 12), "resources[%i].length");
    v12 = *(_DWORD *)(a8 + 20);
    if ( a5 )
      sub_4E01F0((void *)(a5 + 2), 2 * *(_BYTE *)a5, *(_DWORD *)(a8 + 12), (int)"resources[%i].type_string", v12);
    else
      sub_4E0180(a2, (unsigned __int64)a2 >> 32, *(_DWORD *)(a8 + 12), "resources[%i].type");
    if ( a6 )
      sub_4E01F0(
        (void *)(a6 + 2),
        2 * *(_BYTE *)a6,
        *(_DWORD *)(a8 + 12),
        (int)"resources[%i].name_string",
        *(_DWORD *)(a8 + 20));
    else
      sub_4E0180(a3, (unsigned __int64)a3 >> 32, *(_DWORD *)(a8 + 12), "resources[%i].id");
    if ( a7 )
      sub_4E01F0(
        (void *)(a7 + 2),
        2 * *(_BYTE *)a7,
        *(_DWORD *)(a8 + 12),
        (int)"resources[%i].language_string",
        *(_DWORD *)(a8 + 20));
    else
      sub_4E0180(a4, (unsigned __int64)a4 >> 32, *(_DWORD *)(a8 + 12), "resources[%i].language");
    if ( a2 == 16 )
      sub_4ECC70(a1, a8);
    ++*(_DWORD *)(a8 + 20);
  }
  return 0;
}

/**
 * pe_iterate_resources
 *
 * @param PE* pe
 * @param RESOURCE_CALLBACK_FUNC callback
 * @param void* callback_data
 * @return boolean
 */
signed int __cdecl sub_4EBF90(int a1, int a2, int a3)
{
  int v3; // eax@1
  int *v4; // eax@2
  int v5; // eax@4
  unsigned __int64 v6; // rax@5
  int v7; // ebx@5
  int v8; // esi@7
  signed int result; // eax@7
  int v10; // [sp+8h] [bp-Ch]@1
  int v11; // [sp+Ch] [bp-8h]@1
  int v12; // [sp+10h] [bp-4h]@1

  v3 = *(_DWORD *)(a1 + 8);
  v10 = -1;
  v11 = -1;
  v12 = -1;
  if ( *(_WORD *)(v3 + 24) == 523 )
    v4 = (int *)(v3 + 152);
  else
    v4 = (int *)(v3 + 136);
  v5 = *v4;
  if ( v5 && (LODWORD(v6) = sub_4ECE60(a1, v5, 0), v7 = v6, v6) && v6 < *(_DWORD *)(a1 + 4) )
  {
    v8 = v6 + *(_DWORD *)a1;
    sub_4E0180(*(_DWORD *)(v8 + 4), 0, *(_DWORD *)(a1 + 12), "resource_timestamp");
    sub_4E0180(*(_WORD *)(v8 + 8), 0, *(_DWORD *)(a1 + 12), "resource_version.major");
    sub_4E0180(*(_WORD *)(v8 + 10), 0, *(_DWORD *)(a1 + 12), "resource_version.minor");
    sub_4E7BB0(a1, v8, v7 + *(_DWORD *)a1, 0, &v10, &v11, &v12, 0, 0, 0, a2, a3);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}


/**
 * pe_parse_certificates
 *
 * @param PE* pe
 * @return null
 */
unsigned int __cdecl sub_4EC070(int a1)
{
  int v1; // eax@1
  int v2; // esi@1
  unsigned int result; // eax@2
  unsigned int v4; // ecx@4
  unsigned int v5; // edx@5
  int v6; // ebx@8
  unsigned int v7; // edx@8
  unsigned int v8; // ecx@9
  __int16 v9; // dx@11
  void *v10; // eax@15
  void *v11; // edi@15
  int v12; // eax@16
  void *v13; // eax@16
  int v14; // edi@17
  int v15; // ebx@18
  int v16; // eax@18
  int v17; // eax@18
  int v18; // ST10_4@18
  int v19; // eax@18
  int v20; // eax@18
  void *v21; // edx@18
  int *v22; // eax@18
  int *v23; // ebx@18
  int v24; // eax@18
  char *v25; // edi@19
  int v26; // eax@20
  int v27; // esi@20
  int v28; // ST10_4@27
  int v29; // eax@27
  int v30; // edx@27
  int v31; // ST10_4@27
  int v32; // eax@27
  int v33; // edx@27
  int v34; // [sp-14h] [bp-148h]@0
  int v35; // [sp-8h] [bp-13Ch]@21
  char *v36; // [sp+8h] [bp-12Ch]@19
  int v37; // [sp+Ch] [bp-128h]@18
  unsigned int v38; // [sp+10h] [bp-124h]@8
  void *v39; // [sp+14h] [bp-120h]@15
  int v40; // [sp+1Ch] [bp-118h]@1
  int v41; // [sp+20h] [bp-114h]@17
  void *v42; // [sp+24h] [bp-110h]@16
  int i; // [sp+28h] [bp-10Ch]@8
  char v44; // [sp+30h] [bp-104h]@18

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 0;
  v40 = 0;
  if ( *(_WORD *)(v1 + 24) == 523 )
    result = v1 + 168;
  else
    result = v1 + 152;
  v4 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( v4 <= v5 )
    {
      result = *(_DWORD *)(result + 4);
      if ( result <= v5 && result + v4 <= v5 )
      {
        v6 = v4 + *(_DWORD *)a1;
        v7 = result + v4 + *(_DWORD *)a1;
        v38 = v7;
        for ( i = v6; v6 + 9 <= v38; v7 = v38 )
        {
          v8 = *(_DWORD *)v6 + v6;
          if ( v8 > v7 )
            break;
          if ( !*(_DWORD *)v6 )
            break;
          v9 = *(_WORD *)(v6 + 4);
          if ( v9 != 256 && v9 != 512 )
            break;
          if ( v9 != 512 || *(_WORD *)(v6 + 6) != 2 )
          {
            v6 = v8 + (v8 & 7);
            i = v8 + (v8 & 7);
          }
          else
          {
            v10 = (void *)sub_5EED10(v6 + 8, *(_DWORD *)v6);
            v11 = v10;
            v39 = v10;
            if ( !v10 )
              break;
            v12 = sub_5EF490(v10, 0);
            v13 = (void *)sub_5EF4B0(v12, 0, 0);
            v42 = v13;
            if ( !v13 )
            {
              sub_5EE220(v11);
              break;
            }
            v14 = 0;
            v41 = 0;
            if ( sub_5EDF60(v13) > 0 )
            {
              do
              {
                v15 = sub_5EE080(v42, v14);
                v37 = v15;
                v16 = sub_5F0440(v15);
                sub_5EFFD0(v16, &v44, 0x100u);
                sub_4E01F0(&v44, strlen(&v44), *(_DWORD *)(a1 + 12), (int)"signatures[%i].issuer", v2);
                v17 = sub_5F0480(v15);
                sub_5EFFD0(v17, &v44, 0x100u);
                sub_4E01F0(&v44, strlen(&v44), *(_DWORD *)(a1 + 12), (int)"signatures[%i].subject", v2);
                v18 = *(_DWORD *)(a1 + 12);
                v19 = sub_5EEDD0(**(_DWORD **)v15);
                sub_4E0180(v19 + 1, (unsigned __int64)(v19 + 1) >> 32, v18, "signatures[%i].version");
                v20 = sub_5EF9A0(**(_DWORD **)(v15 + 4));
                v21 = (void *)sub_5EF7E0(v20);
                sub_4E01F0(v21, strlen((const char *)v21), *(_DWORD *)(a1 + 12), (int)"signatures[%i].algorithm", v2);
                v22 = (int *)sub_5F0470(v15);
                v23 = v22;
                v24 = *v22;
                if ( v24 > 0 )
                {
                  v25 = (char *)sub_4DDF80(3 * v24);
                  v36 = v25;
                  if ( v25 )
                  {
                    v26 = *v23;
                    v27 = 0;
                    if ( *v23 > 0 )
                    {
                      do
                      {
                        v35 = *(_BYTE *)(v27 + v23[2]);
                        if ( v27 >= v26 - 1 )
                          _snprintf(v25, 3u, "%02x", v35);
                        else
                          _snprintf(v25, 4u, "%02x:", v35);
                        v26 = *v23;
                        ++v27;
                        v25 += 3;
                      }
                      while ( v27 < *v23 );
                      v25 = v36;
                    }
                    v2 = v40;
                    sub_4E01F0(v25, strlen(v25), *(_DWORD *)(a1 + 12), (int)"signatures[%i].serial", v40);
                    sub_4DDF10(v25);
                  }
                }
                v28 = *(_DWORD *)(a1 + 12);
                v29 = sub_4E7A80(**(_DWORD **)(*(_DWORD *)v37 + 16));
                sub_4E0180(v29, v30, v28, "signatures[%i].not_before");
                v31 = *(_DWORD *)(a1 + 12);
                v32 = sub_4E7A80(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v37 + 16) + 4));
                sub_4E0180(v32, v33, v31, "signatures[%i].not_after");
                v40 = ++v2;
                v14 = ++v41;
              }
              while ( v41 < sub_5EDF60(v42) );
              v6 = i;
            }
            v6 += *(_DWORD *)v6 + (((_BYTE)v6 + (unsigned __int8)*(_DWORD *)v6) & 7);
            i = v6;
            sub_5EE220(v39);
            sub_5EDDC0(v42);
          }
        }
        result = sub_4E0180(v34, (unsigned __int64)v2 >> 32, *(_DWORD *)(a1 + 12), "number_of_signatures");
      }
    }
  }
  return result;
}

/**
 * pe_parse_header
 *
 * @param PE* p
 * @param size_t base_address
 * @param int flags
 * @return null 
 */
unsigned int __cdecl sub_4EC470(int a1, int a2, char a3) 
{
  __int64 v3; // ST34_8@1
  __int64 v4; // ST14_8@1
  int v5; // eax@1
  int v6; // eax@2
  int v7; // edx@2
  bool v8; // cf@3
  int v9; // eax@4
  int v10; // ecx@5
  int v11; // eax@5
  int v12; // eax@7
  int v13; // eax@7
  int v14; // eax@7
  int v15; // eax@7
  int v16; // eax@7
  int v17; // eax@7
  int v18; // eax@7
  int v19; // eax@7
  int v20; // eax@7
  int v21; // ecx@7
  int v22; // edi@7
  unsigned int result; // eax@7
  signed int v24; // [sp+8h] [bp-18h]@9
  signed int i; // [sp+Ch] [bp-14h]@9
  char v26; // [sp+10h] [bp-10h]@11

  sub_4E0180(*(_WORD *)(*(_DWORD *)(a1 + 8) + 4), 0, *(_DWORD *)(a1 + 12), "machine");
  v3 = *(_WORD *)(*(_DWORD *)(a1 + 8) + 6);
  sub_4E0180(v3, HIDWORD(v3), *(_DWORD *)(a1 + 12), "number_of_sections");
  sub_4E0180(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 8), 0, *(_DWORD *)(a1 + 12), "timestamp");
  v4 = *(_WORD *)(*(_DWORD *)(a1 + 8) + 22);
  sub_4E0180(v4, HIDWORD(v4), *(_DWORD *)(a1 + 12), "characteristics");
  v5 = *(_DWORD *)(a1 + 8);
  if ( a3 & 2 )
  {
    v6 = *(_DWORD *)(v5 + 40) + a2;
    v7 = 0;
  }
  else
  {
    v8 = *(_WORD *)(v5 + 24) < 0x20Bu;
    v6 = sub_4ECE60(a1, *(_DWORD *)(v5 + 40), 0);
  }
  sub_4E0180(v6, v7, *(_DWORD *)(a1 + 12), "entry_point");
  v9 = *(_DWORD *)(a1 + 8);
  if ( *(_WORD *)(v9 + 24) == 523 )
  {
    v10 = *(_DWORD *)(v9 + 48);
    v11 = *(_DWORD *)(v9 + 52);
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 52);
    v11 = 0;
  }
  sub_4E0180(v10, v11, *(_DWORD *)(a1 + 12), "image_base");
  v12 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v12 + 24) < 0x20Bu;
  sub_4E0180(*(_BYTE *)(v12 + 26), 0, *(_DWORD *)(a1 + 12), "linker_version.major");
  v13 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v13 + 24) < 0x20Bu;
  sub_4E0180(*(_BYTE *)(v13 + 27), 0, *(_DWORD *)(a1 + 12), "linker_version.minor");
  v14 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v14 + 24) < 0x20Bu;
  sub_4E0180(*(_WORD *)(v14 + 64), 0, *(_DWORD *)(a1 + 12), "os_version.major");
  v15 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v15 + 24) < 0x20Bu;
  sub_4E0180(*(_WORD *)(v15 + 66), 0, *(_DWORD *)(a1 + 12), "os_version.minor");
  v16 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v16 + 24) < 0x20Bu;
  sub_4E0180(*(_WORD *)(v16 + 68), 0, *(_DWORD *)(a1 + 12), "image_version.major");
  v17 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v17 + 24) < 0x20Bu;
  sub_4E0180(*(_WORD *)(v17 + 70), 0, *(_DWORD *)(a1 + 12), "image_version.minor");
  v18 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v18 + 24) < 0x20Bu;
  sub_4E0180(*(_WORD *)(v18 + 72), 0, *(_DWORD *)(a1 + 12), "subsystem_version.major");
  v19 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v19 + 24) < 0x20Bu;
  sub_4E0180(*(_WORD *)(v19 + 74), 0, *(_DWORD *)(a1 + 12), "subsystem_version.minor");
  v20 = *(_DWORD *)(a1 + 8);
  v8 = *(_WORD *)(v20 + 24) < 0x20Bu;
  sub_4E0180(*(_WORD *)(v20 + 92), 0, *(_DWORD *)(a1 + 12), "subsystem");
  sub_4EBF90(a1, sub_4EBD00, a1);
  sub_4E0180(*(_DWORD *)(a1 + 20), 0, *(_DWORD *)(a1 + 12), "number_of_resources");
  v21 = *(_DWORD *)(a1 + 8);
  v22 = *(_WORD *)(v21 + 20) + v21 + 24;
  result = *(_WORD *)(v21 + 6);
  if ( result >= 0x60 )
    result = 96;
  v24 = result;
  for ( i = 0; i < v24; ++i )
  {
    result = *(_DWORD *)a1 + *(_DWORD *)(a1 + 4);
    if ( v22 + 40 > result )
      break;
    sub_4F49D0(&v26, v22, 9);
    sub_4E01F0(&v26, strlen(&v26), *(_DWORD *)(a1 + 12), (int)"sections[%i].name", i);
    sub_4E0180(*(_DWORD *)(v22 + 36), 0, *(_DWORD *)(a1 + 12), "sections[%i].characteristics");
    sub_4E0180(*(_DWORD *)(v22 + 16), 0, *(_DWORD *)(a1 + 12), "sections[%i].raw_data_size");
    sub_4E0180(*(_DWORD *)(v22 + 20), 0, *(_DWORD *)(a1 + 12), "sections[%i].raw_data_offset");
    sub_4E0180(*(_DWORD *)(v22 + 12), 0, *(_DWORD *)(a1 + 12), "sections[%i].virtual_address");
    result = sub_4E0180(*(_DWORD *)(v22 + 8), 0, *(_DWORD *)(a1 + 12), "sections[%i].virtual_size");
    v22 += 40;
  }
  return result;
}
