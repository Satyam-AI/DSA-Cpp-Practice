// 6. Write a function to calculate the factorial of a number. (TSRS)

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

int main()
{
    int n;
    long long result;
    cin >> n;
    result = factorial(n);
    cout << result;
    return 0;
}