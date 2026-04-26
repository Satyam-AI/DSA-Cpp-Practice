// 7. Write a program to find second largest in an array.Take array values from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int largest = a[0], second_largest = a[1];
    if (second_largest > largest)
        swap(a[1], a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            second_largest = largest;
            largest = a[i];
        }
        else if (a[i] > second_largest && a[i] != largest)
        {
            second_largest = a[i];
        }
    }
    cout << second_largest;
    return 0;
}