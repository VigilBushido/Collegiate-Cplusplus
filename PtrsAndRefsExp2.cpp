//
//  PtrsAndRefsExp2.cpp
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
    int *p=0;
    int &temp=i;
    
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<&temp<<endl<<endl;
    
    i=90;
    p = &i;
    
    cout<<i<<endl;
    cout<<(*p)<<endl;
    cout<<temp<<endl;
    
    return 0;
}
