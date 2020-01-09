// WatchThePendulum.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Copyright (c) 2020 Félix An
// Licenced under the MIT Licence: https://opensource.org/licenses/MIT
// 
// Watch the Pendulum : CS Circles Remix Problem 3 "Watch the Pendulum"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	// Collect the length
	float L;
	cout << "Input the length of the pendulum:\n";
	cin >> L;

	// Collect the initial angle
	float A;
	cout << "Input the initial angle of the pendulum in radians:\n";
	cin >> A;
	
	// Now calculate it when 0 <= T <= 9, T e Z...
	for (int T = 0; T <= 9; T++) {
		cout << to_string(L * cos(A * cos(T * sqrt(9.8 / L))) - L * cos(A)) + "\n";
	}

	// Successfully end the program
	return 0;
}