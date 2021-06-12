//parallelArrayExample1.cpp
//April 7, 2014
//This program demonstrates the concept of parallel arrays and storing from a text file.
//This version uses a while loop to read in the data.
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

const int SIZE = 5;
int main()
{
	//declare parallel arrays
	string cdTitle[SIZE], cdArtist[SIZE];
	float cdPrice[SIZE] = {0.0};
	int cdReleaseDate[SIZE] = {0};
	int count = 0;
	//declare a file pointer for input
	ifstream infile;
	
	//open "cdData.txt" for input
	infile.open("cdData.txt", ios::in);
	
	//priming read to verify that there is data to be read in
	infile>>cdArtist[count]>>cdTitle[count]>>cdReleaseDate[count]>>cdPrice[count];
	
	//while loop read in data and store in arrays
	while(infile)
	{	count++;
		infile>>cdArtist[count]>>cdTitle[count]>>cdReleaseDate[count]>>cdPrice[count];
	}

	//close file
	infile.close();
	cout<<"Number of CDs read in: "<<count<<endl;
	//display data
	cout<<"\nArtist\tTitle\tRelease Date\tPrice\n";
	cout<<"--------------------------------------\n";
	for(int i = 0; i < count; i++)
	{	cout<<fixed<<showpoint<<setprecision(2);
		cout<<cdArtist[i]<<"\t"<<cdTitle[i]<<"\t"<<cdReleaseDate[i]<<"\t\t$"<<cdPrice[i]<<endl;
	
	}
	
return 0;
}
