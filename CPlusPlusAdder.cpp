// CPlusPlusAdder.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Copyright (c) 2020 Félix An
// Licenced under the MIT Licence: https://opensource.org/licenses/MIT
// 
// CPlusPlusAdder : CS Circles Remix Problem 1 "Python Adder"

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	// Make a string variable to store the user input, ask for it, and collect it.
	string userInput;
	cout << "Please type in two integers to add, separated by a plus sign (for example, 9+10).\n";
	cin >> userInput;
	
	// Search for the location of the plus sign.
	int chrNum = 0;		// This is the position character that it is currently reading.
	int plusPos = 0;	// The position of the plus sign will be stored here once it is found.
	bool doneSearch = false;
	while ((chrNum < userInput.length()) && (doneSearch == false)) {
		if (userInput.at(chrNum) == '+') {
			plusPos = chrNum;	// Store the position of the plus sign once it's found.
			doneSearch = true;	// This makes it stop searching for the plus sign once it is found.
		}
		chrNum += 1;
	}

	// Exit the program with an error if the program cannot find the plus sign.
	if (doneSearch == false) {
		cerr << "Error: Plus sign not found!\n";
		return 1;
	}

	// Based on the position of the plus sign, try to separate the rest of the input and store it as two integers. 
	// If it can't find the numbers, exit the program with an error.
	int addend1;
	int addend2;
	try {
		addend1 = stoi(userInput.substr(0, plusPos));
	}
	catch (...) {
		cerr << "Error: Nothing before the plus sign!\n";
		return 2;
	}
	try {
		addend2 = stoi(userInput.substr(plusPos + 1, userInput.length()));
	}
	catch (...) {
		cerr << "Error: Nothing after the plus sign!\n";
		return 3;
	}

	// Output the sum of the two integers.
	cout << addend1 + addend2;
	cout << '\n';
	
	// End the program successfully.
	return 0;
}