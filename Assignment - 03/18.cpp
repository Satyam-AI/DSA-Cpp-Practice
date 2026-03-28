/* 18. Write a program which takes the month number as an input and display number of
days in that month
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if ((num == 1) || (num == 3) || (num == 5) || (num == 7) || (num == 8) || (num == 10) || (num == 12))
        cout << "Total number of days is 31";
    else if (num == 2)
        cout << "Either 28 or 29 days";
    else
        cout << "Total number of days is 30";
}