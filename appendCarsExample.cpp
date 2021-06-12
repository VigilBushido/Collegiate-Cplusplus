//anotherWriteExample.cpp
//Feb 3, 2014
//This program will prompt for information and then append that info to a file.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{	//declare and initialize variables
	string make, model;
	int year = 0;
	float price = 0.0;
	
	//declare a file pointer for output
	ofstream outfile;

	//Intro
	cout<<"WELCOME TO THE CAR DATABASE PROGRAM\n\n";
	
	//Prompt for data
	cout<<"Enter the make: ";
	cin>>make;
	cout<<"Enter the model: ";
	cin>>model;
	cout<<"Enter the year: ";
	cin>>year;
	cout<<"Enter the price: ";
	cin>>price;
	
	//open "cars.txt" for appending
	outfile.open("cars.txt", ios::app);
	
	//append the file with the data
	outfile<<make<<" "<<model<<" "<<year<<" "<<price<<endl;
	
	//close file
	outfile.close();


 return 0;
}
