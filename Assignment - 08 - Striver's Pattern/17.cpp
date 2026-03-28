/*

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = i; j >= 0; j--)
        {
            cout << ch;
            ch = ch + 1;
        }
        char new_ch = ch-1;
        for (int j = i; j > 0; j--)
        {
             new_ch = new_ch-1;
            cout << new_ch;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern(n);
    }
    return 0;
}