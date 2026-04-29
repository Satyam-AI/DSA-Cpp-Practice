// 6. Write a function in C to read n number of values in an array and display it in reverse order.

#include <bits/stdc++.h>
using namespace std;

int reverse(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, n);
    return 0;
}