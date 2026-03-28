/*

*********
 *******
  *****
   ***
    *

*/

#include <bits/stdc++.h>
using namespace std;

void pattern()
{

    for (int i = 5; i > 0; i--)
    {
        for (int k = 5 - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern();
    return 0;
}