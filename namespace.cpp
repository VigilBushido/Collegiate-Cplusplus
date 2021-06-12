//Filename: namespace3
//author: Sergio Munguia
//Last Modified : 1/10/2011

#include <iostream>
using namespace std;

namespace myspace
{
    double value = 3.14159;
}

int main()
{
    cout << myspace::value << endl; //outputs 3.14159
    return 0;
}
