// 10. Write a program in C to Find the Frequency of Characters.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        bool already_counted = false;

        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                already_counted = true;
                break;
            }
        }

        if (already_counted)
            continue;

        int count = 0;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[i] == s[j])
                count++;
        }

        cout << s[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}