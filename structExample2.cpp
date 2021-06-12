//structExample2.cpp
//April 14, 2014
//This program demonstrates a structured data type called cd.
//This version adds some functions

#include<iostream>
#include<iomanip>
#include<string>
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

//function prototypes
//return type: void
//parameters: 1 CD by ref
//Purpose: This function prompts the user for a CD
void GetCD(CD&);


//return type: void
//parameters: 1 CD by value
//Purpose: This function displays the user for a CD
void DisplayCD(CD);

int main()
{
	//declare an instance of a cd called myCD
	CD myCD;
	
	//call DisplayCD
	DisplayCD(myCD);
		
	//call GetCD
	GetCD(myCD);
	
	//call DisplayCD
	DisplayCD(myCD);
	
		

return 0;
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

//Purpose: This function displays the user for a CD
void DisplayCD(CD tempCD)
{
	//display info
	cout<<"\nYOur CD info:\n";
	cout<<"Artist: "<<tempCD.artist<<endl;
	cout<<"Title: "<<tempCD.title<<endl;
	cout<<"Price: $"<<tempCD.price<<endl;
	cout<<"Date: "<<tempCD.releaseDate<<endl;

}
