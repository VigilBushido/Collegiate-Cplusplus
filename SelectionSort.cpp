//
//  SelectionSort.cpp
//  
//
//  Created by Sergio Mac on 7/1/16.
//
//
#include <iostream>
#include <ctime>

using namespace std;
    
    int show(int random)
    {
        cout << random << endl;
        return 0;
    }
    int genRandom()
    {
        int i = 1;
        int random[26];
        srand((unsigned)time(NULL));
        for (int i = 1; i < 26; i++)
        {
            random[i] = 1+ rand() % 10;
            show (random[i]);
        }
        return random[26];
    }
    
    int main()
    {
        array = genRandom();
        cout << "This is the array" << array[2] << array[3] << "Well parts of it";
        return 0;
    }

void selectSort(int arr[], int n)
{
    //pos_min is short for position of min
    int pos_min,temp;
    
    for (int i=0; i < n-1; i++)
    {
        pos_min = i;//set pos_min to the current index of array
        
        for (int j=i+1; j < n; j++)
        {
            
            if (arr[j] < arr[pos_min])
                pos_min=j;
            //pos_min will keep track of the index that min is in, this is needed when a swap happens
        }
        
        //if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}
