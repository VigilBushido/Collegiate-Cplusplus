/*
 Sergio Munguia: account ml56
 rainfall.cpp - 
 February 14, 2014 
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare & Initialize Variables
	int years = 0, months = 0, count = 0;
	float rainFall = 0.0, totalRain = 0.0, average = 0.0;
	
	//Intro
	cout << "WELCOME TO THE RAINFALL PROGRAM\n";
	//Promp user for number of years 
	//do
	do {
	cout << "\nPlease enter in a number of years: ";
	cin >> years;
	//input validation
	//years cannot be less than 1
	//if (years < 1)
		if (years < 1) {
			cout << "There cannot be less than 1 year\n";}
	}
	//while (years < 1)
	while (years < 1);
	//Outer loop will iterate once for each year
	//for (int i = 1; i <= years; i++)
	for (int i = 1; i <= years; i++) {
		//Inner loop will iterate once for each month
		//for (int j = 1; j <= 12; j++)
		for (int j = 1; j <= 12; j++) {
		//Prompt user for the inches of rainfall for month
		//do
			do {
			cout << "\nPlease enter in the amount of inches for month "<<j<<" :";
			cin >> rainFall;
			//input validation
			//no negative numbers for the monthly rainfall
			//if (rainFall < 0)
			if (rainFall < 0) {
				cout << "There cannot be negative rainfall\n";}
			}
			//while (rainFall < 0)
			while (rainFall < 0);
			totalRain += rainFall;
			count++;
		}}

	//average total rain fall / amount of months 
	average = totalRain / count;
	

	//Display to user the number of months, the total inches of rainfall, and the average rainfall per month for the entire period.
	cout << fixed << setprecision(2);
	cout << endl;
	cout <<left<<setw(20)<<"Total months: "<<count<<endl;
	cout <<left<<setw(20)<<"Total inches: "<<totalRain<<endl;
	cout <<left<<setw(20)<<"Average Rainfall: "<<average<<endl;

	return 0;
}