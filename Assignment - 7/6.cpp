// 6. Write a program to print all Prime numbers under 100

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int num = 2; num < 100; num++)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
                count++;
        }
        if (count == 2)
            cout << num << " ";
    }
    return 0;
}
