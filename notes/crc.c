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
 
 
// search aob to find

// module 1 crc
BlackCipher.aes+94E49 - 33 02                 	- xor eax,[edx]  // 33 02 89 45 F8

// 1st break on trace module 1 crc to get here || or at 00401002 (is one the address above the address >>)
// client crc 1
BlackCipher.aes+750A97 - 02 01                 	- add al,[ecx]

// 1st break on trace client crc 1 to get here (is one the address above the address >>)
// client crc 2
BlackCipher.aes+53E287 - 8B 00                 	- mov eax,[eax]

// client crc 3
BlackCipher.aes+141F51 - 8A 11                 - mov dl,[ecx]   // 8A 11 ?? C2 ??

// client crc 4
BlackCipher.aes+1428D3 - 8A 11                 - mov dl,[ecx]   // 8A 11 ?? C2 ??


// search aob to find
// module 1 crc
BlackCall.aes+32C39 - 33 02                 	- xor eax,[edx]  // 33 02 89 45 F8
