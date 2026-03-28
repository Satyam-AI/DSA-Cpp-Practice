// 15. Write a program to check whether a given number is positive, negative or zero.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cin >> num;
    if (num > 0)
        cout << "Positive";
    else if (num < 0)
        cout << "Negative";
    else
        cout << "Zero";
    return 0;
}