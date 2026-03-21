// 10. C program to find all roots of a quadratic equation using switch case

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    switch (D > 0)
    {
    case 1:
        cout << "Real and distinct";
        break;
    case 0:
        switch (D == 0)
        {
        case 1:
            cout << "Real and equal";
            break;
        case 0:
            cout << "Imaginary";
        }
    }

    return 0;
}