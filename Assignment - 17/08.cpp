//  8. Write a program in C to copy one string to another string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        a = a + s[i];
    }
    cout << a;
    return 0;
}