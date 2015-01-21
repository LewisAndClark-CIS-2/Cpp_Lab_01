/*
Lab01_1
Jacob Steiner
1/20/15

PSEUDOCODE

declare the variables
tell user to enter 2 foods
get the 2 foods
join them together and tell the user what the new food is

*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string food1;
	string food2;

	cout << "name 2 of your favorite foods " << endl;
	cin >> food1;
	cin >> food2;
	cout << "How about you have some " << food1 << " " << food2 << ". I'm sure that you would like it";

	cin >> food1;
	return 0;
}

