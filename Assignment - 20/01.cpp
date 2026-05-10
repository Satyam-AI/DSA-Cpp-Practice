// 1. Write a function to swap values of two in variables of calling function. (TSRS)

#include <bits/stdc++.h>
using namespace std;

void swapvalues(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swapvalues(&a, &b);
    cout << a << " " << b;
    return 0;
}