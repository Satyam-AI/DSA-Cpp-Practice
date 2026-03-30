// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
/*
#include <bits/stdc++.h>
using namespace std;

int checkDigit(int n, int d)
{
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == d)
            return 1;
        n = n / 10;
    }
    return 0;
}

int main()
{
    int n, d, result;
    cin >> n >> d;
    result = checkDigit(n, d);
    cout << result;
    return 0;
}
    */

// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include <bits/stdc++.h>
using namespace std;

string checkdigit(int x, int y)
{
    while (x > 0)
    {
        int lastdigit = x % 10;
        x /= 10;

    if (lastdigit == y)
        return "Yes";
    }
    return "No";
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<checkdigit(x,y);
    return 0;

}