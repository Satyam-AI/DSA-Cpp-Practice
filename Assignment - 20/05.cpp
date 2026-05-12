// 5. Write a program to find the maximum number between two numbers using a pointer

#include <bits/stdc++.h>
using namespace std;

void max_number(int *a, int *b)
{
    if (*a > *b)
    {
        cout << "Greatest number is " << *a;
    }
    else
    {
        cout << "Greatest number is " << *b;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    max_number(&a, &b);
    return 0;
}