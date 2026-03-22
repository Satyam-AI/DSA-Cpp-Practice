// 1. Write a function to calculate the area of a circle. (TSRS)

#include <bits/stdc++.h>
using namespace std;

double areaOfCircle(double r)
{
    double A;
    A = 3.14159 * r * r;
    return A;
}

int main()
{
    double r, A;
    cin >> r;
    A = areaOfCircle(r);
    cout << A;
    return 0;
}