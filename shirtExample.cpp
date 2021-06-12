//shirtExample.cpp
//April 14, 2014
//This program demonstrates more with structs and arrays.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//define a struct named Shirt
struct Shirt
{
	string sleeveType, material, color;
	float price;
	int size;
	
	//constructor
	Shirt()
	{
		price = 0.0;
		size = 0;
	}

};

//function prototypes
//return type: Shirt
//parameters: none
//Purpose: This function prompts for a single Shirt
Shirt GetShirt();

//return type: void
//Parameters: 1 array of Shirts, 1 int(size of array)
//Purpose: This function displays a chart of all of the data
//stored in a Shirt array
void DisplayShirts(const Shirt[], int);

//return type: void
//parameters: 1 array of Shirts, 1 int by value(size), 2 ints by ref(numlong, numshort), 1 float by ref(totalcost) 
//Purpose: This function calculates the number of long and short sleeve shirts and the total cost of all the shirts
void CalculateTotals(const Shirt[], int, int&, int&, float&);



int main()
{	//declare variables
	int longCounter = 0, shortCounter = 0;
	float total = 0.0;
	//array of Shirts
	Shirt myShirts[3];
	
	//call GetShirt to populate my array
	for(int i = 0; i < 3; i++)
	{
		myShirts[i] = GetShirt();
	}
	
	//call DisplayShirts
	DisplayShirts(myShirts, 3);
	
	//call CalculateTotals
	CalculateTotals(myShirts, 3, longCounter, shortCounter, total);
	
	//display info to test
	cout<<"\nNumber of long sleeve shirts:\t"<<longCounter<<endl;
	
	cout<<"Number of short sleeve shirts:\t"<<shortCounter<<endl;
	
	cout<<"Total cost of shirts:\t\t$"<<total<<endl;

	return 0;
}

//Purpose: This function prompts for a single Shirt
Shirt GetShirt()
{
	//declare a local Shirt
	Shirt tempShirt;
	
	//prompt for info
	cout<<"Enter the sleeve type (long or short): ";
	cin>>tempShirt.sleeveType;
	
	cout<<"Enter the material: ";
	cin>>tempShirt.material;
	
	cout<<"Enter the color: ";
	cin>>tempShirt.color;
	
	cout<<"Enter the size: ";
	cin>>tempShirt.size;
	
	cout<<"Enter the price: $";
	cin>>tempShirt.price;
	
	return tempShirt;
	
}

//Purpose: This function displays a chart of all of the data
//stored in a Shirt array
void DisplayShirts(const Shirt tempArr[], int size)
{
	//display chart heading
	cout<<fixed<<showpoint<<setprecision(2);
	
	cout<<"Sleeve Type\tMaterial\tSize\tCost\tColor\n";
	cout<<"---------------------------------------------\n";
	
	for(int i = 0; i < size; i++)
	{
	cout<<tempArr[i].sleeveType<<"\t\t\t"<<tempArr[i].material<<"\t\t"<<tempArr[i].size<<"\t$";
	cout<<tempArr[i].price<<"\t"<<tempArr[i].color<<endl;

	}


}

//Purpose: This function calculates the number of long and short sleeve shirts and the total cost of all the shirts
void CalculateTotals(const Shirt tempArr[], int size, int &numLong, int &numShort, float &totalCost)
{
	//reset counters and totals
	numLong = 0;
	numShort = 0;
	totalCost = 0;
	for(int i = 0; i < size; i++)
	{
		if(tempArr[i].sleeveType == "long")
		{
			//add to counter
			numLong++;
		}
		else
		{	//add to counter
			numShort++;
		}
		
		//add to total
		totalCost += tempArr[i].price;
	}

}
