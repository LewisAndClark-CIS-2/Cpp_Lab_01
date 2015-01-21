
//Made by Matt Jones
//Lab01_2 a tipper program 15% and 20% tips are displayed


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double item = 0.0;
	double tip1 = 0.15;
	double tip2 = 0.20;
	cout << "What is the cost of the meal?" << endl;
	cin >> item;
	cout << item * tip1 << " = 15% tip" << endl;
	cout << item * tip2 << "= 20% tip" << endl;
	cin.ignore();
	cout << "goodbye";
	getchar();
	return 0;
}