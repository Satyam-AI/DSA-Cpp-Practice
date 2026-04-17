// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], greatest;

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    greatest = a[0];

    for (int i = 1; i < 10; i++)
    {
        if (a[i] > greatest)
            greatest = a[i];
    }

    cout << greatest;
    return 0;
}

int main2()
{
    int a[10], greatest;

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    greatest = a[0];

    for (int i = 1; i < 10; i++)
    {
        if (a[i] > greatest)
            greatest = a[i];
    }

    cout << greatest;
    return 0;
}