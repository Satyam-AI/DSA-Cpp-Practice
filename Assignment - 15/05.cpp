// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] == a[i+1])
            return a[i];
    }
    return -1;
}

int findDuplicate2(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] == a[i+1])
            return a[i];
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << findDuplicate2(a, n);
    return 0;
}