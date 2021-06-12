//
//  pointer.cpp
//  
//
//  Created by Sergio Mac on 1/24/16.
//
//

#include <iostream>
using namespace std;

int main()
{
//    int var1;
//    cout << "address of var 1 variable: ";
//    cout << &var1 << endl;
//    
//    int i ;
//    int *p;
//    
//    cout<<&i<<endl;
//    cout<<p<<endl;
//    cout<<&p<<endl<<endl;
//    
//    i=90;
//    p = &i;
//    
//    cout<<i<<endl;
//    cout<<(*p)<<endl;
    
    int x = 90;
    int a = 100;
    cout << "address of x "<< &x << " address of a "<< &a << " and the address of declared int pointer: ";
    int *p; // incompatible int with != p = x
    cout << &p << endl;
    int &y = x;
    p = &a;
    cout << "value pointed to by pointer p " << *p << endl;
    cout << "address of contents of p " << p << endl;
    
    
    return 0;
}