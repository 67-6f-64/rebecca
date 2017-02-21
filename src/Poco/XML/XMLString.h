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
