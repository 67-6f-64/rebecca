/**
 * XMLString.h
 * poco/XML/src/XMLString.h
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */


/**
 * toXMLString
 *
 * @param  wchar_t / char XMLChar
 * @return std::wstring / std::string str
 */
int __thiscall sub_4066F0(int this, void *a2)
{
  int v3; // [sp+Ch] [bp-Ch]@1

  v3 = this;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  sub_406420(0, 0);
  if ( *(_BYTE *)a2 )
    sub_4065D0(a2, strlen((const char *)a2));
  else
    sub_4065D0(a2, 0);
  return v3;
}
