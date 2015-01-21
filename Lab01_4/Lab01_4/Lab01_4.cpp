//Made by Matt Jones
//Lab01_4 that displays fortunes  


#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main()
{
	/* Initialize random seed: */
	srand(time(NULL));
	/* Generate secret number between 1 and 5: */
	int number = rand()% 5 + 1;

	string fortuneOne = "You shall meet an unexpected goal.";
	string fortuneTwo = "Seals shall overwelm the Pacific Ocean and then the Gulf of Mexico, then the world.";
	string fortuneThree = "DevilDriver in Scrubs equals /kappa.";
	string fortuneFour = "Numbers for the lottery are: 42 41 37 8 12.";
	string fortuneFive = "Pathfinder sessions will die out faster than you think.";

	/* Gets you your fortune.*/
	if (number == 1){
		cout << fortuneOne;
	}
	else if (number == 2){
		cout << fortuneTwo;
	}
	else if (number == 3){
		cout << fortuneThree;
	}
	else if (number == 4){
		cout << fortuneFour;
	}
	else if (number == 5){
		cout << fortuneFive;
	}
	cin.ignore();
	cout << "Press enter to leave.";
	getchar();
	return 0;
}