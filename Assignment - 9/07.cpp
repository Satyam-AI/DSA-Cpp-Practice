/*

7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int unit;
    cin >> unit;

    double bill;

    switch (unit > 250)
    {
    case 1:
        bill = 50 * 0.5 + 100 * 0.75 + 100 * 1.2 + (unit - 250) * 1.5;
        break;
    case 0:
        if (unit > 150)
            bill = 50 * 0.5 + 100 * 0.75 + (unit - 150) * 1.2;
        else if (unit > 50)
            bill = 50 * 0.5 + (unit - 50) * 0.75;
        else
            bill = unit * 0.5;
    }

    bill = bill + bill * 0.2;

    cout << bill;

    return 0;
}