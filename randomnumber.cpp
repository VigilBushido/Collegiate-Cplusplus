/*
 Sergio Munguia : account ml56
 Marc Saintil : account ml75
 randomnumber.cpp - A number guessing game
 Febuary 18, 2014
 */

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{	
	//Declare Variable & Initialize
	int counter = 0, menuchoice = 0, choice = 0, myRandom = 0;
	
	//Display Intro
	cout << "WELCOME TO THE RANDOM NUMBER GUESSING GAME\n\n";
	do {
	//Display Rules
	cout << "1. Rules\n";
	cout << "2. Play Game\n";
	cout << "3. Exit\n";
	cout << "Enter Choice Here: ";
	//Prompt for choice
	cin >> menuchoice; 

	switch (menuchoice){
		case 1: 
			cout << "\n1. You must choose a number between 1-100.\n";
			cout << "\n2. The score is created by the number of guesses it takes to choose the correct number.\n";
			cout << "\n3. If you guess a number lower then pick a new number higher & vice versa\n";
			cout << "\n4. The scores are based on amount of guesses it takes to pick the correct number. 0-3 guesses = Great, 4-6 = Good, 7-9 = Okay, and anymore = Terrible.\n\n";
			cout <<setw(50)<< "****GOOD LUCK****\n";
			break;
		case 2: 
			srand(time(NULL)); //seed random number generator
			myRandom = rand()%100 + 1; //generate a random number from 1-10
			
			
			//Display 1st step
			cout << "\nThe Game has begun!\n";
			do { 
					do {
						cout << "\nEnter a number between 1 and 100: ";
						cin >> choice; 
						if (choice > 100){
							cout << "\nYour choice must be less than 100";}
						else if (choice < 0){
							cout << "\nYour choice must be greater than 0";}
					}while (choice > 100 || choice < 0);
				
				counter++;		
				if (choice < myRandom)
					cout << "\nThe number is higher than that guess.\n";
				else if (choice > myRandom)
					cout << "\nThe number is lower than that guess.\n";
			cout << myRandom << " Is the random number\n"; // display random number
				
			}while (choice != myRandom);
				if (counter >= 0 && counter <= 3) 
					cout << "That was a great guess!!\n\n";
				else if (counter >= 4 && counter <= 6)
					cout << "That was a good guess o_o\n\n";
				else if (counter >= 7 && counter <= 9)
					cout << "That was an ok guess o_-\n\n"; 
				else {
					cout << "That was a terrible guess -_-\n\n";
				}
					counter = 0;
			break;
		case 3:
			cout << "\nGameOver Goodbye\n\n";
		default: 
			//input validation
				if (menuchoice < 1 || menuchoice > 3)
				cout << "Invalid Selection. You must choose between (1-3)\n\n";
	}
}while (menuchoice !=3);

	return 0;
}