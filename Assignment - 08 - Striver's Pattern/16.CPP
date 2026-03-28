/*

A
BB
CCC
DDDD
EEEEE

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    char print_ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << print_ch << " ";
        }
        cout << endl;
        print_ch++;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        char print_ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << print_ch << " ";
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
        pattern2(n);
    }
    return 0;
}