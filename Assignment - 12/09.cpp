// 9. Write a recursive function to print octal of a given decimal number

#include <bits/stdc++.h>
using namespace std;

void number(int n)
{
    if (n == 0)
        return;
    number(n / 8);
    cout << n % 8;
}

int main()
{
    int n;
    cin >> n;
    number(n);
    return 0;
}