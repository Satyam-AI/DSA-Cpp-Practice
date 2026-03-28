// 7. Write a program to find the position of first 1 in LSB.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    if (n < 0)
        n = -n;
    int pos = 1;
    while ((n & 1) == 0)
    {
        n = n >> 1;
        pos = pos + 1;
    }
    cout << pos;
    return 0;

}