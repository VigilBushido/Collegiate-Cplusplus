//COP 1334C Classwork 4
//25 points		
//Names: 					
//Acct:
//Fill in the missing code:			
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

//return type:void
//parameters: one reference parameter: string (name)
//purpose: This function prompts the user for his/her name.
void GetName(string& name);

//return type: bool
//parameters: three value parameters: int, int, int (n, min, max))
//purpose: This function returns true if the value n is between min and max, //otherwise returns false
bool IsValidInput(int n, int min, int max);

//return type: void
//parameters: one reference parameter: int (choice)
//purpose: This function displays the following menu and prompts the user for //choice
//1) Enter your name
//2) Determine if a number is odd
//3) Square a number 
//4) Exit
void DisplayMenu(int &choice);

//return type: bool
//parameters: one value parameter: int (n)
//purpose: This function returns true if n is odd, otherwise returns false.
bool IsOdd(int n);

//return type: void
//parameters: one reference parameter: float (n)
//purpose: This function squares the value n.
void SquareN(float &n);

int main()
{	int menuChoice = 0;
	string userName = " ";
	int num1 = 0;
	float num2 = 0.0;
	do
	{
	//call a function to display a menu (1 point)
	DisplayMenu(menuChoice);
	//call a function to validate that menuChoice is between 1 and 4 (1 pt)
	if (!IsValidInput(menuChoice, 1, 4)){
		cout << "invalid.\n";}
	
	switch(menuChoice)
	{
	case 1:
		//call a function to get username (1 point)		
		GetName(userName);

		//display userName
		cout << "\nuser name: " << userName << endl;

		break;
	case 2:
		//prompt user for num1	
		cout<<"\nEnter an integer: ";
		cin>>num1;
		//call a function to display whether or not num is odd (1 point)
		if (IsOdd(num1) == true){
			cout << "\nThe number is odd\n";}
		else {
		cout << "\nThe number is even\n";} 


		break;
	case 3:
		//prompt for num2
		cout<<"\nEnter a number: ";
		cin>>num2;
		//call a function to square num2  (1 point)		
		SquareN(num2);

		//display num2 squared
		cout << "\nnumber squared: " << num2 << endl;
	

		break;
	case 4:
		cout<<"\nGood bye"<<endl;
	} //end switch
	}
	while(menuChoice!=4);

	return 0;
}
//function definitions (4 pts each)
void DisplayMenu(int &choice)
{
cout << "\n1) Enter your name\n";
cout << "2) Determine if a number is odd\n";
cout << "3) Square a number\n";
cout << "4) Exit\n";
cout << "Enter a choice: ";
cin >> choice;
}

void GetName(string &name)
{
	cout << "\nEnter Username: ";
	cin >> name;
}
bool IsValidInput(int n, int min, int max)
{
if (n < min || n > max) {
	return false; }
else {
	return true; }
}

bool IsOdd(int n)
{
if (n % 2 == 0) {
	return false; }
else {
	return true; }
}
void SquareN(float &n)
{
n = pow(n,2);
}






