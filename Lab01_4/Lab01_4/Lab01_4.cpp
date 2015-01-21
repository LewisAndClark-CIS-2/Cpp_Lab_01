// Lab01_4.cpp : simulates a fortune cookie

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	
	string message1 = "Your going to have a great day!";
	string message2 = "Today is not your lucky day, better just stay home.";
	string message3 = "Nothing special today, just a normal day.";
	string message4 = "You should call your mother.";
	string message5 = "Today is the day to get things done, go for it.";
	int choice = 0;
	srand(time(NULL));
	cout << "Press <Enter> to crack open the cookie. ";
	cin.ignore();
	choice = 1 + rand() % (5);
	switch (choice)
	{
	case 1:
		cout << endl << message1 << endl;
		break;

	case 2:
		cout << endl << message2 << endl;
		break;

	case 3:
		cout << endl << message3 << endl;
		break;

	case 4:
		cout << endl << message4 << endl;
		break;

	case 5:
		cout << endl << message5 << endl;
		break;

	default:
		cout << endl << "Choice Error" << endl;
	}
	cin.ignore();
	cin.ignore();
	
	
	
	return 0;
}

