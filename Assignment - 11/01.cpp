// Write a function to calculate LCM of two numbers. (TSRS)

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

int lcm(int a, int b)
{
    int h = hcf(a, b);
    int L = (a / h) * b;
    return L;
}

int main()
{
    int a, b, ans;
    cin >> a >> b;
    ans = lcm(a, b);
    cout << ans;
    return 0;
}