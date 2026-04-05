// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        b[i] = a[i];

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    return 0;
}

int main2()
{
    int n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        b[i] = a[i];

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    return 0;
}