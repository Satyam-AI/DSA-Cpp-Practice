// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase";
    else
        cout << "not a character";

    return 0;
}