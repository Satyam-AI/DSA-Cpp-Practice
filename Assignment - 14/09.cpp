// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";

    return 0;
}