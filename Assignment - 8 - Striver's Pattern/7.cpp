/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include <bits/stdc++.h>
using namespace std;

void pattern()
{

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5 - i - 1; j++)
        {

            cout << " ";
        }

        for (int k = 0; k < i * 2 + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    pattern();
}