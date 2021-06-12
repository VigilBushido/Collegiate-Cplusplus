//structExample1.cpp
//April 14, 2014
//This program demonstrates a structured data type called cd.

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

};

int main()
{
	//declare an instance of a cd called myCD
	CD myCD;
	
	//prompt the user for information
	cout<<"Enter an artist: ";
	cin>>myCD.artist;
	cout<<"Enter the CD title: ";
	cin>>myCD.title;
	cout<<"Enter the CD price: $";
	cin>>myCD.price;
	cout<<"Enter the CD release date: ";
	cin>>myCD.releaseDate;
	
	//display info
	cout<<"\nYOur CD info:\n";
	cout<<"Artist: "<<myCD.artist<<endl;
	cout<<"Title: "<<myCD.title<<endl;
	cout<<"Price: $"<<myCD.price<<endl;
	cout<<"Date: "<<myCD.releaseDate<<endl;
		

return 0;
}
