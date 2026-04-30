// 9. Write a function in C to merge two arrays of the same size sorted in descending order.

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int n)
{
    int c[2 * n];
    for (int i = 0; i < n; i++)
        c[i] = a[i];

    for (int i = 0; i < n; i++)
        c[n + i] = b[i];

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = i + 1; j < 2 * n; j++)
        {
            if (c[i] < c[j])
                swap(c[i], c[j]);
        }
    }

    for (int i = 0; i < 2 * n; i++)
        cout << c[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    merge(a, b, n);
    return 0;
}
