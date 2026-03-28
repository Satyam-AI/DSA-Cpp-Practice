// 1. Write a program which takes the month number as an input and display number of days in that month.

/*

Basic Syntax:

switch(variable)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code if no case matches
}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int month;
    cin >> month;

    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days";
            break;

        case 4: case 6: case 9: case 11:
            cout << "30 days";
            break;

        case 2:
            cout << "28 or 29 days";
            break;

        default:
            cout << "Invalid month";
    }

    return 0;
}