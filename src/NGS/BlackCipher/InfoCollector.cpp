/** 
 *   This file is part of rebecca.
 *
 *   rebecca is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   rebecca is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with rebecca.  If not, see <http://www.gnu.org/licenses/>.
 */

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


signed int __thiscall sub_42ED00(int this, signed int a2)
{
  signed int result; // eax@8
  signed int v3; // [sp+30h] [bp-18h]@6
  int v4; // [sp+40h] [bp-8h]@1

  v4 = this;
  if ( **(_DWORD **)(this + 28)
    && **(_DWORD **)(this + 12) < **(_DWORD **)(this + 28)
    && (-1 == a2 || *(_BYTE *)(**(_DWORD **)(this + 28) - 1) == a2) )
  {
    ++**(_DWORD **)(this + 44);
    --**(_DWORD **)(this + 28);
    if ( a2 == -1 )
      v3 = 0;
    else
      v3 = a2;
    result = v3;
  }
  else if ( !*(_DWORD *)(this + 80) || -1 == a2 )
  {
    result = -1;
  }
  else if ( *(_DWORD *)(this + 64) || sub_5A3E82((unsigned __int8)a2, *(FILE **)(this + 80)) == -1 )
  {
    if ( **(_DWORD **)(v4 + 28) == v4 + 68 )
    {
      result = -1;
    }
    else
    {
      *(_BYTE *)(v4 + 68) = a2;
      sub_4302D0(v4);
      result = a2;
    }
  }
  else
  {
    result = a2;
  }
  return result;
}

/**
 * unlock or handle error on log files 
 *
 */
int __cdecl sub_5A3E82(int a1, FILE *File)
{
  int result; // eax@2
  int v3; // edi@3

  if ( File )
  {
    _lock_file((unsigned int)File);
    v3 = _ungetc_nolock(a1, File);
    _unlock_file(File);
    result = v3;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    result = -1;
  }
  return result;
}

