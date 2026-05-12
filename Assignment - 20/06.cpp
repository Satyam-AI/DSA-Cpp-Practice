// 6. Write a program to calculate the length of the string using a pointer

#include <bits/stdc++.h>
using namespace std;

int stringlength(string *s)
{
    int length = 0;
    for (int i = 0; (*s)[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    string s;
    cin >> s;
    cout << stringlength(&s);
    return 0;
}