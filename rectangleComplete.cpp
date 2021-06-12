//rectangle.cpp
//March 30, 2014
#include<iostream>
using namespace std;

//function prototypes
//return type: float
//parameters: none
//purpose: This function prompts for and returns a length.  Validate that the length is positive.
float GetLength();

//return type: void
//parameters: 1 float by ref
//purpose: This function prompts for a width and validates that the width is positive.
void GetWidth(float &w);

//return type: float
//parameters: 2 floats by val
//purpose: This function returns the perimeter of the given rectangle.
float RectanglePerimeter(float l, float w);

//return type: void
//parameters: 2 floats by val and 1 float by ref
//purpose: This function calculates the area of the given rectangle.
void RectangleArea(float l, float w, float &a);

//return type: void
//parameters: 2 floats by val 
//purpose: This function displays the area and perimeter of the given rectangle.
void DisplayData(float a, float p);

int main()
{
	float mylength = 0.0, mywidth = 0.0, myperimeter = 0.0, myarea = 0.0;
	
	//call GetLength
	mylength = GetLength();
	
	//call GetWidth
	GetWidth(mywidth);
	
	//call RectanglePerimeter
	myperimeter = RectanglePerimeter(mylength, mywidth);
	
	//call RectangleArea
	RectangleArea(mylength, mywidth, myarea);
	
	//call DisplayData
	DisplayData(myarea, myperimeter);
	
	
	
	


return 0;
}

//function definitions
//purpose: This function prompts for and returns a length.  Validate that the length is positive.
float GetLength()
{	//declare a local variable
	float l;
	do
	{
	cout<<"Enter a length:";
	cin>>l;
	if(l <= 0)
		cout<<"Invalid.  Length must be positive.\n";
	}
	while(l <= 0);
	
	return l;
		
}
//purpose: This function prompts for a width and validates that the width is positive.
void GetWidth(float &w)
{
	do
	{
	cout<<"Enter a width:";
	cin>>w;
	if(w <= 0)
		cout<<"Invalid.  Width must be positive.\n";
	}
	while(w <= 0);
	

}

//purpose: This function returns the perimeter of the given rectangle.
float RectanglePerimeter(float l, float w)
{
	return 2 * l + 2 * w;
}

//purpose: This function calculates the area of the given rectangle.
void RectangleArea(float l, float w, float &a)
{
	a = l * w;
}

//purpose: This function displays the area and perimeter of the given rectangle.
void DisplayData(float a, float p)
{
	cout<<"Area = "<<a<<" square units.\n";
	cout<<"Perimeter = "<<p<<" units.\n";
}
