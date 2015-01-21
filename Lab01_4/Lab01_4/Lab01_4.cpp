/*
Jacob Steiner
lab01_4
1/21/2015

Psudocode
wrtite down my fortunes
get my random seed,
print out a random function*/

#include "stdafx.h"
#include <iostream>
#include   <string>
#include <stdlib.h>
#include   <time.h>    

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string fort1 =   "You will be rich one day, but only once because we can't let the power go to your head";
	string fort2 =                                                                "404 error: page not found";
	string fort3 =                                              "A bright future awaits someone in the world";
	string fort4 =                                                               "You will read this fortune";
	string fort5 =                                                                   "The end times are near";
	srand(time(NULL));           // sets random seed

	int v1 = rand() % 5;         // v1 in the range 0 to 4
	if (v1 == 0) {
		cout << fort1;
	}
	else if (v1 == 1) {
		cout << fort2;
	}
	else if (v1 == 2) {
		cout << fort3;
	}
	else if (v1 == 3) {
		cout << fort4;
	}
	else {
		cout << fort5;
	}

	getchar();


	return 0;
}

