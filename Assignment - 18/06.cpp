// 6. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)

#include <bits/stdc++.h>
using namespace std;

void alphanumeric(string s)
{
    int alpha_count = 0;
    int digit_count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            alpha_count++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digit_count++;
        }
    }
    if (alpha_count > 0 && digit_count > 0)
    {
        cout << "Alphanumeric string";
    }
    else
    {
        cout << "Not Alphanumeric string";
    }
    return;
}
int main()
{
    string s;
    cin >> s;
    alphanumeric(s);
    return 0;
}