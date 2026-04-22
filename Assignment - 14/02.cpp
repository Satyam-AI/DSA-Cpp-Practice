// 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], average, sum = 0;
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    average = sum / 10;
    cout << average;
    return 0;
}