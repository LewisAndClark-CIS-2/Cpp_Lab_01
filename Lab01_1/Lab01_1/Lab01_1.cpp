//Made by Matt Jones
//Lab01_1 construct a new favorite food by adding 2 words together


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	string food1 = "";
	string food2 = "";
	string food3 = "";
	cout << "What is one of your favorite foods? " << endl;
	cin >> food1;
	cout << "What is another one of your favorite foods? " << endl;
	cin >> food2;
	food3 = food1 + food2;
	cout << food3 << endl;
	getchar();
	return 0;
}