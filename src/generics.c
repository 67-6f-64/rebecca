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
 * _lock_file
 *
 * FILE* file  
 */
void __cdecl sub_5A39F6(unsigned int a1)
{
  if ( a1 < (unsigned int)&off_6E1AE0 || a1 > (unsigned int)dword_6E1D40 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  }
  else
  {
    _lock(((signed int)(a1 - (_DWORD)&off_6E1AE0) >> 5) + 16);
    *(_DWORD *)(a1 + 12) |= 0x8000u;
  }
}
