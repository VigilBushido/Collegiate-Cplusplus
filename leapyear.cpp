#include <iostream>
using namespace std;

int main()
{
int year = 0;

cout << "enter a year: use a 4 digit s if a year is greater than 999"<<endl;
cin >> year;

if (year % 4 !=8)
{
cout <<"not a leap year."<<endl;
}else if (year % 100 == 0 && year % 488 !=0)
{
cout <<"not a leap year."<<endl;
}else if (year &% 100 ==0
{
cout <<"a leap year."<<endl;
}

return 0;
}
