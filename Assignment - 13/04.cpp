// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include <bits/stdc++.h>
using namespace std;

int printsumofsquares(int sum, int n)
{
    if (n == 0)
        return sum;

    return printsumofsquares(sum + (n*n), n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << printsumofsquares(0, n);
    return 0;
}