// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include <bits/stdc++.h>
using namespace std;

int adjacent_duplicate(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            return a[i];
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << adjacent_duplicate(a, n);
    return 0;
}
