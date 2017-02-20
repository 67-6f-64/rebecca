/**
 * InfoCollector.cpp
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */



/**
 * 
 */
int sub_64FE50()
{
  char v1; // [sp+0h] [bp-24h]@1
  int v2; // [sp+20h] [bp-4h]@1

  sub_4066F0((int)&v1, &off_69200C);
  v2 = 0;
  dword_6FDCA4 = 0;
  dword_6FDCA8 = 0;
  sub_406420(0, 0);
  sub_405FE0((int)dword_6FDC94, (int)&v1, 0, 0xFFFFFFFF);
  v2 = -1;
  sub_406420(1, 0);
  return atexit(sub_6512A0);
}

