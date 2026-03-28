// 8. Write a program to check whether a given number is a Prime number or not

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int count = 0;
    cin >> n;

    if (n <= 1)
    {
        cout << "not prime";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        cout << "Prime number";
    else
        cout << "Not Prime";
    return 0;
}