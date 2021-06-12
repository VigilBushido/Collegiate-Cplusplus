/*autoInsurance.cpp
Feb 3, 2014
Michelle Levine
This program prompts the user for age and marital status.  The auto insurance rate is 
then determined from this info.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//Declare and initialize variables
	int age = 0;
	int maritalStatus = 0;
	float rate = 0.0;

	//Intro
	cout<<"WELCOME TO THE AUTO INSURANCE CALCULATOR!!\n\n";
	do
	{
	//Prompt for age
	cout<<"Enter the customer's age: ";
	cin>>age;
	
	if(age < 16)
		cout<<"Invalid.  Age must be at least 16\n\n";
	}
	while(age < 16);
	
	do
	{
	//Show a menu to prompt for maritalStatus
	cout<<"1) Married\n2) Single\n";
	
	//Prompt for maritalStatus
	cout<<"Please enter your choice here: ";
	cin>>maritalStatus;
	
	//display invalid
	if(maritalStatus !=1 && maritalStatus !=2)
		cout<<"Invalid.  You must choose 1 or 2 from the menu.\n\n";
	}
	while(maritalStatus !=1 && maritalStatus !=2);
	
	//Use a multi-way if structure to determine rate
	if (age < 25 && maritalStatus == 2)
		rate = 800.0;
	else if(age < 25 && maritalStatus == 1)
		rate = 700.0;
	else if(age >= 25 && maritalStatus == 2)
		rate = 500.0;
	else
		rate = 450.0;
		
	//Display rate
	cout<<"\n******************************\n";
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"Your insurance rate = $"<<rate<<endl;

 return 0;
}
