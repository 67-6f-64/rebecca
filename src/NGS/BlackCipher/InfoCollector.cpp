/**
 * InfoCollector.cpp
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
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
