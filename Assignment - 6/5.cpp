// 5. Write a program to calculate sum of cubes of first N natural numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, sum = 0;
    cin>>n;
    for (int i = 1; i <= n; i++){
       sum += (i * i * i);}
        cout << sum;
    return 0;
}