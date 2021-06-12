//arrayExample1.cpp
//April 7, 2014
//This program demonstrates the concept of an array.

#include<iostream>
using namespace std;

int main()
{
	//declare an array of floats, size 3, called grades
	//initialize all values to 0.0
	float grades[3] = {0.0};

	//declare an array of integers, size 4, called numbers, initialize all values to 10
	int numbers[4] = {10, 10, 10, 10};
	
	//declate an array of integers, size 5, called numbers2, initialize to various values
	int numbers2[] = {2,4,6,7,8};
	
	cout<<"The values in the grades array:\n";
	//use a for loop to display array values
	for(int i = 0; i < 3; i++)
	{
		cout<<grades[i]<<" ";
				
	}

	cout<<endl;
	
	cout<<"\nThe values in the numbers array:\n";
	//use a for loop to display array values
	for(int i = 0; i < 4; i++)
	{
		cout<<numbers[i]<<" ";
				
	}

	cout<<endl;
	
	cout<<"\nThe values in the numbers2 array:\n";
	//use a for loop to display array values
	for(int i = 0; i < 5; i++)
	{
		cout<<numbers2[i]<<" ";
				
	}
	cout<<endl;
	
	//use a for loop to prompt for the values in the grades array
	for(int i = 0; i < 3; i++)
	{
		//prompt
		cout<<"Enter grade "<<i + 1<<": ";
		cin>>grades[i];
	}
	
	//display the second grade
	cout<<"The second grade you entered is "<<grades[1]<<endl;
	
	


//return 0;
}
