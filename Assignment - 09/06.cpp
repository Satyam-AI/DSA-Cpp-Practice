// 6. Program to check whether a year is a leap year or not. Using switch statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    switch (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
    case 1:
        cout << "Leap year";
        break;
    case 0:
        cout << "Not leap year";
        break;
    }

    return 0;
}