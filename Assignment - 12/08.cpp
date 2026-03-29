// 8. Write a recursive function to print binary of a given decimal number

#include <bits/stdc++.h>
using namespace std;

void number(int n)
{
    if (n == 0)
        return;
    number(n / 2);
    if (n % 2 == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
    // number(n / 2); (can not call function from here)
}

int main()
{
    int n;
    cin >> n;
    number(n);
    return 0;
}