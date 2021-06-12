//program to demonstrate random number generator

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
  int myRandom = 0;

  srand(time(NULL)); //seed random number generator

  //generate a random number from 1 to 10
  
  myRandom = rand()%10 + 1; 
  
  //display the random number
  cout<<"Random number = "<<myRandom<<endl;

  return 0;
}
