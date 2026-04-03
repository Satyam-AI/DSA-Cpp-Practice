// 6. Write a recursive function to calculate factorial of a given number

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * (fact(n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}