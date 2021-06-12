//parallelArrayExample1.cpp
//April 7, 2014
//This program demonstrates the concept of parallel arrays and storing from a text file.
//This version uses a for loop to read in the data
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

const int SIZE = 3;
int main()
{
	//declare parallel arrays
	string cdTitle[SIZE], cdArtist[SIZE];
	float cdPrice[SIZE] = {0.0};
	int cdReleaseDate[SIZE] = {0};
	
	//declare a file pointer for input
	ifstream infile;
	
	//open "cdData.txt" for input
	infile.open("cdData.txt", ios::in);
	
	//read in data and store in arrays
	for(int i = 0; i < 3; i++)
	{
		infile>>cdArtist[i]>>cdTitle[i]>>cdReleaseDate[i]>>cdPrice[i];
	}

	//close file
	infile.close();
	
	//display data
	cout<<"Artist\tTitle\tRelease Date\tPrice\n";
	cout<<"--------------------------------------\n";
	for(int i = 0; i < SIZE; i++)
	{	cout<<fixed<<showpoint<<setprecision(2);
		cout<<cdArtist[i]<<"\t"<<cdTitle[i]<<"\t"<<cdReleaseDate[i]<<"\t\t$"<<cdPrice[i]<<endl;
	
	}
	
return 0;
}
