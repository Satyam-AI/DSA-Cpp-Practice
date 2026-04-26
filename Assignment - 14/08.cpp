// 8. Write a program to find the second smallest number in an array.Take array values from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int smallest = a[0], second_smallest = a[1];
    if (smallest > second_smallest)
        swap(a[0], a[1]);
    for (int i = 0; i < n; i++)
        if (a[i] < smallest)
        {
            second_smallest = smallest;
            smallest = a[i];
        }
        else if (a[i] > smallest && a[i] < second_smallest)
        {
            second_smallest = a[i];
        }
    cout << second_smallest;
    return 0;
}