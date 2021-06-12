//winning.cpp
//March 31, 2014

#include<iostream>
#include<string>
using namespace std;

//return type: float
//parameters: 1 string by val
//purpose: This function prompts for and returns the sales for a particular division.
//input validation: No amounts less than 100
float GetSales(string);

//return type: void
//parameters: 4 floats by values
//purpose: This function determines and displays the highest of the 4 values that are passed to the function.
void FindHighest(float, float, float, float);

int main()
{	//local variables
	string div1 = "SW", div2 = "SE", div3 = "NW", div4 = "NE";
	
	float southwestsales = 0.0, southeastsales = 0.0, northwestsales = 0.0, northeastsales = 0.0;
	
	//call GetSales 4 times
	southwestsales = GetSales(div1);
	southeastsales = GetSales(div2);
	northwestsales = GetSales(div3);
	northeastsales = GetSales(div4);
	
	//call FindHighest
	FindHighest(southwestsales, southeastsales, northwestsales, northeastsales);

	

 return 0;
}
//function definition
//input validation: No amounts less than 100
float GetSales(string div)
{	//declare a local variable
	float tempSales = 0.0;
	do
	{
	cout<<"Enter the sales for the "<<div<<" division: ";
	cin>>tempSales;
	if(tempSales < 100)
		cout<<"Invalid.  Sales must be at least $100.\n\n";
	}
	while(tempSales < 100);
	
	return tempSales;
}

//purpose: This function determines and displays the highest of the 4 values that are passed to the function.
void FindHighest(float swSales, float seSales, float nwSales, float neSales)
{
	//declare local variables
	string highName;
	float highest = swSales;
	highName = "SW";
	
	if(seSales > highest)
		{
		highest = seSales;
		highName = "SE";
		}
	if(nwSales > highest)
		{
		highest = nwSales;
		highName = "NW";
		}
	if(neSales > highest)
		{
		highest = neSales;
		highName = "NE";
		}
		
		cout<<"The highest sales were from the "<<highName<<" division with sales = $"<<highest<<endl;
}
