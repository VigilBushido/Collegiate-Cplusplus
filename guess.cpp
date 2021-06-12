#include <iostream>
using namespace std;

int main()
{
int randomNumber, userGuess;
	//step 1 
	unsigned seed = time(0);
	srand(seed);
	randomNumber = rand() % 100+1; //between 1 and a hundred
	//step 2
	cout <<"enter an integer (1-100):"<< endl;
	while(userGuess !=randomNumber) 
	{
	cin >> userGuess;
	if (!cin) {
		cout << "error. not an integer."<< endl;
		cin.clear(); //restore cin to good status
		cin.ignore(1000,'\n');//clear the input buffer
	cout << "enter an integer (1-100)" << endl;
	cin >> userGuess;
	}
	if (userGuess<1||userGuess > 100)
	{
	cout << "invalid. must be between 1-100." << endl;
	exit (EXIT_FAILURE);
	}
	if (userGuess > randomNumber)
	{
	cout << "too high" << endl;
	}
	else if (userGuess==randomNumber)
	{
	cout << "wonderful. you got it" << endl;
	}
	else {
	cout << "too low" << endl;
	}
}
return 0;
}
