/*

1      1
12    21
123  321
12344321

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        int new_num = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
            new_num = j + 1;
        }
        for (int k = 0; k < 2 * n - 2 * i - 2; k++)
        {
            cout << " ";
        }
        for (int m = 0; m <= i; m++)
        {
            cout << new_num;
            new_num = new_num - 1;
        }

        cout << endl;
    }
}

void pattern2(int n)
{
    // int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        int space = 2 * (n - i);
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
            //space -= 2;
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        //space -= 2;
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