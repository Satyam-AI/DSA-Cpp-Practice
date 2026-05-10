// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

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