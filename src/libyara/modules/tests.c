
/**
 * tests.c
 * https://github.com/VirusTotal/yara/blob/master/libyara/modules/tests.c
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */


/**
 * begin_declarations;
 *
 * begin_struct / begin_struct_array
 * declare_function / declare_integer / declare_string
 * end_struct / end_struct_array
 */
int __cdecl sub_4E7490(int a1)
{
  int v1; // edi@1
  int result; // eax@1
  int v3; // esi@2
  int v4; // eax@7
  const char *v5; // ecx@7
  bool v6; // cf@8
  unsigned __int8 v7; // dl@10
  int v8; // eax@12
  int v9; // esi@16
  int v10; // eax@20
  bool v11; // cf@21
  unsigned __int8 v12; // dl@23
  int v13; // eax@25
  int v14; // esi@39
  int v15; // eax@43
  bool v16; // cf@44
  unsigned __int8 v17; // dl@46
  int v18; // eax@48
  int v19; // esi@54
  int v20; // eax@58
  bool v21; // cf@59
  unsigned __int8 v22; // dl@61
  int v23; // eax@63
  int v24; // eax@74
  signed int v25; // [sp-8h] [bp-10h]@28
  int v26; // [sp+4h] [bp-4h]@1

  v1 = a1;
  result = sub_4DF770(3, "constants", a1, (int)&v26);
  if ( !result )
  {
    v3 = v26;
    result = sub_4DF770(1, &off_655E50, v26, 0);
    if ( !result )
    {
      result = sub_4DF770(1, &off_655E54, v3, 0);
      if ( !result )
      {
        result = sub_4DF770(2, &off_655E58, v3, 0);
        if ( !result )
        {
          if ( *(_BYTE *)v3 != 3 )
            _wassert(&off_655E98, L"..\\..\\libyara\\modules\\tests.c", 0x47u);
          v4 = *(_DWORD *)(v3 + 4);
          v5 = "constants";
          while ( 1 )
          {
            v6 = *(_BYTE *)v4 < (const unsigned __int8)*v5;
            if ( *(_BYTE *)v4 != *v5 )
              break;
            if ( !*(_BYTE *)v4 )
              goto LABEL_12;
            v7 = *(_BYTE *)(v4 + 1);
            v6 = v7 < v5[1];
            if ( v7 != v5[1] )
              break;
            v4 += 2;
            v5 += 2;
            if ( !v7 )
            {
LABEL_12:
              v8 = 0;
              goto LABEL_14;
            }
          }
          v8 = -v6 | 1;
LABEL_14:
          if ( v8 )
          {
            v25 = 71;
            goto LABEL_74;
          }
          result = sub_4DF770(3, "undefined", v1, (int)&a1);
          if ( !result )
          {
            v9 = a1;
            result = sub_4DF770(1, "i", a1, 0);
            if ( !result )
            {
              result = sub_4DF770(8, "f", v9, 0);
              if ( !result )
              {
                if ( *(_BYTE *)v9 != 3 )
                  _wassert(&off_655E98, L"..\\..\\libyara\\modules\\tests.c", 0x4Cu);
                v10 = *(_DWORD *)(v9 + 4);
                v5 = "undefined";
                while ( 1 )
                {
                  v11 = *(_BYTE *)v10 < (const unsigned __int8)*v5;
                  if ( *(_BYTE *)v10 != *v5 )
                    break;
                  if ( !*(_BYTE *)v10 )
                    goto LABEL_25;
                  v12 = *(_BYTE *)(v10 + 1);
                  v11 = v12 < v5[1];
                  if ( v12 != v5[1] )
                    break;
                  v10 += 2;
                  v5 += 2;
                  if ( !v12 )
                  {
LABEL_25:
                    v13 = 0;
                    goto LABEL_27;
                  }
                }
                v13 = -v11 | 1;
LABEL_27:
                if ( v13 )
                {
                  v25 = 76;
LABEL_74:
                  v24 = sub_5A39F0(v5);
                  fprintf(
                    (FILE *)(v24 + 64),
                    "%s:%d: unbalanced begin_struct/end_struct\n",
                    "..\\..\\libyara\\modules\\tests.c",
                    v25);
                  abort();
                }
                result = sub_4DF770(4, "integer_array", v1, (int)&a1);
                if ( !result )
                {
                  result = sub_4DF770(1, "integer_array", a1, 0);
                  if ( !result )
                  {
                    result = sub_4DF770(4, "string_array", v1, (int)&a1);
                    if ( !result )
                    {
                      result = sub_4DF770(2, "string_array", a1, 0);
                      if ( !result )
                      {
                        result = sub_4DF770(7, "integer_dict", v1, (int)&a1);
                        if ( !result )
                        {
                          result = sub_4DF770(1, "integer_dict", a1, 0);
                          if ( !result )
                          {
                            result = sub_4DF770(7, "string_dict", v1, (int)&a1);
                            if ( !result )
                            {
                              result = sub_4DF770(2, "string_dict", a1, 0);
                              if ( !result )
                              {
                                result = sub_4DF770(4, "struct_array", v1, (int)&a1);
                                if ( !result )
                                {
                                  result = sub_4DF770(3, "struct_array", a1, (int)&v26);
                                  if ( !result )
                                  {
                                    v14 = v26;
                                    result = sub_4DF770(1, "i", v26, 0);
                                    if ( !result )
                                    {
                                      result = sub_4DF770(2, "s", v14, 0);
                                      if ( !result )
                                      {
                                        if ( *(_BYTE *)v14 != 3 )
                                          _wassert(&off_655E98, L"..\\..\\libyara\\modules\\tests.c", 0x57u);
                                        v15 = *(_DWORD *)(v14 + 4);
                                        v5 = "struct_array";
                                        while ( 1 )
                                        {
                                          v16 = *(_BYTE *)v15 < (const unsigned __int8)*v5;
                                          if ( *(_BYTE *)v15 != *v5 )
                                            break;
                                          if ( !*(_BYTE *)v15 )
                                            goto LABEL_48;
                                          v17 = *(_BYTE *)(v15 + 1);
                                          v16 = v17 < v5[1];
                                          if ( v17 != v5[1] )
                                            break;
                                          v15 += 2;
                                          v5 += 2;
                                          if ( !v17 )
                                          {
LABEL_48:
                                            v18 = 0;
                                            goto LABEL_50;
                                          }
                                        }
                                        v18 = -v16 | 1;
LABEL_50:
                                        if ( v18 )
                                        {
                                          v25 = 87;
                                          goto LABEL_74;
                                        }
                                        result = sub_4DF770(7, "struct_dict", v1, (int)&a1);
                                        if ( !result )
                                        {
                                          result = sub_4DF770(3, "struct_dict", a1, (int)&v26);
                                          if ( !result )
                                          {
                                            v19 = v26;
                                            result = sub_4DF770(1, "i", v26, 0);
                                            if ( !result )
                                            {
                                              result = sub_4DF770(2, "s", v19, 0);
                                              if ( !result )
                                              {
                                                if ( *(_BYTE *)v19 != 3 )
                                                  _wassert(&off_655E98, L"..\\..\\libyara\\modules\\tests.c", 0x5Cu);
                                                v20 = *(_DWORD *)(v19 + 4);
                                                v5 = "struct_dict";
                                                while ( 1 )
                                                {
                                                  v21 = *(_BYTE *)v20 < (const unsigned __int8)*v5;
                                                  if ( *(_BYTE *)v20 != *v5 )
                                                    break;
                                                  if ( !*(_BYTE *)v20 )
                                                    goto LABEL_63;
                                                  v22 = *(_BYTE *)(v20 + 1);
                                                  v21 = v22 < v5[1];
                                                  if ( v22 != v5[1] )
                                                    break;
                                                  v20 += 2;
                                                  v5 += 2;
                                                  if ( !v22 )
                                                  {
LABEL_63:
                                                    v23 = 0;
                                                    goto LABEL_65;
                                                  }
                                                }
                                                v23 = -v21 | 1;
LABEL_65:
                                                if ( v23 )
                                                {
                                                  v25 = 92;
                                                  goto LABEL_74;
                                                }
                                                result = sub_4DFDD0(
                                                           "isum",
                                                           (int)"ii",
                                                           (int)"i",
                                                           (int)sub_4E7360,
                                                           v1,
                                                           (int)&a1);
                                                if ( !result )
                                                {
                                                  result = sub_4DFDD0(
                                                             "isum",
                                                             (int)&off_655FA0,
                                                             (int)"i",
                                                             (int)sub_4E73C0,
                                                             v1,
                                                             (int)&a1);
                                                  if ( !result )
                                                  {
                                                    result = sub_4DFDD0(
                                                               "fsum",
                                                               (int)&dword_655FA4,
                                                               (int)"f",
                                                               (int)sub_4E7280,
                                                               v1,
                                                               (int)&a1);
                                                    if ( !result )
                                                    {
                                                      result = sub_4DFDD0(
                                                                 "fsum",
                                                                 (int)&off_655FB0,
                                                                 (int)"f",
                                                                 (int)sub_4E72F0,
                                                                 v1,
                                                                 (int)&a1);
                                                      if ( !result )
                                                        result = sub_4DFDD0(
                                                                   "length",
                                                                   (int)"s",
                                                                   (int)"i",
                                                                   (int)sub_4E7430,
                                                                   v1,
                                                                   (int)&a1);
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
int __cdecl sub_4E7950(int a1, int a2)
{
  char v2; // ST30_1@1
  char v4; // [sp+0h] [bp-4h]@0

  sub_4E0180(1, 0, a2, "constants.one");
  sub_4E0180(2, 0, a2, "constants.two");
  sub_4E01F0(&off_655E58, 3u, a2, (int)"constants.foo", v2);
  sub_4E0180(1, 0, a2, "struct_array[1].i");
  sub_4E0180(0, 0, a2, "integer_array[%i]");
  sub_4E0180(1, 0, a2, "integer_array[%i]");
  sub_4E0180(2, 0, a2, "integer_array[%i]");
  sub_4E01F0(&off_655E58, 3u, a2, (int)"string_array[%i]", 0);
  sub_4E01F0(&off_656028, 3u, a2, (int)"string_array[%i]", 1);
  sub_4E01F0(&off_65602C, 3u, a2, (int)"string_array[%i]", 2);
  sub_4E01F0(&off_656030, 7u, a2, (int)"string_array[%i]", 3);
  sub_4E01F0(&off_655E58, 3u, a2, (int)"string_dict[%s]", (unsigned int)&off_655E58);
  sub_4E01F0(&off_656028, 3u, a2, (int)"string_dict[\"bar\"]", v4);
  sub_4E01F0(&off_655E58, 3u, a2, (int)"struct_dict[%s].s", (unsigned int)&off_655E58);
  sub_4E0180(1, 0, a2, "struct_dict[%s].i");
  return 0;
}
