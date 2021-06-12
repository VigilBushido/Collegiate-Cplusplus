//Sergio Munguia 
//January 13, 2014
//restaurant.cpp

#include<iostream>
using namespace std;

float meal;
float tax;
float tip;
float total;

int main()
{
	cout<<"WELCOME TO BROWARD CAFE!!\n"<<endl;
	cout<<"Please enter in the total cost of the meal: $";
	cin>>meal;
	tax = meal * .07;
	tip = meal * .2;
	total = tax + tip + meal;
	cout<<"Meal Cost:"<<meal<<endl;
	cout<<"Tax:"<<tax<<endl;
	cout<<"Tip:"<<tip<<endl;
	cout<<"Total Cost:"<<total<<endl;

return 0;
}


