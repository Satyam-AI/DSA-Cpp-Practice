// 1. Write a recursive function to print first N natural numbers

#include <bits/stdc++.h>
using namespace std;
/*
void number(int num, int n)
{
    if (num > n)
        return;
    cout << num << endl;
  //  number(num + 1, n);
    num++;
    number(num, n);
}

*/
int num = 1;

void number(int n)
{
    if (num > n)
        return;
    cout << num << endl;
    num++;
    number(n);
}

int main()
{
    int n;
    cin >> n;
    number(n);
    return 0;
}
