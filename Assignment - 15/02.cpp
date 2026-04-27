// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include <bits/stdc++.h>
using namespace std;

int smallest_number(int a[], int n)
{
    int smallest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    return smallest;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << smallest_number(a, n);
    return 0;
}