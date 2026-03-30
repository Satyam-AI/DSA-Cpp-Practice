// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
/*
#include <bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

long long combination(int n, int r)
{
    long long ans;
    ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

int main()
{
    int n, r;
    long long result;
    cin >> n >> r;
    result = combination(n, r);
    cout << result;
    return 0;
}
*/

// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include <bits/stdc++.h>
using namespace std;

int printfactorialofn(int n)
{
    int factorialofn = 1;
    while (n > 0)
    {
        factorialofn *= n;
        n--;
    }
    return factorialofn;
}
int printfactorialofr(int r)
{
    int factorialofr = 1;
    while (r > 0)
    {
        factorialofr *= r;
        r--;
    }
    return factorialofr;
}

int printfactorialofsubs(int n, int r)
{
    int factorialofsubs = 1;
    int num = n - r;
    while (num > 0)
    {
        factorialofsubs *= num;
        num--;
    }
    return factorialofsubs;
}

int printnumberofcombinations(int n, int r)
{
    int numberofcombination = printfactorialofn(n) / (printfactorialofr(r) * printfactorialofsubs(n, r));
    return numberofcombination;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << printnumberofcombinations(n, r);
    return 0;
}