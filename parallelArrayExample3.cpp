//parallelArrayExample3.cpp
//April 7, 2014
//This program demonstrates the concept of parallel arrays and storing from a text file.
//This version adds some functions.
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

const int SIZE = 5;

//function prototypes
//return type: void
//parameters: 2 string arrays(title and artist), 1 int array(date), 1 float array(price), 1 int(size of array)
//Purpose: This function will display a chart of the data
void DisplayCDs(const string[], const string[], const int[], const float[], int);



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
	//Call function to display data
	DisplayCDs(cdArtist, cdTitle, cdReleaseDate, cdPrice, count);
	
	
return 0;
}

//Purpose: This function will display a chart of the data
void DisplayCDs(const string artist[], const string title[], const int date[], const float price[], int size)
{
	//display data
	cout<<"\nArtist\tTitle\tRelease Date\tPrice\n";
	cout<<"--------------------------------------\n";
	for(int i = 0; i < size; i++)
	{	cout<<fixed<<showpoint<<setprecision(2);
		cout<<artist[i]<<"\t"<<title[i]<<"\t"<<date[i]<<"\t\t$"<<price[i]<<endl;
	
	}
	

}
