// 14. Write a program to check whether a given number is  divisible by 7 or divisible by 3

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cin >> num;

    if (num % 7 == 0 && num % 3 == 0)
        cout << "divisible by both 7 and 3";
    else if (num % 7 == 0)
        cout << "divisible by 7";
    else if (num % 3 == 0)
        cout << "divisible by 3";
    else
        cout << "not divisible by 7 or 3";
    return 0;
}