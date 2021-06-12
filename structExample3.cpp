//structExample3.cpp
//April 14, 2014
//This program demonstrates the concept of an array of structs.
//This version adds some functions.
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
//define a struct called CD
struct CD
{
	//properties
	string title, artist;
	float price;
	int releaseDate;
	
	//constructor - the constructor is a function with the same name as the 
	//struct with no return type
	//The purpose of the constructor is to initialize the data in the struct
	//Initialization can also mean giving default values.
	//The constructor is automatically called when you declare an instance of the struct.
	CD()
	{
		artist = "Default_artist";
		title = "Default_title";
		price = 10;
		releaseDate = 2014;		
	}

};

const int SIZE = 10;

//function prototypes
//return type: void
//parameters: 1 array of CDs, 1 int(size of array)
//Purpose: This function will display a chart of the data
void DisplayCDs(const CD[], int);

//function prototypes
//return type: void
//parameters: 1 CD by ref
//Purpose: This function prompts the user for a CD
void GetCD(CD&);


int main()
{
	//declare an array of CDs
	CD myCDs[SIZE];
	
	//declare a single CD
	CD newCD;
	int count = 0;
	//declare a file pointer for input
	ifstream infile;
	
	//declare a file pointer for output
	ofstream outfile;
	
	//open "cdData.txt" for input
	infile.open("cdData.txt", ios::in);
	
	//priming read to verify that there is data to be read in
	infile>>myCDs[count].artist>>myCDs[count].title>>myCDs[count].releaseDate>>myCDs[count].price;
	
	//while loop read in data and store in arrays
	while(infile)
	{	count++;
		infile>>myCDs[count].artist>>myCDs[count].title>>myCDs[count].releaseDate>>myCDs[count].price;
	}

	//close file
	infile.close();
	cout<<"Number of CDs read in: "<<count<<endl;
	//Call function to display data
	DisplayCDs(myCDs, count);
	
	cout<<endl;
	//get a new CD
	GetCD(newCD);
	
	//append file
	//open file "cdData.txt" for appending
	outfile.open("cdData.txt", ios::app);
	
	//write the data of the new CD to file
	outfile<<newCD.artist<<" "<<newCD.title<<" "<<newCD.releaseDate<<" "<<newCD.price<<endl;
	
	//close file
	outfile.close();
	
	
	
	
	
return 0;
}

//Purpose: This function will display a chart of the data
void DisplayCDs(const CD tempCDs[], int size)
{
	//display data
	cout<<"\nArtist\tTitle\tRelease Date\tPrice\n";
	cout<<"--------------------------------------\n";
	for(int i = 0; i < size; i++)
	{	cout<<fixed<<showpoint<<setprecision(2);
		cout<<tempCDs[i].artist<<"\t"<<tempCDs[i].title<<"\t"<<tempCDs[i].releaseDate<<"\t\t$"<<tempCDs[i].price<<endl;
	
	}
	

}

void GetCD(CD &tempCD)
{
//prompt the user for information
	cout<<"Enter an artist: ";
	cin>>tempCD.artist;
	cout<<"Enter the CD title: ";
	cin>>tempCD.title;
	cout<<"Enter the CD price: $";
	cin>>tempCD.price;
	cout<<"Enter the CD release date: ";
	cin>>tempCD.releaseDate;

}
