// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int alphabets = 0, digits = 0, special = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z'))
            alphabets++;
        else if (s[i] >= '0' && s[i] <= '9')
            digits++;
        else
            special++;
    }
    cout << "Alphabets=" << alphabets << "\n";
    cout << "Digits=" << digits << "\n";
    cout << "Special=" << special;
    return 0;
}