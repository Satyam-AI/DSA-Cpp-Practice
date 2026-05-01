//  3. Write a program to count vowels in a given string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;
    }

    cout << count;

    return 0;
}