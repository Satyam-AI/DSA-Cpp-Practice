// 3. Write a function to sort an array of any size. (TSRS)

#include <bits/stdc++.h>
using namespace std;

void sortArray(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sortArray(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}