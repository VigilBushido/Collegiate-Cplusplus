//talent.cpp
//March 19. 2014
//Thid program uses modularization to create a program that gets 5 judge scores for a 
//competition. The program then calculates the average score after dropping the highest and lowest scores.
#include<iostream>
#include<iomanip>
using namespace std;

//function prototypes
//return type: float
//parameters: 5 floats by value
//purpose: This function calculates and returns the lowest of the 5 values.
float FindLowest(float, float, float, float, float);

//return type: float
//parameters: 5 floats by value
//purpose: This function calculates and returns the highest of the 5 values.
float FindHighest(float, float, float, float, float);

//return type: float
//parameters: 5 floats by value
//purpose: This function finds the average of five numbers after dropping the highest and lowest
float CalculateAverage(float, float, float, float, float);

//return type: void
//parameters: 1 float by reference
//purpose: This function prompts the user for a score and then validates that the score is between 0 and 10.
void GetJudgeData(float &);

int main()
{
	//declare variables
	float score1 = 0.0, score2 = 0.0, score3 = 0.0, score4 = 0.0, score5 = 0.0;
	float averageScore = 0.0;
	cout<<"WELCOME TO THE TALENT COMPETITION!!\n\n";
	
	//call(invoke) functions
	GetJudgeData(score1);
	GetJudgeData(score2);
	GetJudgeData(score3);
	GetJudgeData(score4);
	GetJudgeData(score5);
	
	//store averageScore
	averageScore = CalculateAverage(score1, score2, score3, score4, score5);
	cout<<fixed<<showpoint<<setprecision(1);
	cout<<"\nAverage Score after dropping highest and lowest: "<<averageScore<<endl;

 
 
 return 0;
}
//function definitions
//purpose: This function calculates and returns the lowest of the 5 values.
float FindLowest(float num1, float num2, float num3, float num4, float num5)
{
	//local variable
	float low = num1;

	//compare values to low
	if(num2 < low)
		low = num2;
	
	if(num3 < low)
		low = num3;
		
	if(num4 < low)
		low = num4;
	
	if(num5 < low)
		low = num5;
		
	return low;
	
}

//purpose: This function calculates and returns the highest of the 5 values.
float FindHighest(float num1, float num2, float num3, float num4, float num5)
{
	//local variable
	float high = num1;

	//compare values to high
	if(num2 > high)
		high = num2;
	
	if(num3 > high)
		high = num3;
		
	if(num4 > high)
		high = num4;
	
	if(num5 > high)
		high = num5;
		
	return high;
	
}

//purpose: This function finds the average of five numbers after dropping the highest and lowest
float CalculateAverage(float sc1, float sc2, float sc3, float sc4, float sc5)
{
	//local variables
	float lowest = 0.0;
	float highest = 0.0;
	float average = 0.0;
	
	lowest = FindLowest(sc1, sc2, sc3, sc4, sc5);
	highest = FindHighest(sc1, sc2, sc3, sc4, sc5);
	
	average = (sc1 + sc2 + sc3 + sc4 + sc5 - lowest - highest) / 3;
	
	return average; 

}

//purpose: This function prompts the user for a score and then validates that the score is between 0 and 10.
void GetJudgeData(float &score)
{	do
	{
	cout<<"Enter a score: ";
	cin>>score;
	if(score < 0 || score > 10)
	{
		cout<<"Invalid.  Score must be between 0 and 10.\n";
	}
	}
	while(score < 0 || score > 10);

}
