// 7. Write a program to print all Prime numbers between two given numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);


    for (int num = a + 1; num < b; num++)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << num << endl;
        }
    }
    return 0;
}