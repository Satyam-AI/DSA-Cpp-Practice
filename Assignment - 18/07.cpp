// 7. Write a function to check whether a given string is palindrome or not.

#include <bits/stdc++.h>
using namespace std;

void palindrome_check(string s)
{
    string p = s;
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev = rev + s[i];
    }

    if (p == rev)
    {
        cout << "String is palindrome";
    }
    else
    {
        cout << "String is not palindrome";
    }
    return;
}
int main()
{
    string s;
    cin >> s;
    palindrome_check(s);
    return 0;
}