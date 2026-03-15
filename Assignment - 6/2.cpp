// 2. Write a program to calculate sum of first N even natural numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, Sum = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        Sum += (2 * i);
    }
    cout << Sum;
    return 0;
}