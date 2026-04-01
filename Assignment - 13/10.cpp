// 10. Write a program in C to calculate the power of any number using recursion.

#include <bits/stdc++.h>
using namespace std;

int powerofnum(int i, int base, int power, int num)
{
    if (i > power)
        return num;

    return powerofnum(i + 1, base, power, num * base);
}

int main()
{
    int base, power;
    cin >> base >> power;
    cout << powerofnum(1, base, power, 1);
    return 0;
}