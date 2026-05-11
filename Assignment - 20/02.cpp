// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

/*
// swap two strings
#include <bits/stdc++.h>
using namespace std;

void swapstrings(string *a, string *b)
{
    string temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    string a, b;
    cin >> a >> b;
    swapstrings(&a, &b);
    cout << a << " " << b;
    return 0;
}
*/

// ---------------->

void swapstrings(char *a, char *b)
{
    char temp[100];

    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}
int main()
{
    char a[100], b[100];

    cin >> a >> b;

    swapstrings(a, b);

    cout << a << " " << b;

    return 0;
}
