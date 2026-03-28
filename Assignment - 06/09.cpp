// 9. Write a program to calculate LCM of two numbers

/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = a, y = b;
    while (y != 0)
    {
        int rem = x % y;
        x = y;
        y = rem;
    }

    int gcd = x;
    int lcm = (a / gcd) * b;
    cout << lcm;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, gcd = 0;
    cin >> a >> b;

    if (a == 0 || b == 0)
    {
        cout << 0;
        return 0;
    }

    for (int i = 1; i <= min(a, b); i++)
    {

        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    int LCM = (a * b) / gcd;
    cout << LCM;
    return 0;
}