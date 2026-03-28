/*
    *
   ***
  *****
 *******
*********
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
    // run 5 times for first 5 rows
    for (int i = 0; i < 5; i++)
    {
        // space
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        // space
        for (int m = 0; m < 5 - i - 1; m++)
        {
            cout << " ";
        }
        // line chnage
        cout << endl;
    }
    // run 5 times for next 5 rows
    for (int i = 0; i < 5; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * (5 - i) - 1; k++)
        {
            cout << "*";
        }
        // space
        for (int m = 0; m < i; m++)
        {
            cout << " ";
        }
        // line chnage
        cout << endl;
    }
}

int main()
{
    pattern();
    return 0;
}