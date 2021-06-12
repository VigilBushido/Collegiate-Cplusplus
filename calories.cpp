/*
 Sergio Munguia: Account ml56
 Febuary 6, 2014
 calories.cpp - calculates the number of daily calories needed to maintain the user's current weight.
*/

#include <iostream>
using namespace std;

int main()
{
	//Declare and Initialize Variables
	int active = 0, gender = 0, weight = 0, intake = 0;
	
	//Intro 
	cout << "WELCOME TO THE BALANCED CALORIES INTAKE PROGRAM\n\n";
	
	do {
	//prompt for weight
	cout << "Please enter in your weight: ";
	cin >> weight;
	//input validation
	if (weight < 10)
		cout << "****invalid weight****";
		cout << endl;
		}
	while (weight < 10);
	
	do {
	//prompt for activity level 
	cout << "Please choose from the following menu:"<<endl;
	cout << "Acitivty Level:"<<endl;
	cout << "\t1) Moderately Active"<<endl;
	cout << "\t2) Low Activity level"<<endl;
	cin >> active;
	//input validation
		if (active != 1 && active !=2)
			cout << "****invalid selection****";
			cout << endl;
		}
	while (active != 1 && active !=2);

	do {
	//prompt for gender
	cout << "Please choose from the following menu:"<<endl;
	cout << "Gender:"<<endl;
	cout << "\t1) Male"<<endl;
	cout << "\t2) Female"<<endl;
	cin >> gender;
	//input validation
		if (gender != 1 && gender !=2)
			cout << "****invalid selection****";
			cout << endl;
		}
	while (gender !=1 && gender !=2);
	
	//Calculate intake using If/Else statements
	if (gender == 2 && active == 1)
	{
		intake = 12 * weight;
	}
	else if 
		(gender == 2 && active == 2)
	{
		intake = 10 * weight;
	}
	else if (gender == 1 && active == 1)
	{
		intake = 15 * weight;
	}
	else {
		intake = 13 * weight;
	}
	//Display daily amount of calories to user
	cout << "Your daily amount of calories needed to maintain your current weight is "<<intake;
	cout << endl;
	return 0;
}

	
	
