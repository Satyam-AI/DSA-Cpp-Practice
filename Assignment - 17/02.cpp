// 2. Write a program to count the occurrence of a given character in a given string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch;
    cin >> s >> ch;
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ch)
            count++;
    }
    cout << count;
    return 0;
}