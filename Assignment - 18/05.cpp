// 5. Write a function to transform a string into lowercase

#include <bits/stdc++.h>
using namespace std;

string transform_lowercase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    cout << transform_lowercase(s);
    return 0;
}