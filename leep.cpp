#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter a year : ";
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100!=0))
    cout << "leep year";
    else
       cout << "not a leep year";
       return 0;
} 