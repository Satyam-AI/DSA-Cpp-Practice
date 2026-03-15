/*

*****
****
***
**
*

*/

#include <bits/stdc++.h>
using namespace std;

void pattern()
{

    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{

    pattern();
}