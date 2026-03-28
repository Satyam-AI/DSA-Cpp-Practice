/*

4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    cin >> choice;

    if (choice == 4)
        return 0;

    int a, b, c;
    cin >> a >> b >> c;

    switch (choice)
    {
    case 1:
        if (a == b || b == c || a == c)
            cout << "Isosceles";
        else
            cout << "Not Isosceles";
        break;

    case 2:
        if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            cout << "Right angled";
        else
            cout << "Not Right angled";
        break;

    case 3:
        if (a == b && b == c)
            cout << "Equilateral";
        else
            cout << "Not Equilateral";
        break;

    default:
        cout << "Invalid";
    }

    return 0;
}