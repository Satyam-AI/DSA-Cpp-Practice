// 10. Write a program to print all Armstrong numbers under 1000

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int num = 1; num < 1000; num++)
    {
        int temp = num;
        int original = num;
        int digitcount = 0;
        while (temp > 0)
        {
            digitcount++;
            temp = temp / 10;
        }
        temp = num;
        double sum = 0;
        while (temp > 0)
        {
            int lastdigit = temp % 10;
            sum += pow(lastdigit, digitcount);
            temp = temp / 10;
        }
        if (original == sum)
        {
            cout << num << endl;
        }
    }
    return 0;
}