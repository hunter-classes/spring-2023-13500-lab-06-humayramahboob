/* Implement two decryption functions corresponding 
to the above ciphers. When decrypting ciphertext, 
ensure that the produced decrypted string is equal 
to the original plaintext
*/
#include <iostream>
#include <string>
#include <cctype>
#include "decrypt.h"

char shiftBack(char c, int rshift) {
	if (isalpha(c)) {
		char lower_char = tolower(c);
		char shifted_char = (lower_char - 'a' -rshift+26)% 26 +'a';
		if (isupper(c)) {
			shifted_char = toupper(shifted_char);
		}
		return shifted_char;
	}
	else {
		return c;
	}
}

std::string decryptCaesar(std::string ciphertext, int rshift) {
	std::string decrypted = "";
	for (int i = 0; i<ciphertext[i]; i++) {
		decrypted = decrypted + shiftBack(ciphertext[i],rshift);
	}
	return decrypted;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
	std::string decrypted = "";
	int keyword_ascii[keyword.length()];
	int keyword_i=0;
	for (int i = 0; i <keyword.length(); i++) {
		keyword_ascii[i] = int(keyword[i]) - 97;
	}
	for (int i=0; i<ciphertext.length(); i++) {
		if(!isalpha(ciphertext[i])) {
			decrypted = decrypted + ciphertext[i];
		}
		else {
			decrypted = decrypted + shiftBack(ciphertext[i],keyword_ascii[keyword_i%keyword.length()]);
			keyword_i++;
		}
	}
	return decrypted;
}

