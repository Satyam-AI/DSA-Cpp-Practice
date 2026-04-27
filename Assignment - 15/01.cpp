// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include <bits/stdc++.h>
using namespace std;

int greatest_number(int a[], int n)
{
    int greatest = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > greatest)
        {
            greatest = a[i];
        }
    return greatest;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << greatest_number(a, n);
    return 0;
}