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

/**
 * 
 */
int __thiscall sub_4315A0(int this, size_t a2, char a3)
{
  size_t v4; // [sp+0h] [bp-8h]@4
  int v5; // [sp+4h] [bp-4h]@1

  v5 = this;
  if ( -1 - *(_DWORD *)(this + 16) <= a2 )
    sub_4FC42E("string too long");
  if ( a2 )
  {
    v4 = a2 + *(_DWORD *)(this + 16);
    if ( (unsigned __int8)sub_4064B0(a2 + *(_DWORD *)(this + 16), 0) )
    {
      sub_431660(*(_DWORD *)(v5 + 16), a2, a3);
      sub_406580(v4);
    }
  }
  return v5;
}

/**
 * 
 */
int __thiscall sub_405FE0(int this, int a2, unsigned int a3, unsigned int a4)
{
  int v5; // [sp+18h] [bp-10h]@11
  void *v6; // [sp+1Ch] [bp-Ch]@14
  unsigned int v7; // [sp+20h] [bp-8h]@3
  int v8; // [sp+24h] [bp-4h]@1

  v8 = this;
  if ( *(_DWORD *)(a2 + 16) < a3 )
    sub_4FC45C("invalid string position");
  v7 = *(_DWORD *)(a2 + 16) - a3;
  if ( a4 < v7 )
    v7 = a4;
  if ( this == a2 )
  {
    if ( *(_DWORD *)(this + 16) < v7 + a3 )
      sub_4FC45C("invalid string position");
    sub_406580(v7 + a3);
    sub_405F20(0, a3);
  }
  else if ( (unsigned __int8)sub_4064B0(v7, 0) )
  {
    if ( *(_DWORD *)(a2 + 20) < 0x10u )
      v5 = a2;
    else
      v5 = *(_DWORD *)a2;
    if ( *(_DWORD *)(v8 + 20) < 0x10u )
      v6 = (void *)v8;
    else
      v6 = *(void **)v8;
    if ( v7 )
      memmove_0(v6, (const void *)(a3 + v5), v7);
    sub_406580(v7);
  }
  return v8;
}
