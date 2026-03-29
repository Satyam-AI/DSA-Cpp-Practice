// 2. Write a function to calculate simple interest. (TSRS)
/*
#include <bits/stdc++.h>
using namespace std;

double simpleInterest(double p, double r, double t)
{
    double si;
    si = (p * r * t) / 100;
    return si;
}

int main()
{
    double p, r, t, si;
    cin >> p >> r >> t;
    si = simpleInterest(p, r, t);
    cout << si;
    return 0;
}

*/

// 2. Write a function to calculate simple interest. (TSRS)

#include <bits/stdc++.h>
using namespace std;

double simpleinterest(double p, double r, double t)
{
    double si = (p * r * t) / 100;

    return si;
}
int main()
{
    cout << simpleinterest(10, 5, 10);
    return 0;
}