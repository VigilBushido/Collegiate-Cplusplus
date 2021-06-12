//bmi.cpp
//Feb 5, 2014
//This program prompts the user for weight and height.  The bmi is then
//calculated and displayed and the user is given a message whether or not the bmi is within 
//a healthy range.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//Declare and initialize variables
	float weight = 0.0;
	float height = 0.0;
	float bmi = 0.0;

	//Intro
	cout<<"WELCOME TO THE BMI CALCULATOR!!\n\n";
	
	do
	{
	//Prompt for weight
	cout<<"Enter the weight(lbs): ";
	cin>>weight;
	//input validation
	if(weight < 0)
		{
		//display invalid
		cout<<"Invalid.  Weight can not be negative.\n\n";	
		}
	}
	while (weight <0);


	do
	{
	//Prompt for height
	cout<<"\nEnter the height(in): ";
	cin>>height;
	//input validation
	if(height < 0)
		{
		//display invalid
		cout<<"Invalid.  Height can not be negative.\n\n";	
		}
	}
	while (height <0);
	
	
	
	//Calculate bmi
	bmi = (weight * 720) / (pow(height, 2));

	//if structure to determine whether or not healthy range
	if(bmi < 18.5)
		{
		//display underweight
		cout<<"You are underweight.\n";
		}
	else if(bmi <= 24.9)
		{
		//display healthy
		cout<<"Healthy!!\n";
		}
	else
		{
		//display overweight
		cout<<"You are overweight.\n";
		}
 return 0;
}
