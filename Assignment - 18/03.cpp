// 3. Write a function to compare two strings.

#include <bits/stdc++.h>
using namespace std;

void compare_string(string s, string x)
{
    if (s == x)
        cout << "Equal string";
    else
        cout << "Not Equal";
}
int main()
{
    string s, x;
    cin >> s>>x;
    compare_string(s, x);
    return 0;
}