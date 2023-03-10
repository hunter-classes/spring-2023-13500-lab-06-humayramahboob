/* In a Caesar cipher, each letter is always 
shifted by the same number of positions. What 
if we shifted each letter by a different value? 
Such a code would be much harder to break. This 
encryption strategy is known as the Vigenere cipher.

Since each letter of plaintext must be shifted 
differently, a single right-shift parameter is 
not sufficient, we need to have a sequence of 
such shifts. This sequence is determined by a 
keyword, in which each letter corresponds to 
specific shift: a shifts by 0, b shifts by 1, 
c shifts by 2, and so on. The n-th letter of 
the alphabet will shift by n − 1 to the right.

*/
#include <iostream>
#include <string>
#include <cctype>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword) {
	int keyword_i = 0;
	std::string encrypted = "";
	int keyword_ascii[keyword.length()];
	for (int i=0; i < keyword.length(); i++) {
		keyword_ascii[i] = int(keyword[i]) - 97;
	}
	for (int j=0; j<plaintext.length(); j++) {
		if(!isalpha(plaintext[j])) {
			encrypted = encrypted + plaintext[j];
		}
		else {
		encrypted = encrypted + shiftChar(plaintext[j],keyword_ascii[keyword_i % keyword.length()]);
		keyword_i++;
		}
	}
	return encrypted;
}

