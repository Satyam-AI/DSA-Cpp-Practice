// 6. Write a recursive function to print first N even natural numbers in reverse order

#include <bits/stdc++.h>
using namespace std;

void natural(int n)
{
    if (n == 0)
        return;
    cout << 2 * n << endl;
    natural(n - 1);
}

int main()
{
    int n;
    cin >> n;
    natural(n);
    return 0;
}