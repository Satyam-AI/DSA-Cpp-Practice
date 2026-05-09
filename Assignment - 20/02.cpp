// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include <bits/stdc++.h>
using namespace std;

void swapString(string *a, string *b)
{
    string temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    swapString(&s1, &s2);

    cout << s1 << " " << s2;

    return 0;
}