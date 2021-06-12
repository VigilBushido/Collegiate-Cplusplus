//
//  PtrsAndRefsExp1.cpp
//  
//
//  Created by Sergio Mac on 1/24/16.
//
//

#include <iostream>
using namespace std;

int main()
{
    int i;
    int *p;
    
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<&p<<endl<<endl;
    
    i=90;
    p = &i;
    
    cout<<i<<endl;
    cout<<(*p)<<endl;
    
    return 0;
}
