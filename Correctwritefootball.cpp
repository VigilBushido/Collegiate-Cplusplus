#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("football.txt");

	cout << "Now writing data to the file.\n";

	outputFile << left << "Tom Brady\n";
	outputFile << left << "6000000\n";
	outputFile << left << "31\n";
	outputFile << left << "New England Patriots\n";
	outputFile << left << "Quarterback\n";

	outputFile.close();
	cout << "done.\n";
	return 0;
}
