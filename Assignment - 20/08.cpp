// 8. Write a program to compute the sum of all elements in an array using pointers.

#include <bits/stdc++.h>
using namespace std;

void sumarray(int *ptr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }
    cout << sum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sumarray(a, n);
    return 0;
}