// 10. Write a recursive function to print reverse of a given number

#include <bits/stdc++.h>
using namespace std;

int reverse_num = 0;
void reverse(int n)
{
    if (n == 0)
        return;
    int last_digit = n % 10;
    reverse_num = reverse_num * 10 + last_digit;
    reverse(n / 10);
}
int main()
{
    int n;
    cin >> n;
    reverse(n);
    cout << reverse_num;
    return 0;
}