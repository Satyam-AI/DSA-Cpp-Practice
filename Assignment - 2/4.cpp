
// 4. Write a program to swap values of two int variables without using a third variable.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
    return 0;
}