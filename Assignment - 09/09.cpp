// 9. Program to Convert even number into its upper nearest odd number Switch Statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n % 2 == 0)
    {
    case 1:
        cout << n + 1;
        break;
    case 0:
        cout << n;
    }

    return 0;
}