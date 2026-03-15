// 3. Write a program to calculate sum of first N odd natural numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, sum = 0;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1);
    }
    cout << sum;
    return 0;
}