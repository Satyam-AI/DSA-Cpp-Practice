// Write a function to calculate HCF of two numbers. (TSRS)

#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int a, b, ans;
    cin >> a >> b;
    ans = hcf(a, b);
    cout << ans;
    return 0;
}