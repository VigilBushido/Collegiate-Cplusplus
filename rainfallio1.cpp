//
#include<iostream>
#include<fstream>
using namespace std;
int main()

{ 
Ifstream in;
in.open("rainfall.txt")
double MayRainfall;
cout<<"enter the rainfall for May:"<<endl;
cin>>MayRainfall;

double JuneRainfall;
cout<<"enter the rainfall for June:"<<endl;;
cin>>JuneRainfall;

double JulyRainfall;
cout<<"enter the rainfall for July:"<<endl;
cin>>JulyRainfall;

double sum=MayRainfall+JuneRainfall+JulyRainfall;
double averageRainfall=sum/3.0;
cout<<"writing sum and average rainfall to an output file_"<<endl;
ofstream out
out.open(*result.txt*);
out<<"the sum is"<<sum<<enld:
out<<"the average rainfall is"<<sum<<endl:
out<<"the average rainfall is"<<averageRainfall<<endl;

in.close();


return 0;

