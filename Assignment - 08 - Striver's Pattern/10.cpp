/*

*   1
**
***
****
*****  5
****
***
**
*

*/

#include <bits/stdc++.h>
using namespace std;

void pattern()
{
    // it runs for 5 times
    for (int i = 0; i < 5; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < 5 - i - 1; k++)
        {
            cout << " ";
        }
        // line change
        cout << endl;
    }
    // runs for 4 times
    for (int i = 0; i < 4; i++)
    {
        // star
        for (int j = 0; j < 4 - i; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        // line change
        cout << endl;
    }
}

int main()
{

    pattern();
    return 0;
}