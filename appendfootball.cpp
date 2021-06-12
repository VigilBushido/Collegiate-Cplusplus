/*
 Sergio Munguia: Account ml56
 February 2, 2014
 appendfootball.cpp
 -appends data to the file "football.txt"
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
//Declare a file pointer for output
	ofstream outfile;
//Open file "football.txt" for output
	outfile.open("football.txt", ios::app);
	
//Check for file
	if(!outfile)
		cout<<"File does not exists!\n";
		
//Append the data to a file
	outfile<<"Peyton Manning 17500000 37 Broncos Quarterback"<<endl;
		
//close the file. 
	outfile.close();
	
	return 0;
}

