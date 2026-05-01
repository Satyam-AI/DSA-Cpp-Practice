// 1. Write a program to calculate the length of the string. (without using built-in method)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
        count++;
    cout << count;
    return 0;
}