/*
Sergio Munguia: account ml56
Homework6.cpp
March 12, 2014
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototypes

void PrintDate(int, int, int);
//return type: void
//Parameters: 3 int
//Purpose: Prints the date as month/day/year

float CircleArea(float);
//return type: float
//Parameters: 1 float
//Purpose: Returns the area of a circle with given radius

float Fahrenheit(float);
//return type: float
//Parameters: 1 float
//Purpose: Converts a temperature from degrees Celsius to Degrees Fahrenheit

int Factorial(int);
//return type: int
//Parameters: 1 int
//Purpose: calculates and displays the factorial of any number

bool IsSquare(int);
//return type: bool
//Parameters: 1 int
//Purpose: Determines whether a given number is a perfect square


int main()
{
	
	int d = 0, m = 0, y = 0;
	
	float radius = 0.0, celcius = 0.0, number = 0.0, squareTest = 0.0; 
	
	bool squarebool = false;

	cout << "Prints month/day/year of march 26, 1988\n";
	PrintDate(3,26,1988);
	cout << endl;
	
//prompt for day, month, and year
	cout << "enter in a month #: ";
	cin >> m;
	cout << "enter in a day: ";
	cin >> d;
	cout << "enter in a year: ";
	cin	>> y;
	cout << endl;
	
//display day month and year
	PrintDate(m,d,y);
	cout << endl;

	cout << fixed << setprecision(2);
	cout << "Area of a Circle with Radius 8 = "<< CircleArea(8);
	cout << endl;
//prompt for radius
	cout << "\nPlease enter in a radius of a circle: ";
	cin >> radius;
	cout << "Area of Circle: " << CircleArea(radius) << endl;
	cout << endl;
	
	cout << "Degrees of 55 Celcius is " << Fahrenheit(55);
	cout << endl;
//prompt for degrees in Celcius
	cout << "\nPlease enter in degrees in Celcius: ";
	cin >> celcius;
//display degrees in Fahrenheit
	cout << "Degrees in Fahrenheit: " << Fahrenheit(celcius) << endl;
	cout << endl;

	
//prompt for a number to display factorial
	cout << "Enter in a number to show factorial: ";
	cin >> number;
	Factorial(number);
	cout << endl;
	cout << "Factorial of Number 8 is ";
	Factorial(8);
	cout << endl;

	

//prompt for a number to test if its a perfect square
	cout << "Perfect square test of a number (Enter Here): ";
	cin >> squareTest;
	squarebool = IsSquare(squareTest);
	
// Display whether its true or false that a number is a perfect square
	if (squarebool == true){
		cout << "This is a true return\n";}
	else {
		cout << "This is a false return\n";}

	
	return 0;
	
}


void PrintDate(int day, int month, int year)
{
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}

float CircleArea(float circleR)
{
	return M_PI * pow(circleR, 2);
}

float Fahrenheit(float celcius)
{
	return (9/5.0 * celcius) + 32;
}

int Factorial(int anyFactorial)
{
	int factorial = 1;
	cout << anyFactorial << "! = ";
	for (int i = anyFactorial; i >= 1; i--)
	{
		cout << i << " * ";
		factorial*= i;
	}
	cout << "= " << factorial << endl;
	
	return 0;
}



bool IsSquare(int num)
{
	int min = 0, max = 1000;
	int answer = 0;
	int test = 0;
	while(1)
	{
		test = (min + max) / 2;
		answer = test * test;
		if( num > answer)
		{
		// min needs be moved
		min = test;
		}
		else if(num < answer)
		{
		// max needs be moved
		max = test;
		}
		if(num == answer)
		{
			cout << "\n" << num << " is a perfect square of " << test << endl;
		return true; // perfect square
		}
		if((max - min) <= 1)
		{
			cout << "\n" << num << " is NOT a perfect square\n";
		return false; // Not a perfect square
		}
	}
}

	
