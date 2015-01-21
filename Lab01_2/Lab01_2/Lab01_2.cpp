/*
Jacob Steiner
1/20/15
lab01_2

PSEUDOCODE

Get grand total
calculate 15 and 20 percent tip
inform the the user about the tips
exit program nicely
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double total;
	double smallTip;
	double bigTip;

	cout << "Enter the restaurant bill total" << endl;
	cin >> total;
	smallTip = total * .15;
	bigTip = total * .2;

	cout << "the 15 percent tip is " << smallTip << " which gives you a total of " << total + smallTip << endl;
	cout << "the 20 percent tip is " << bigTip << " which gives you a total of " << total + bigTip;
	
	cin.ignore();
	cin.ignore();
	return 0;
}

