//
//  simple.cpp
//  
//
//  Created by Sergio Mac on 1/24/16.
//
//

#include <iostream>
#include <iomanip>
#include <stdbool.h>
using namespace std;

int main()
{
    int a = 0;
    bool response = a;
    char character = 'A';
    int integer = 123.456789;
    float single_precision_number = 1234.567890123456789;
    double double_precision_number = 1234.567890123456789;
    
    cout<<"response =  "<< response <<endl;
    cout<<"character =  "<< character <<endl;
    cout<<"integer =  "<< integer <<endl;
    cout<<"single_precision_number =  "<< setprecision (7)
    <<single_precision_number<<endl;
    cout<<"double_precision_number =  "<< setprecision (16)
    <<double_precision_number<<endl;
    
    return 0;
}
