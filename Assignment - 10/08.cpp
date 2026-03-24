// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

long long arrangement(int n, int r)
{
    long long ans;
    ans = factorial(n) / factorial(n - r);
    return ans;
}

int main()
{
    int n, r;
    long long result;
    cin >> n >> r;
    result = arrangement(n, r);
    cout << result;
    return 0;
}