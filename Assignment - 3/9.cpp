/*  9. Write a program to find the greatest among three given numbers.
 Print number once if the greatest number appears two or three times.\
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    if ((a >= b) && (a >= c))
        cout << a;
    else if ((b >= a) && (b >= c))
        cout << b;
    else
        cout << c;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    cout << mx;
    return 0;
}