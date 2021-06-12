/*
 Sergio Munguia: Account ml56
 February 2, 2014
 readfootball.cpp
 -Reads in the data from "football.txt". Then creates a second file called "footballformatted.txt to which you output the formated data. 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

main()
{
	//Declare & Initialize the Variables
	string firstName, lastName, team, position;
	int salary = 0, age = 0;
	
	//Declare a input file pointer
	ifstream infile;
	//Declare a output file pointer
	ofstream outfile;
	
	//Read in data from "football.txt"
	infile.open("football.txt", ios::in);
	infile>>firstName>>lastName>>salary>>age>>team>>position;
	
	//Check for file
	if(!infile)
		cout<<"File does not exist!\n";
	
	//close file.
	infile.close();
	
	//Open the Output file
	outfile.open("footballformatted.txt", ios::out);
	
	//Check for file
	if(!outfile)
		cout<<"File does not exist!\n";
	
	//Format the data into "footballformatted.txt"
	outfile<<"***************Player Summary****************\n";
	outfile<<left<<setw(15)<<"Player name:"<<firstName<<" "<<lastName<<endl;
	outfile<<left<<setw(15)<<"Salary:"<<"$"<<salary<<endl;
	outfile<<left<<setw(15)<<"Age:"<<"$"<<age<<endl;
	outfile<<left<<setw(15)<<"Team:"<<team<<endl;
	outfile<<left<<setw(15)<<"Position:"<<position<<endl;
	
	//close file. 
	outfile.close();
	
	return 0;
}

