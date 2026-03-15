// 3. Write a program to check whether a given number is an even number or an odd number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is a even number";
    else
        cout << n << " is a odd number";

    return 0;
}