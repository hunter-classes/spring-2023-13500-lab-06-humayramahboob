// Author: Humayra Mahboob
// Instructor: Michael Zamansky
// Course: CS-135
// Date: 03/10/2023
// Assignment: LAB 6

#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main(){
	std::cout << "Enter plaintext: How are you?" << std::endl;
	std::string plaintext =  "How are you?";
	std::cout << "Enter shift: 10"<<std::endl;
	int rshift = 10;
	std::cout << "Ciphertext: " << encryptCaesar(plaintext, rshift) << std::endl;
	std::string keyword = "butter";
	std::cout <<"-----------------"<<std::endl;
	std::cout << "Enter plaintext: How are you?"<<std::endl;
	std::cout << "Enter keyword: "<<keyword<<std::endl;
	std::cout << "Ciphertext: "<< encryptVigenere(plaintext,keyword) <<std::endl;
	std::string ciphertext = encryptCaesar(plaintext, rshift);
	std::cout << "----------------"<<std::endl;
	std::cout << "Ciphertext: "<<ciphertext<<std::endl;
	std::cout << "Enter shift: 10" << std::endl; 
	std::cout << "Plaintext: "<< decryptCaesar(ciphertext,rshift)<<std::endl;
	std::cout << "----------------" <<std::endl;
	std::string ciphertext1 = encryptVigenere(plaintext,keyword);
	std::cout << "Ciphertext: "<<ciphertext1<<std::endl;
	std::cout << "Enter keyword: " <<keyword<<std::endl;
	std::cout << "Plaintext: " << decryptVigenere(ciphertext1,keyword) <<std::endl;
	
	return 0;
}
