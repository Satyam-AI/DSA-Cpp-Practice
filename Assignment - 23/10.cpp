// 10. Write a C++ program to add all the numbers of an array of size 10

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum;
    return 0;
}