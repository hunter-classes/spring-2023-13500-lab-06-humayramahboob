/* Write a program caesar.cpp with functions implementing Caesar cipher encryption:

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift);
The argument rshift is the magnitude of the right shift. 
For the sake of the lab, you may assume it to be in the range 0 ≤ rshift ≤ 25 
(although, implementing it correctly for an arbitrary integer shift is also 
possible, of course).
*/
#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

char shiftChar(char c, int rshift) {
	if (isalpha(c)) {
		char lower_char = tolower(c);
		char shifted_char = (lower_char - 'a' +rshift)% 26 +'a';
		if (isupper(c)) {
			shifted_char = toupper(shifted_char);
		}
		return shifted_char;
	}
	else {
		return c;
	}
}

std::string encryptCaesar(std::string plaintext, int rshift) {
	std::string encrypted = "";
	for (char c : plaintext) {
		encrypted = encrypted + shiftChar(c,rshift);
	}
	return encrypted;
}