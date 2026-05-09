// 1. Write a function to swap values of two in variables of calling function. (TSRS)

#include <bits/stdc++.h>
using namespace std;

void swapValues(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    cin >> x >> y;

    swapValues(&x, &y);

    cout << x << " " << y;

    return 0;
}