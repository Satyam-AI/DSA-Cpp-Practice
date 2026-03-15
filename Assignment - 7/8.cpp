// 8. Write a program to find next Prime number of a given number

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin >> a;

    for (int num = a + 1; num <= a * a; num++)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
                count++;
        }
        if (count == 2)
        {
            cout << num;
            break;
        }
    }
    return 0;
}