/*
 Sergio Munguia : account ml 56
 April 16, 2014
 employeearray.cpp - 
 */


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	const int SIZE = 4;
//declare the arrays
string name[SIZE];
int hoursWorked[SIZE] = {0};
float hourlyPay[SIZE] = {0.0}, weeklyEarnings[SIZE] = {0.0};
	
	//Intro Program
	cout << "WELCOME TO THE 4 EMPLOYEE WEEKLY EARNINGS PROGRAM\n\n";
	
	for (int i = 0; i < 4; i++)
		{
			cout << "Please enter name #" << i + 1 << ": ";
			cin >> name[i];
			cout << "Please enter the number of hours worked: ";
			cin >> hoursWorked[i];
			cout << "Please enter the hourly pay rate: ";
			cin >> hourlyPay[i];
			cout << endl;
		}


	for (int i = 0; i < 4; i++)
		{
			weeklyEarnings[i] = hoursWorked[i] * hourlyPay[i];
		}

	cout << "Name\tHours Worked\tHourly Pay\tWeekly Earnings\n";
	cout << "-------------------------------------------------------\n";
	for (int i = 0; i < 4; i++)
		{
			cout << name[i] << "\t\t" << hoursWorked[i] << "\t\t" << fixed << showpoint << setprecision(2) << "$" << hourlyPay[i] << "\t\t" << "$" << weeklyEarnings[i] << endl; 
		}

return 0;
}
	

