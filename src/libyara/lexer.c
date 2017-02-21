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
 * lexer.c
 * https://github.com/VirusTotal/yara/blob/master/libyara/lexer.c
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */




/** 
 * yy_fatal_error
 *
 * @param yyconst char* msg
 * @param yyscan_t yyscanner
 */
void __thiscall __noreturn sub_4E1CF0(void *this, int a2)
{
  int v2; // eax@1

  v2 = sub_5A39F0(this);
  fprintf((FILE *)(v2 + 64), "%s\n", a2);
  exit_0(2);
}


/** 
 * yara_yyset_lineno 
 *
 * @param int _line_number line number
 * @param yyscan_t yyscanner The scanner object.
 */
int __cdecl sub_4E1C40(const char *a1, int *a2)
{
  int result; // eax@2
  _DWORD *v3; // esi@3
  int v4; // ecx@3
  int v5; // ecx@4
  void *v6; // [sp+Ch] [bp-4h]@3

  *a2 = 0;
  if ( _setjmp3(a2 + 5, 0) )
  {
    result = *a2;
  }
  else
  {
    sub_4E6F70(&v6);
    v3 = v6;
    *((_DWORD *)v6 + 19) = 1;
    *v3 = a2;
    sub_4E0510(a1, strlen(a1), v3);
    v4 = v3[5];
    if ( !v4 || (v5 = *(_DWORD *)(v4 + 4 * v3[3])) == 0 )
      sub_4E1CF0("yara_yyset_lineno called with no buffer");
    *(_DWORD *)(v5 + 32) = 1;
    sub_4F1120((int)v3, (int)a2);
    sub_4E6EA0(v3);
    result = *a2;
  }
  return result;
}

/**
 * yara_yy_scan_buffer
 *
 * @param char* base the character buffer
 * @param yy_size_t size the size in bytes of the character buffer
 * @param yyscan_t yyscanner The scanner object.
 * @return YY_BUFFER_STATE newly allocated buffer state object. 
 */
_DWORD *__cdecl sub_4E0480(int a1, unsigned int a2, int a3)
{
  _DWORD *v3; // esi@4
  _DWORD *result; // eax@5

  if ( a2 < 2 || *(_BYTE *)(a1 + a2 - 2) || *(_BYTE *)(a1 + a2 - 1) )
  {
    result = 0;
  }
  else
  {
    v3 = malloc(0x30u);
    if ( !v3 )
      sub_4E07F0(a3, "out of dynamic memory in yara_yy_scan_buffer()");
    v3[3] = a2 - 2;
    v3[1] = a1;
    v3[2] = a1;
    v3[5] = 0;
    *v3 = 0;
    v3[4] = a2 - 2;
    v3[6] = 0;
    v3[7] = 1;
    v3[10] = 0;
    v3[11] = 0;
    sub_4E0590(v3, a3);
    result = v3;
  }
  return result;
}
