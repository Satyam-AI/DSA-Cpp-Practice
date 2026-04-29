// 7. Write a function in C to count a total number of duplicate elements in an array

#include <bits/stdc++.h>
using namespace std;

int count_duplicate(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << count_duplicate(a, n);
    return 0;
}