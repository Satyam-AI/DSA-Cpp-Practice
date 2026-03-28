// 5. Write a program to check whether two given numbers are co-prime numbers or not

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, gcd = 0;
    cin>>a>>b;

    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b %i == 0)
            gcd = i;
    }
    if (gcd == 1)
        cout << "Co-Prime Numbers";
        else
        cout << "Not Co-Prime";
    return 0;
}