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
 * grammar.h
 * https://github.com/VirusTotal/yara/blob/master/libyara/grammar.h
 *  
 * @author five (i.f-ve@ya.ru)
 * @verison (2/20/2017)
 */
  
  

/**
 * enum yytokentype
 */
006597A8 off_6597A8      dd offset aEnd          ; DATA XREF: sub_4F1120+386r
___:006597A8                                         ; sub_4F1120+4EFr ...
___:006597A8                                         ; "$end"
___:006597AC                 dd offset aError        ; "error"
___:006597B0                 dd offset aUndefined_0  ; "$undefined"
___:006597B4                 dd offset a_rule_       ; "_RULE_"
___:006597B8                 dd offset a_private_    ; "_PRIVATE_"
___:006597BC                 dd offset a_global_     ; "_GLOBAL_"
___:006597C0                 dd offset a_meta_       ; "_META_"
___:006597C4                 dd offset a_strings_    ; "_STRINGS_"
___:006597C8                 dd offset a_condition_  ; "_CONDITION_"
___:006597CC                 dd offset a_identifier_ ; "_IDENTIFIER_"
___:006597D0                 dd offset a_string_identi ; "_STRING_IDENTIFIER_"
___:006597D4                 dd offset a_string_count_ ; "_STRING_COUNT_"
___:006597D8                 dd offset a_string_offset ; "_STRING_OFFSET_"
___:006597DC                 dd offset a_string_iden_0 ; "_STRING_IDENTIFIER_WITH_WILDCARD_"
___:006597E0                 dd offset a_number_     ; "_NUMBER_"
___:006597E4                 dd offset a_double_     ; "_DOUBLE_"
...
