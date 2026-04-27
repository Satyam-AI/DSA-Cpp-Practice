// 3. Write a function to sort an array of any size. (TSRS)

#include <bits/stdc++.h>
using namespace std;

int* sort_an_array(int a[], int n)
{
    for(int i =0; i<n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i; i < n; i++)
        cin >> a[i];
    cout << sort_an_array(a, n);
    return 0;
}