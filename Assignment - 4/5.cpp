// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 10; i >= 1; i--)
        cout << (i * 2 - 1) << endl;
    return 0;
}