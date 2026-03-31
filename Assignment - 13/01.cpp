// 1. Write a recursive function to calculate sum of first N natural numbers

#include <bits/stdc++.h>
using namespace std;

int printsum(int sum, int n)
{
    if (n == 0)
        return sum;

    return printsum(sum + n, n - 1);
}


int printsum2(int n)
{
    if (n  1)
        return 0;

    return n + printsum2(n - 1);
}


int main()
{
    int n;
    cin >> n;
    cout << printsum2(n);
    return 0;
}