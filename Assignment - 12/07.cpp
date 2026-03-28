// 7. Write a recursive function to print squares of first N natural numbers

#include <bits/stdc++.h>
using namespace std;

void natural(int i, int n)
{
    if (i > n)
        return;
    cout << i * i << endl;
    natural(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    natural(1, n);
    return 0;
}