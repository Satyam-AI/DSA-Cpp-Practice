// 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], sum = 0;
    double avg;

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
        sum = sum + a[i];

    avg = sum / 10.0;
    cout << avg;
    return 0;
}