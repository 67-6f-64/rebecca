
/**
 * tests.c
 * https://github.com/VirusTotal/yara/blob/master/libyara/modules/tests.c
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */


/** 
 * module_load(
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
