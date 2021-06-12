/*
 Sergio Munguia: Account ml56
 February 1, 2014
 writefootball.cpp
 -Prompts user for data about a football player & writes that data to a file called "football.txt"
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
//Declare & Initialize the Variables
	
	string firstName, lastName, team, position;
	int salary, age;
	
//Declare a file pointer for output
	ofstream outfile;
//Open file "football.txt" for output
	outfile.open("football.txt", ios::out);
	
//Check for file
	if(!outfile);
		cout<<"File does not exists!\n";
	
//Prompt the user for the data about a football player
	cout<<"WELCOME TO THE PLAYER SUMMARY PROGRAM\n\n";
	cout<<"Please enter in the following data\n";
	cout<<"First Name: ";
	cin>> firstName;
	cout << "Last Name: ";
	cin>> lastName;
	cout << "Salary: ";
	cin>> salary;
	cout<<"Age: ";
	cin>> age;
	cout << "Team: ";
	cin>> team;
	cout << "Position: ";
	cin>> position;
	
//Write the data to a file called "football.txt"
	outfile<<firstName<<" "<<lastName<<" "<<salary<<" "<<age<<" "<<team<<" "<<position<<endl;
		
//close the file. 
	outfile.close();
	
	return 0;	
}
		
