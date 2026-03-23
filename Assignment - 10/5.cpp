// 5. Write a function to print first N odd natural numbers. (TSRN)

#include <bits/stdc++.h>
using namespace std;

void printOddNumbers(int N)
{
    int num = 1;
    for (int i = 1; i <= N; i++)
    {
        cout << num << "\n";
        num = num + 2;
    }
}

int main()
{
    int N;
    cin >> N;
    printOddNumbers(N);
    return 0;
}