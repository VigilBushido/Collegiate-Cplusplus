//predefinedFunctEx.cpp
//March 19, 2014
//This program demonstrates the use of some pre-defined functions.

#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	//display the chart heading 
	cout<<"n\tn^2\n";
	cout<<"----------\n";
	//use a for loop to display the squares of teh integers 1 - 4 
	for(int i = 1; i <= 4; i++)
	{
		cout<<i<<"\t"<<pow(float(i),2)<<endl;
	}
	cout<<endl;

	//create a chart that displays 5^1 through 5^5
	float n = 5;
	cout<<"n\t5^n\n";
	cout<<"----------\n";
	for(int i = 1; i <= 5; i++)
		cout<<i<<"\t"<<pow(n,i)<<endl;
return 0;
}
