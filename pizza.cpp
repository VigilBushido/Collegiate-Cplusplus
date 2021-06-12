/*
pizzaAlg.cpp
Jan. 15, 2014
Sergio Munguia
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
//Declare and variables and constants
float PI = 3.14;

float radius = 0.0, totalCost = 0.0;
int numSlices = 0;
float sliceArea = 0.0;
float sliceCost = 0.0;
float pizzaArea = 0.0;


//Display Intro
	cout<<"WELCOME TO THE BROWARD PIZZERIA!!\n\n";

//Prompt for radius
	cout<<"Enter the radius of the pizza(in): ";
	cin>>radius;
	cout<<endl;

//Prompt for totalCost
	cout<<"Enter the total cost of the pizza: $";
	cin>>totalCost;
	cout<<endl;

//Prompt for numSlices
	cout<<"Enter the number of slices in the pizza: ";
	cin>>numSlices;
	cout<<endl;

//Calculate pizzaArea 
	pizzaArea = PI * radius * radius;

//Calculate sliceArea 
	sliceArea = pizzaArea / numSlices;	

//Calculate sliceCost
	sliceCost = totalCost / numSlices;

//Display results (slice area and slice cost)
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"********************************************\n\n";
	cout<<"Area of a single slice of pizza:\t"<<sliceArea<<" sq. in.\n";
	cout<<"Cost of a single slice of pizza:\t"<<sliceCost<<"\n";

return 0;
}


