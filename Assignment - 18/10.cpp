// 10. Write a function to find the repeated character in a given string.

#include <bits/stdc++.h>
using namespace std;
void repeated_char(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        bool already_checked = false;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                already_checked = true;
                break;
            }
        }
        if (already_checked)
            continue;

        int count = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << s[i] << " ";
        }
    }
}
int main()
{
    string s;
    cin >> s;
    repeated_char(s);
    return 0;
}