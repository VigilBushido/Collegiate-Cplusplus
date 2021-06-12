/*
 *  forloop.cpp
 *  
 *
 *  Created by Sergio Mac on 2/18/14.
 *  Copyright 2014 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <=4; i++) 
	{
		for (int j = 1; j <= i; j++) 
		{
			cout <<"#"<<" ";
			for (int k = 1; k <= j ; k++) {
				cout << "K";
			}
		}
	cout << endl;
	}
	return 0;
}
