/*

E
DE
CDE
BCDE
ABCDE

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    char ch = 'E';
    for (int i = 0; i < n; i++)
    {
         char new_ch = ch;
        for (int j = 0; j <= i; j++)
        {
            cout << new_ch<< " ";
            new_ch++;

        }
        cout << endl;
        ch--;
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