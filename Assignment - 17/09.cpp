// 9. Write a C program to sort a string array in ascending order.

//solving using bubble sort

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        for (int j = 0; j < s.length() - 1 - i; j++)
        {
            if (s[j] > s[j + 1])
            {
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    cout << s;
    return 0;
}