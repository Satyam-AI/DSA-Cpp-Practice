// 9. Write a program to print the elements of an array in reverse order.

#include <bits/stdc++.h>
using namespace std;

void reversearray(int *a, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i]<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    reversearray(a, n);
    return 0;
}
