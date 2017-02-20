/**
 * hex_grammar.c
 * https://github.com/VirusTotal/yara/blob/master/libyara/modules/hex_grammar.c
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */
 
 /**
  * yy_stack_print - Print the state stack from its BOTTOM up to its TOP
  *
  * @param yytype_int16 *yybottom
  * @param yytype_int16 *yytop
  */
 int __cdecl sub_4F59F0(_WORD *a1, unsigned int a2)
{
  int v2; // ecx@0
  int v3; // eax@1
  int v4; // ecx@1
  _WORD *i; // esi@1
  int v6; // ST08_4@2
  int v7; // eax@2
  int v8; // eax@3

  v3 = sub_5A39F0(v2);
  fprintf((FILE *)(v3 + 64), "Stack now");
  for ( i = a1; (unsigned int)i <= a2; ++i )
  {
    v6 = *i;
    v7 = sub_5A39F0(v4);
    fprintf((FILE *)(v7 + 64), off_65A870, v6);
  }
  v8 = sub_5A39F0(v4);
  return fprintf((FILE *)(v8 + 64), "\n");
}
