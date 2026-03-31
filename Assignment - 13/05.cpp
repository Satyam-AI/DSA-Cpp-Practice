// 5. Write a recursive function to calculate sum of digits of a given number

#include <bits/stdc++.h>
using namespace std;

int printsumofdigits(int sum, int n)
{
    if (n == 0)
        return sum;
        int lastdigit = n%10;
    return printsumofdigits(sum + lastdigit, n/10);
}

int main()
{
    int n;
    cin >> n;
    cout << printsumofdigits(0, n);
    return 0;
}