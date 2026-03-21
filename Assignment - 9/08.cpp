// 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n > 0)
    {
    case 1:
        cout << -n;
        break;
    case 0:
        cout << -n;
    }

    return 0;
}