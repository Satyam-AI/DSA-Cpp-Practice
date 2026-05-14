// 10. Write a program to print a string in reverse using a pointer

#include <bits/stdc++.h>
using namespace std;

void reversestring(string *s)
{
    for (int i = (*s).length() - 1; i >= 0; i--)
    {
        cout << (*s)[i];
    }
}
int main()
{
    string s;
    cin >> s;
    reversestring(&s);
    return 0;
}