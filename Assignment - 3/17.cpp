/* 17. Write a program which takes the length of the sides of a triangle as an input.
Display whether the triangle is valid or not.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) > c && (b + c) > a && (c + a) > b)
        cout << "Valid Triangle";
    else
        cout << "Not Valid Triangle";
    return 0;
}
