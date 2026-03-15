/*
4. WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.

Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.




Concepts: arithmetic, floating point, M_PI (pi constant) or use 3.14159. Format output with a fixed number of decimal places (optional). Read input from user.

Logic: Read radius R (double). Compute area A = π * R * R. Print exactly as requested (including double quotes). I'll print area with two decimal places for readability.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double A;
    int R;
    cin >> R;
    A = (22.0 / 7.0 * R * R);
    cout << " Area of circle is " << A << " having the radius " << R;
    return 0;
}
