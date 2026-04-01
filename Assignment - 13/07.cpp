// 7. Write a recursive function to calculate HCF of two numbers

#include <bits/stdc++.h>
using namespace std;

int printhcf(int i, int x, int y, int gcd)
{

    if (i > min(x, y))
    {
        return gcd;
    }
    if (x % i == 0 && y % i == 0)
        gcd = i;
    return printhcf(i + 1, x, y, gcd);
}

// Euclidean algorithm
int hcf2(int x, int y)
{
    if (y == 0)
        return x;

    return hcf2(y, x%y);
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << printhcf(1, x, y, 0)<<endl;

    // Euclidean algorithm
    cout << hcf2(x, y);
    return 0;
}