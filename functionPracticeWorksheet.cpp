//functionPracticeWorksheet.cpp
//March 12, 2014
//This program demonstrates both value returning and void functions.

#include<iostream>
using namespace std;

//function prototypes

//return type: void
//Parameters: 1 int (n)
//Purpose: This function prints n lines of 5 stars each.
void PrintNLines(int);

//return type: float
//Parameters: 2 floats(length and width of rectangle)
//Purpose: This function returns the area of a rectangle.
float RectangleArea(float,float);

//return type: bool
//Parameters: 1 int (n)
//Purpose: This function returns whether or not n is even.
bool IsEven(int);

//return type: int
//Parameters: 2 ints(i,j)
//Purpose: This function returns the sum of the integers from i to j.
int Sum(int, int);

//return type: char
//Parameters: 1 float(numeric grade)
//Purpose: This function returns the letter grade that corresponds to a numeric test grade from 1 to 100.
char LetterGrade(float);

int main()
{
	//declare and initialize variables
	int num = 0, start = 0, end = 0;
	float length = 0.0, width = 0.0, area = 0.0;
	float numberGrade = 0.0;
	char letter = ' ';

	//test PrintNLines function
	cout<<"Enter the number of lines that you want to see: ";
	cin>>num;
	
	//call function
	PrintNLines(num);
	
	//call function call again to show 10 lines
	cout<<endl;
	
	PrintNLines(10);
	
	//test RectangleArea function
	//prompt the user for length and width
	cout<<endl;
	cout<<"Enter the length of a rectangle: ";
	cin>>length;
	cout<<"Enter the width of a rectangle: ";
	cin>>width;
	
	//display the area of the user's rectangle
	cout<<"\nYour rectangle has area = "<<RectangleArea(length, width)<<endl;
	
	//store the area of the user's rectangle in area
	area = RectangleArea(length, width);
	
	//test
	cout<<"\narea = "<<area<<endl;
	
	//display the area of a rectangle with dimensions 5 x 7
	cout<<"\nThe area of a rectangle with length 5 and width 7 = "<<RectangleArea(5,7)<<endl;
	
	//test IsEven function
	//prompt the user for a number
	cout<<"\nEnter a number to test for even/odd: ";
	cin>>num;
	
	if(IsEven(num)==true)
	{
		cout<<num<<" is even.\n";
	}
	else
	{
		cout<<num<<" is odd.\n";
	}
	
	cout<<endl;
	
	//display whether or not 12 is even
	if(IsEven(12))
		cout<<"\n12 is even.\n";
	else
		cout<<"\n12 is odd.\n";
	
	//test Sum function
	//prompt for start and end
	cout<<"\nEnter a starting value: ";
	cin>>start;
	cout<<"\nEnter an ending value: ";
	cin>>end;
	
	//call Sum function to display the sum of the numbers from start to end
	cout<<"The sum of the numbers from "<<start<<" to "<<end<<" = "<<Sum(start, end)<<endl;
	
	//call Sum function to display the sum of the numbers from 3 to 8
	cout<<"The sum of the numbers from 3 to 8 = "<<Sum(3,8)<<endl;
	
	//Test LetterGrade function
	//prompt for number grade
	do
	{
	cout<<"Enter a grade from 1 to 100: ";
	cin>>numberGrade;
	if(numberGrade < 1 || numberGrade > 100)
		cout<<"Invalid.  Grade must be between 1 and 100.\n";
	}
	while	(numberGrade < 1 || numberGrade > 100);

	//store the user's letter grade in letter
	letter = LetterGrade(numberGrade);
	
	//display letter on screen to test
	cout<<"\nYour letter grade = "<<letter<<endl;
	
	//display the letter grade that corresponds to the score 75
	cout<<"The letter grade that corresponds to the score 75 = "<<LetterGrade(75)<<endl;
	
		

 return 0;
}

//function definitions
//Purpose: This function prints n lines of 5 stars each.
void PrintNLines(int n)
{
	for(int i = 1; i <= n; i++)
	{
		cout<<"*****\n";
	}
}

float RectangleArea(float l,float w)
{	
	 return l * w;
}

//Purpose: This function returns whether or not n is even.
bool IsEven(int n)
{
	if(n % 2 == 0)
		return true;
	else
		return false;
}

//Purpose: This function returns the sum of the integers from i to j.
int Sum(int i, int j)
{	//declare a local variable
	int total = 0;
	for(int n = i; n <= j; n++)
	{
		total += n;
	}
	return total;
}

//Purpose: This function returns the letter grade that corresponds to a numeric test grade from 1 to 100.
char LetterGrade(float grade)
{	
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else
		return 'F';	

}
