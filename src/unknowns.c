
const char *sub_460750()
{
  return "system";
}


int __stdcall sub_460760(int a1, int a2)
{
  void *v3; // [sp+Ch] [bp-4h]@1

  v3 = (void *)sub_4FC5AA(a2);
  if ( v3 )
    sub_4066F0(v3);
  else
    sub_4066F0("unknown error");
  return a1;
}


int __cdecl sub_4FC5AA(int a1)
{
  int *v1; // eax@1
  int result; // eax@4

  v1 = &dword_67D1B0;
  if ( "permission denied" )
  {
    while ( *v1 != a1 )
    {
      v1 += 2;
      if ( !v1[1] )
        goto LABEL_4;
    }
    result = v1[1];
  }
  else
  {
LABEL_4:
    result = 0;
  }
  return result;
}
