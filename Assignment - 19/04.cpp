// 4. Write a program to search a string in the list of strings.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[5], target;
    int found = 0;

    for(int i = 0; i < 5; i++)
        cin >> s[i];

    cin >> target;

    for(int i = 0; i < 5; i++)
    {
        if(s[i] == target)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}