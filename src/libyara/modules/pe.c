/**
 * pe.c
 * https://github.com/VirusTotal/yara/blob/9a12a825846e1047916d03ec22f4768940dd95a0/libyara/modules/pe.c
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */
 
 
 

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
