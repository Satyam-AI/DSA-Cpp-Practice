// 6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < 10; i++)
        cout << arr[i] << endl;
    return 0;
}

int main2()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < 10; i++)
        cout << arr[i] << endl;
    return 0;
}