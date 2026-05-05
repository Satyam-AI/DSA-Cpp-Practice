// 1. Write a function to calculate length of the string

#include <bits/stdc++.h>
using namespace std;

int cal_length(string s)
{
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    string s;
    cin >> s;
    cout<<cal_length(s);
    return 0;
}