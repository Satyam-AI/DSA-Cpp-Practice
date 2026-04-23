// 8. Write a function in C to print all unique elements in an array

#include <bits/stdc++.h>
using namespace std;

void printUnique(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }
        if(count == 1)
            cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    printUnique(a, n);
    return 0;
}