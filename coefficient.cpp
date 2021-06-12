#include <cmath>
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double a, b, c;
	a = b = c = 0.0;
	ifstream input;
	double x1, x2;
	
	input.open("coefficient.txt")
	if (!input)
		{ cout << "Error. Cannot Open File For Reading." << endl;
		exit (EXIT_FAILURE);
	}
while (input>>a>>b>>c)
{
if (b*b-4*a*c>0)
	{ //two real roots
x1 = (-b + sqrt (b*b-4*a*c))/(2*a);
x2 = (-b-sqrt(b*b-4*a*c))/(2*a);

	cout << "root 1 is: " << x1 <<endl;
	cout << "root 2 is: " << x2 <<endl;
}
else if (fabs (b*b-4*a*c)<0.000001)
	{// one real root
	x1 = (-b)/(2*a);
	cout << "only one root: " << x1 << endl;
	}
else { // no real root
	cout <<"no real roots" << endl;
	}
return 0;
}
}
