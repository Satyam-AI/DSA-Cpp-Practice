// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include <bits/stdc++.h>
using namespace std;

int checkDigit(int n, int d)
{
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == d)
            return 1;
        n = n / 10;
    }
    return 0;
}

int main()
{
    int n, d, result;
    cin >> n >> d;
    result = checkDigit(n, d);
    cout << result;
    return 0;
}