// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include <bits/stdc++.h>
using namespace std;

void sortarray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                swap(ptr[j], ptr[j + 1]);
            }
        }
    }
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    sortarray(a, 10);
    for (int i = 0; i < 10; i++)
        cout << a[i]<<" ";
    return 0;
}
