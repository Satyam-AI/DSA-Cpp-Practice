// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], smallest;

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    smallest = a[0];

    for (int i = 1; i < 10; i++)
    {
        if (a[i] < smallest)
            smallest = a[i];
    }

    cout << smallest;
    return 0;
}