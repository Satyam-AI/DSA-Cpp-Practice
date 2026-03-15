// 1. Write a program to find the Nth term of the Fibonnaci series.

// 0 1 1 2 3 5 8 13 start with 0 and 1
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, a = 0, b = 1, c;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << a;
    return 0;
}
