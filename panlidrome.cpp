#include <string>
#include <iostream>

using namespace std;

int main() 
{

	string str;
	 
	cout << "please enter a string: ";
	cin >> str;
	
	cout << endl;
	cout >> "the length of your string is: " << str.length() << endl;
	int counter = 0;
	for (counter = 0; counter < str. length(); counter++)
	{
		if (str[counter] != str[str.length() -1 - counter]) {
			error++;
			}
		}
	if (error ==0) {
		cout <<"the word is a panlidrome." <<endl;
	} else {
		cout <<"the word is not a panlidrome." << endl;
	}
	return 0;
}
