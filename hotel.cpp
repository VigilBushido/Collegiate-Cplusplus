/*Sergio Munguia: account ml56
hotel.cpp - calculates the occupancy rate for a hotel
Feb 12, 2014
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
//Declare and initialized variables
int numFloors = 0;
int numRoomsPerFloor = 0;
int numOccupiedPerFloor = 0;
int numUnoccupiedPerFloor = 0;
int totalRooms = 0;
int totalOccupied = 0;
int totalUnoccupied = 0;
float percentOccupied = 0.0;
float percentUnoccupied = 0.0;

	//Intro
	cout<<"WELCOME TO THE HOTEL OCCUPANCY PROGRAM\n";
	
	do{
	//Prompt for numFloors
	cout<<"\nPlease enter the number of floors in the hotel: ";
	cin>>numFloors;
	//input validation
		if (numFloors < 1)
			{
			cout<<"*You must enter a value greater than 0. Try again.\n";
			}
	}
	while (numFloors < 1);

	for (int i = 1; i <= numFloors; i++)
		
	{
		do{
		//Prompt for numRoomsPerFloor
		cout<<"\nPlease enter the number of rooms for floor "<<i<<": ";
		cin>>numRoomsPerFloor;
		//input validation
		if(numRoomsPerFloor < 10)
		//display invalid
			{
			cout<<"*You must enter a number greater than 9. Try again.\n";
			}
		}
		while(numRoomsPerFloor < 10);
	
		do{
		//Prompt for numOccupiedPerFloor
		cout<<"\nPlease enter the number of rooms occupied on floor " <<i<<": ";
		cin>>numOccupiedPerFloor;
		//input validation
		if(numOccupiedPerFloor < 0 || numOccupiedPerFloor > numRoomsPerFloor)
		//display invalid
			{		
			cout<<"*Error...Amount of "<<numOccupiedPerFloor<<" rooms occupied is not possible.\n";
			}
		else{
		//Calculate numUnoccupiedPerFloor
		numUnoccupiedPerFloor = numRoomsPerFloor - numOccupiedPerFloor;
			
		//Add to totals
		totalRooms += numRoomsPerFloor;
		totalOccupied += numOccupiedPerFloor;	
		totalUnoccupied += numUnoccupiedPerFloor;
			}
		}
		while(numOccupiedPerFloor < 0 || numOccupiedPerFloor > numRoomsPerFloor);
	}

		//Calculate percents
		percentUnoccupied = float(totalUnoccupied) / totalRooms * 100;
		percentOccupied = float(totalOccupied) / totalRooms * 100;

		//Display totals and percents
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<endl;
		cout<<left<<setw(32)<<"Total number of rooms:"<<totalRooms<<endl;
		cout<<left<<setw(32)<<"Number of rooms occupied:"<<totalOccupied<<endl;
		cout<<left<<setw(32)<<"Number of rooms unoccupied:"<<totalUnoccupied<<endl;
		cout<<left<<setw(32)<<"Percentage of rooms occupied:"<<percentOccupied<<"%"<<endl;
		cout<<left<<setw(32)<<"Percentage of rooms unoccupied:"<<percentUnoccupied<<"%"<<endl;

	return 0;
}
