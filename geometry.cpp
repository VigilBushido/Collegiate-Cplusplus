/*
 Sergio Munguia: account ml56
 geometry.cpp - 
 February 14, 2014 
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
//Declare the constants & initialize variables
	int choice =0;
	float radius = 0.0, length = 0.0, width = 0.0, base = 0.0, height = 0.0;
	float Area = 0.0;
//Intro 
	cout << "WELCOME TO THE GEOMETRY CALCULATOR\n\n";
//do
	do {
//Display menu 
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Exit\n";
	cout << endl;
//Prompt user to enter a choice (1-4)
	cout << "Enter your choice: ";
	cin >> choice;
//If user enters 1, prompt user for radius of circle
	switch (choice){
		case 1:
			// do
				do {
					cout << "\nPlease enter the radius of circle: ";
					cin >> radius;
					//input validation - No Negative Values
					// if (radius < 0)
					if (radius < 0) {
						cout << "Error... Cannot be Negative\n";}
				}
			// while (radius < 0)
				while (radius < 0);
			// Calculate Area = M_PI * pow(radius, 2)
			Area = M_PI * pow(radius, 2);
			//Display the Area of Circle
			cout << fixed << setprecision(2);
			cout << "\nArea of circle: "<<Area<<endl<<endl;
				break;
			
//If user enters 2, prompt user for the length & width of rectangle 
		case 2:
			// do
				do {
					cout << "\nPlease enter the length: ";
					cin >> length;
					cout << "\nPlease enter the width: ";
					cin >> width;
					//input validation - No Negative Values
					// if (length < 0 || width < 0)
					if (length < 0 || width < 0) {
						cout << "Error... Cannot be Negative\n";}
					}
			// while (length < 0 || width < 0)
				 while (length < 0 || width < 0);
			// Calculate Area = length * width
			Area = length * width;
			//Display the Area of Rectangle
			cout << "\nArea of rectangle: "<<Area<<endl<<endl;
			break;
			
//If user enters 3, prompt user for the base & height of the triangle
		case 3:
			// do
				do {
					cout << "\nPlease enter the base: ";
					cin >> base;
					cout << "\nPlease enter the height: ";
					cin >> height;
					//input validation - No Negative Values
					//if (base < 0)
					if (base < 0)
						cout << "Error... Cannot be Negative\n";
					//else if (height < 0)
					else if(height < 0)
						cout << "Error... Cannot be Negative\n";
					}
			// while (base < 0 || height < 0)
				while (base < 0 || height < 0);
			//Calculate Area = .5 * base * height
			Area = .5 * base * height;
			//Display the Area of the Triangle
			cout << "\nArea of triangle: "<<Area<<endl<<endl;
			break;
		case 4: 
			cout << "You have exited the program. Goodbye!\n";
			break;
		default: 
			//input validation
			cout << "Error... You must select from 1-4\n\n";
					
}	// while (choice !=4)
	}while (choice != 4);
//If user enters 4, the program should end. 

	return 0;
}
