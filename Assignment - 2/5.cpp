// 5. Write a program to input a three-digit number and display the sum of the digits.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int sum;
    cin >> n;
    int d1 = n / 100;
    int d2 = (n / 10) % 10;
    int d3 = n % 10;
    sum = d1 + d2 + d3;
    cout << sum;
    return 0;
}