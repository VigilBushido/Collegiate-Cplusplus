/*
Sergio Munguia
March 24, 2014
days.cpp - calculates the average number of days a company's employees are absent. 
*/

#include<iostream>
#include<iomanip>
using namespace std;

void GetNumEmployees(int &workers);
//function prototype: void GetNumEmployees(int &)
//return type: void
//parameters: int
//purpose: asks the user for the number of employees in the company.

int TotalDaysMissed(int missed);
//function prototype: int TotalDaysMissed(int)
//return type: int
//parameters: int
//purpose: aks the user to enter a number of days each year. 

float AverageDaysMissed(int people,int absent);
//function prototype: float AverageDaysMissed(int,int)
//return type: float
//parameters: 2 int
//purpose: takes the 2 arguments #employee's in the company & #days absent in the year. returns as a float, the average number of days absent. (no output or user input)

int main()
{
int employees = 0, daysAbsent = 0, totalAbsent = 0;
float average = 0.0;

//intro to program
cout << "WELCOME TO THE DAYS ABSENT PROGRAM\n";

//call functions
GetNumEmployees(employees);
for (int i = 1; i <= employees; i++)
{
totalAbsent+= TotalDaysMissed(daysAbsent);
}
average = AverageDaysMissed(employees,totalAbsent);

cout << "The average days missed: " << average << endl;
}

void GetNumEmployees(int &workers)
{
	do{
	cout << "Enter number of empolyees in the company: ";
	cin >> workers;
	if (workers < 1){
		cout << "invalid input must be greater than 1\n";}
	}while (workers < 1);
}
int TotalDaysMissed(int missed)
{ 
	do{
	cout << "Enter total days missed: ";
	cin >> missed;
	if (missed < 0){
		cout << "invalid input must be greater than 0\n";}
	}while (missed < 0);
	return missed;
}
float AverageDaysMissed(int people,int absent)
{
	return (absent / people);
}


