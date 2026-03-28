// 2. Write a program to check whether a given number is divisible by 5 or not

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int num = n % 10;

    if (num == 0 || num == 5)
        cout << n << " is divisible by 5";
    else
        cout << n << " is not divisible by 5";
    return 0;
}
