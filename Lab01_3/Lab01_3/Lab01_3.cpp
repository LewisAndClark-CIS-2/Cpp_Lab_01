/*
Jacob Steiner
1/20/15
lab01_3

PSEUDOCODE

get baseprice from the user
declare variables
calculate the grand total
print them neatly to the user
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double basePrice;
	
	cout << "Enter the base price of the car you want" << endl;
	cin >> basePrice;

	double tax = basePrice * .08;
	double license = basePrice * .01;
	double dealerPrep = 30;
	double destCharge = 50;
	
	double total = basePrice + tax + license + dealerPrep
		+ destCharge;

	cout << "\n\n\n" 
		<< "basePrice            " << basePrice  << endl
		<< "tax                  " << tax        << endl
		<< "license              " << license    << endl
		<< "dealer prep          " << dealerPrep << endl
		<< "destination charge   " << destCharge << endl
		<< "___________________________" << endl
		<< "Grand total          " << total;

	cin.ignore();
	cin.ignore();
	return 0;
}

