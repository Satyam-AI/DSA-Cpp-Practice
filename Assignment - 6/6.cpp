// 6. Write a program to calculate factorial of a number

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, factorial = 1;
    cin >> n;
    for (int i = n; i >= 1; i--){
        factorial = factorial* i;}
    cout << factorial;
    return 0;
}