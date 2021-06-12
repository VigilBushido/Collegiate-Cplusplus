/*
 Sergio Munguia
 March 29, 2014
 Receipt.cpp
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//function prototype
void GetItem(string &name, float &cost);

float CalculateSubTotal(float cost1,float cost2,float cost3);

float CalculateTax(float sub);

void DisplayReceipt(string name1, string name2, string name3, float cost1, float cost2, float cost3, float sub, float tax);

int main()
{
//declare & initialize variable

	string item1Name, item2Name, item3Name;
	float item1Cost = 0.0, item2Cost = 0.0, item3Cost = 0.0, subtotal = 0.0, totaltax = 0.0;

	cout << "Welcome to the Receipt Program\n";
	GetItem(item1Name, item1Cost);
	GetItem(item2Name, item2Cost);
	GetItem(item3Name, item3Cost);

	subtotal = CalculateSubTotal(item1Cost, item2Cost, item3Cost);
	totaltax = CalculateTax(subtotal);

	DisplayReceipt(item1Name, item2Name, item3Name, item1Cost, item2Cost, item3Cost, subtotal, totaltax);

	return 0;
}

void GetItem(string &name, float &cost)
{
	cout << "Enter name of Item: ";
	cin >> name;
	cout << "Enter Item's cost: ";
	cin >> cost;
}

float CalculateSubTotal(float cost1,float cost2,float cost3)
{
	return cost1 + cost2 + cost3;
}

float CalculateTax(float sub)
{
	return sub * .06;
}

void DisplayReceipt(string name1, string name2, string name3, float cost1, float cost2, float cost3, float sub, float tax)
{
	float total = 0.0;
	total = sub + tax;
	cout << fixed << showpoint << setprecision(2);
	cout << "Items\tCost\n";
	cout << "-------------------\n";
	cout << name1 << "\t$" << cost1 << endl;
	cout << name2 << "\t$" << cost2 << endl;
	cout << name3 << "\t$" << cost3 << endl;
	cout << endl;
	cout << "Subtotal:\t$" << sub << endl;
	cout << "Tax:\t\t$" << tax << endl;
	cout << "Total:\t\t$" << total << endl;
}