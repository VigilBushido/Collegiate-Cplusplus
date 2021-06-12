/*
theater.cpp
January 22, 2014
Sergio Munguia: Account ml56
Prompts user for box office ticket sale information & displays a report of movieName, adult tickets sold, child tickets sold, gross profit, net profit, & remainder paid to the distributor
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	
//Declare and Initialize Variables/Constants
const float REV = .25;
const float ATICK = 9.00;
const float CTICK = 6.00;

float grossProfit = 0.0;
float netProfit = 0.0;
float remainder = 0.0;
int numAtickets = 0;
int numCtickets = 0;
string movieName;

//Display Intro

	cout<<"WELCOME TO THE TICKET SALES PROGRAM\n\n";
	
//Prompt user for the name of the movie. 
	cout<<"Enter in the name of the movie: ";
	getline(cin, movieName);
	cout<<endl;
	
//Prompt user for how many adult tickets. 
	cout<<"How many adult tickets sold?: ";
	cin>>numAtickets;
	cout<<endl;

//Prompt user for how many child tickets.
	cout<<"How many child tickets sold?: ";
	cin>>numCtickets;
	cout<<endl;
	
//Calculate grossProfit: numAtickets * ATICK + numCtickets * CTICK
	grossProfit = numAtickets * ATICK + numCtickets * CTICK;
	
//Calculate netProfit: grossProfit * REV
	netProfit = grossProfit * REV;
	
//Calculate remainder: grossProfit - netProfit
	remainder = grossProfit - netProfit;
	
//Display the Calculated Information to user.
	cout<<fixed<<setprecision(2);
	cout<<"***********************Ticket Sales*********************\n";
	cout<<left<<setw(35)<<"Movie Name: "<<movieName<<endl;
	cout<<left<<setw(35)<<"Adult Tickets sold: "<<numAtickets<<endl;
	cout<<left<<setw(35)<<"Child Tickets sold: "<<numCtickets<<endl;
	cout<<left<<setw(35)<<"Gross Box office Profit: "<<"$"<<grossProfit<<endl;
	cout<<left<<setw(35)<<"Net Box Office Profit: "<<"$"<<netProfit<<endl;
	cout<<left<<setw(35)<<"Amount Paid to the Distributor: "<<"$"<<remainder<<endl;
	cout<<"********************************************************\n";
	
	return 0;
	
}

	
	
	
	



