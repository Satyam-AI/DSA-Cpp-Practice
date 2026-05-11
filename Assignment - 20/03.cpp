// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include <bits/stdc++.h>
using namespace std;

void sortArray(int *ptr, int size)
{
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-1-i; j++)
        {
            if(*(ptr+j) > *(ptr+j+1))
            {
                int temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
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