// Write a program test-ascii.cpp that 
//asks the user to input a line of text 
//(which may possibly include spaces). 
//The program should report all characters 
//from the input line together with their ASCII 
// codes.
#include <iostream>
#include <cctype>
using namespace std;

int main() {
	string input = "Cat :3 Dog";
	cout << "Input: " << input << endl;
	cout << "" << endl;
	for(char c:input) {
		cout << c << " " << (int)c << endl;
	}
	return 0;
}
