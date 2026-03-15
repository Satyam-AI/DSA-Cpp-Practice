// 8. Write a program to check whether a given year is a leap year or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int year;
    cin >> year;
    if (year % 4 == 0)
        cout << "Yes, leap year";
    else
        cout << "No, not a leap year";
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year % 400 == 0)
        cout << "Leap year";
    else if (year % 100 == 0)
        cout << "Not a leap year";
    else if (year % 4 == 0)
        cout << "Leap year";
    else
        cout << "Not a leap year";
    return 0;
}