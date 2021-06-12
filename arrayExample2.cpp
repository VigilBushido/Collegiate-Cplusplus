//arrayExample1.cpp
//April 7, 2014
//This program demonstrates the concept of an array.
//This version adds some functions.
//Arrays are always passed by reference.
#include<iostream>
using namespace std;

//return type: void
//parameters: 1 array of floats, 1 int(size of the array)
//Purpose: This function displays the values in the array
void DisplayValues(const float[], int); //const keyword is used when no changes are made to the array in the function.

//return type: void
//parameters: 1 array of floats, 1 int(size of the array)
//Purpose: This function prompts for the values in the array
void GetValues(float[], int);

//return type: float
//parameters: 1 array of floats, 1 int(size of the array)
//Purpose: This function sums the values in the array and returns the sum.
float SumValues(float[], int);

//return type: float
//parameters: 1 array of floats, 1 int(size of the array)
//Purpose: This function returns the highest value in the array.
float GetHighest(float[], int);



//declare a constant to represent the size of the array
const int SIZE = 3;
int main()
{
	//declare an array of floats, size 3, called grades
	//initialize all values to 0.0
	float grades[SIZE] = {0.0};

	//declare variables
	float mytotal = 0.0;

	cout<<"\nThe values in the grades array:\n";
	//call function to display the values
	DisplayValues(grades, SIZE);
	cout<<endl;
	
	//Call a function to prompt for the values in the grades array
	GetValues(grades, SIZE);
	
	//display the values entered
	cout<<"\nThe new values in the grades array:\n";
	//call function to display the values
	DisplayValues(grades, SIZE);
	
	//store the sum of the values in mytotal
	mytotal = SumValues(grades, SIZE);
	
	//display mytotal
	cout<<"The sum of the values = "<<mytotal<<endl;
	
	//display the highest value in the array
	cout<<"The highest value = "<<GetHighest(grades,SIZE)<<endl;
	
	
return 0;
}

//Purpose: This function displays the values in the array
void DisplayValues(const float tempArr[], int size) 
{
	for(int i = 0; i < size; i++)
	{
		cout<<tempArr[i]<<" ";
	}
	cout<<endl;


}

//Purpose: This function prompts for the values in the array
void GetValues(float tempArr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		//prompt
		cout<<"Enter value "<<i + 1<<": ";
		cin>>tempArr[i];
	}
}

//Purpose: This function sums the values in the array and returns the sum.
float SumValues(float arr[], int size)
{	//declare a local variable
	float total = 0.0;	

	for(int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	return total;
}

//Purpose: This function returns the highest value in the array.
float GetHighest(float arr[], int size)
{
	//declare local variables
	float highest = arr[0];
	
	for(int i = 1; i < size; i++)
	{
		if(arr[i] > highest)
			highest = arr[i];
	}

	return highest;	
}
