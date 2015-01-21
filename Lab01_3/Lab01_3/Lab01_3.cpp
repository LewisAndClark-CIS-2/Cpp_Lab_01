// Lab01_3.cpp : Defines the entry point for the console application.
//

// Lab01_3 Definescpp : compile a cars total price

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double carPrice = 0;
	double tax = .07;
	double license = .1;
	double dealerPrep = 50;
	double destCharg = 150;
	double finderFee = 200;
	double total = 0;
	cout << "What is the price of the car? ";
	cin >> carPrice;
	total = (carPrice * tax) + (carPrice * license) + dealerPrep + destCharg + finderFee + carPrice;
	cout << endl << "After all of the extra charges your car total will be " << total;

	cin.ignore();
	cout << endl << "Press <Enter> to exit.";
	cin.ignore();
	return 0;
}

