/**
 * XMLReader.cpp
 * poco/XML/src/XMLReader.cpp
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */



/**
 * const XMLString XMLReader::FEATURE_VALIDATION 
 */
int sub_64E050()
{
  char v1; // [sp+0h] [bp-24h]@1
  int v2; // [sp+20h] [bp-4h]@1

  sub_4066F0("http://xml.org/sax/features/validation");
  v2 = 0;
  dword_6FD52C = 0;
  dword_6FD530 = 0;
  sub_406420(0, 0);
  sub_405FE0(&v1, 0, -1);
  v2 = -1;
  sub_406420(1, 0);
  return atexit(sub_650B50);
}
