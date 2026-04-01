// 8. Write a recursive function to print first N terms of Fibonacci series

#include <bits/stdc++.h>
using namespace std;

void printfibonacci(int i, int n, int a, int b)
{

    if (i > n)
        return;
    cout << a << endl;
    printfibonacci(i + 1, n, b, a + b);
}
int main()
{
    int i, n;
    cin >> n;
    printfibonacci(1, n, 0, 1);
    return 0;
}