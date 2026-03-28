/* 16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.
*/
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
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Special Character";
    return 0;
}