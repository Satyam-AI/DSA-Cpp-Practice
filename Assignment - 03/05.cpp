// 5. Write a program to check whether a given number is a three-digit number or not.

// Line-by-line: abs(n) makes negative numbers positive, then check range 100....999.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    n = abs(n);
    if (n>=100 && n<=999)
        cout << "Three digit number";
    else
        cout << "Not three digit number";
    return 0;
}