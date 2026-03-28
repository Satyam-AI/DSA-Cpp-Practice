// 10. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = (n / 10) * 10;
    cout << num;
    return 0;
}