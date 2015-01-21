
//Made by Matt Jones
//Lab01_3 a program that adds all the extra fees for a car.


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double carBasePrice = 0.0;
	double tax = 0.20;
	double license = 0.10;
	double dealerPrep = 50.00;
	double destinationCharge = 20.00;
	double totalCarPrice = 0.0;
	cout << "What is the base price of the car?" << endl;
	cin >> carBasePrice;
	totalCarPrice = carBasePrice + ((carBasePrice * tax) + (carBasePrice * license)) + dealerPrep + destinationCharge;
	cout << totalCarPrice << endl;
	cin.ignore();
	cout << "goodbye";
	getchar();
	return 0;
}