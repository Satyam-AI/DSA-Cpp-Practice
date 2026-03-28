/* 7. Write a program to check whether roots of a given quadratic equation
 are real & distinct, real & equal or imaginary roots

 The discriminant (D) is: b*b-4ac

 If D>0 then the equation has two different real roots.
 If D=0 then the equation has two equal real roots.
 If D<0 then the roots are imaginary (complex).

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    double a, b, c;
    cin >> a >> b >> c;
    double d;
    d = b * b - 4 * a * c;
    if (d > 0)
        cout << "Equation has real and distinct roots";
    else if (d == 0)
        cout << "equation has real & equal roots";
    else
        cout << "Equation has imaginary roots";
    return 0;
}