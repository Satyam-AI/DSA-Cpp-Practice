// 3. Write a program to read and display a 2D array of strings in C language.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[5];

    for(int i = 0; i < 5; i++)
        cin >> s[i];

    for(int i = 0; i < 5; i++)
        cout << s[i] << "\n";

    return 0;
}