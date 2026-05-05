// 4. Write a function to transform string into uppercase

#include <bits/stdc++.h>
using namespace std;

string transform(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    cout << transform(s);
    return 0;
}