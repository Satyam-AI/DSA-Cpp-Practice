/* 6. Write a program to print greater between two numbers.
Print one number of both are the same
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a;
    else if (b > a)
        cout << b;
    else
        cout << a; // for the same both
    return 0;
}