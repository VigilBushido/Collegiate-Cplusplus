//
#include<iostream>
using namespace std;
int main()

{ 
double MayRainfall;
cout<<"enter the rainfall for May:";
cin>>MayRainfall;

double JuneRainfall;
cout<<"enter the rainfall for June:";
cin>>JuneRainfall;

double JulyRainfall;
cout<<"enter the rainfall for July:";
cin>>JulyRainfall;

double sum=MayRainfall+JuneRainfall+JulyRainfall;
double averageRainfall=sum/3.0;
cout<<"the average rainfall for months May,June, and July is:"<<averageRainfall<<endl;
}
return 0;

