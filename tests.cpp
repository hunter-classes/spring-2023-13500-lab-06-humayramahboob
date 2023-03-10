#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Encrypt Caesar") {
	CHECK(encryptCaesar("Hello, World!",10) == "Rovvy, Gybvn!");
	CHECK(encryptCaesar("How are you?",10) == "Ryg kbo iye?");
}

TEST_CASE("Encrypt Vigenere") {
	CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("How are you?","butter") == "Iip tvv zin?");
}

TEST_CASE("Decrypt Caesar") {
	CHECK(decryptCaesar("Rovvy, Gybvn!",10) == "Hello, World!");
	CHECK(decryptCaesar("Ryg kbo iye?",10) == "How are you?");
}

TEST_CASE("Decrypt Vigenere"){
	CHECK(decryptVigenere("Jevpg, Wyvnd!","cake") == "Hello, World!");
	CHECK(decryptVigenere("Iip tvv zin?","butter") == "How are you?");
}
