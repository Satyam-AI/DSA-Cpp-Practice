// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include <bits/stdc++.h>
using namespace std;

int findMin(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << findMin(a, n);
    return 0;
}