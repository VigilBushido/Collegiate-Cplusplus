/*
 Sergio Munguia: Account ml56
 Febuary 1, 2014
 Tax.cpp 
 - asks for the actual value of a piece of property and displays the assessment value and property tax.
*/

#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	//Declare Constants & Variables
	const float taxPercent = .0064;
	const float assessmentPercent = .60;
	float propertyValue = 0.0;
	float assessmentValue = 0.0;
	float propertyTax = 0.0;
	
	//Introduce the Program
	
	cout<<"WELCOME TO THE PROPERTY TAX PROGRAM\n\n";
	
	//Prompt user for the actual value of a piece of property
	
	cout<<"Please enter the the value of the property: $";
	cin>>propertyValue;
	cout<<endl;
		
	//Calculate the assessment value: assessmentValue = propertyValue * assessmentPercent
	assessmentValue = propertyValue * assessmentPercent;
		
	//Calculate the property tax: propertyTax = assessmentValue * taxPercent
	propertyTax = assessmentValue * taxPercent;
		
	//Display the the assessment value and property tax to user. 

	cout<<setprecision(2)<<fixed;
	cout<<"The assessment value is "<<"$"<<assessmentValue<<" and the property tax is "<<"$"<<propertyTax<<endl;
	return 0;
}