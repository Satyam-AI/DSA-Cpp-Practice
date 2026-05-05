// 2. Write a function to reverse a string.

#include <bits/stdc++.h>
using namespace std;

string string_reverse(string s)
{
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev = rev + s[i];
    }
    return rev;
}

int main()
{
    string s;
    cin >> s;
    cout << string_reverse(s);
    return 0;
}