// 3. Write a recursive function to calculate sum of first N even natural numbers

#include <bits/stdc++.h>
using namespace std;

int printsumofneven(int sum, int n)
{
    if (n == 0)
        return sum;

    return printsumofneven(sum + (2 * n), n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << printsumofneven(0, n);
    return 0;
}