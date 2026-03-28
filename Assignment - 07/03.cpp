// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int term, num, a = 0, b = 1, c;
    cin >> term >> num;
    bool find = false;
    for (int i = 1; i <= term; i++)
    {

        if (a == num)
        {
            find = true;
            break;
        }
        c = a + b;
        a = b;
        b = c;
    }
    if (find)
        cout << "Number found in the series";
    else
        cout << "Not";
    return 0;
}