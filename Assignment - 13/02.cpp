// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include <bits/stdc++.h>
using namespace std;

int printsumnodd(int sum, int n)
{
    if (n == 0)
        return sum;

    return printsumnodd(sum + (2 * n - 1), n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << printsumnodd(0, n);
    return 0;
}