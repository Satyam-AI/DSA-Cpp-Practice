// 4. Write a function to print first N natural numbers (TSRN)

#include <bits/stdc++.h>
using namespace std;

void printNaturalNumbers(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout << i << "\n";
    }
}

int main()
{
    int N;
    cin >> N;
    printNaturalNumbers(N);
    return 0;
}