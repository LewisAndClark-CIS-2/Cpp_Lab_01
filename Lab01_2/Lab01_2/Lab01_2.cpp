// Lab01_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double bill = 0;
	double tip15 = 0;
	double tip20 = 0;

	cout << "What was your bill total? ";
	cin >> bill;
	tip15 = bill * .15;
	tip20 = bill * .20;

	cout << endl << "A 15% tip is $" << tip15;
	cout << endl << "A 20% tip is $" << tip20;

	cin.ignore();
	cout << endl << "Press <Enter> to exit.";
	cin.ignore();
	return 0;
}

