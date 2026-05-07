// 1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[5];

    for(int i = 0; i < 5; i++)
        cin >> s[i];

    for(int i = 0; i < 5; i++)
    {
        int count = 0;

        for(int j = 0; s[i][j] != '\0'; j++)
        {
            char c = s[i][j];

            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                count++;
        }

        cout << s[i] << " -> " << count << "\n";
    }

    return 0;
}