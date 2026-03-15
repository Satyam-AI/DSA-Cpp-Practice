/*

1
12
123
1234
12345

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int num)
{

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
int main()
{
    int num;
    cin >> num;
    pattern(num);
    return 0;
}
