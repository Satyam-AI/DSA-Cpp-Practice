// 8. Write a program to check whether the given number is even or odd using a bitwise operator.

// Logic: Check n & 1. If result is 1, number is odd. If 0, even.


#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    if (n & 1)
        cout << "number is odd";
    else
        cout << "number is even";
    return 0;
}