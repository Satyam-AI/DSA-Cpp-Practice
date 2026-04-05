// 9. Write a program in C to count the digits of a given number using recursion.

#include <bits/stdc++.h>
using namespace std;

int digitcount(int n, int count)
{
    if (n == 0)
        return count;

    return digitcount(n / 10, count + 1);
}

int digitcount2(int n, int count)
{
    if (n == 0)
        return count;

    return digitcount2(n / 10, count + 1);
}

int main()
{
    int n, count;
    cin >> n;
    cout << digitcount(n, 0);
    cout << digitcount2(n, 0);
    return 0;
}