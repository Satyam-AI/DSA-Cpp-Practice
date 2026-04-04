// 8. Write a program to find the second smallest number in an array.Take array values from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << a[1];
    return 0;
}