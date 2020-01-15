// CharacterMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Copyright (c) 2019 Félix An
// Licenced under the MIT Licence: https://opensource.org/licenses/MIT
// 
// Character Map : CS Circles Remix Problem 6 "Character Map"

#include <iostream>
#include <string>
using namespace std;

// Define a function to return two lines of 16 characters and their corresponding ASCII base-10 values.
string sixteenchrasciimap(int start)	// This function returns a std::string.
{
	// Make the list of 16 characters.
	string outChart = "chr: ";
	string toAdd;
	for (int toChar = start; toChar < start + 16; toChar++) {
		toAdd = (char)toChar;
		outChart += " " + toAdd + "  ";		// Add the character to the return value.
	}

	// Now make the legend with the numbers below it.
	outChart += "\nasc: ";
	for (int legend = start; legend < start + 16; legend++) {
		if (legend >= 100) {
			outChart += to_string(legend) + ' ';	// One space after if it is a 3-digit number.
		}
		else {
			outChart += to_string(legend) + "  ";   // Two spaces if it is a 2-digit number.
		}
	}
	outChart += '\n';
	return outChart;
}

// Main function.
int main(void)
{
	// Tell the user that this is a character map.
	cout << "ASCII CHARACTER MAP\n\n";
	// Repeat the 'sixteenchrasciimap' function the right number of times with the correct starting points.
	for (int curPrinting = 32; curPrinting <= 112; curPrinting += 16) {		// Go up by 16 each time in the for loop, so the chart is continuous.
		cout << sixteenchrasciimap(curPrinting);
	}
	// End the program successfully.
	return 0;
}
