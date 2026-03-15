/*
11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, digit;
    cin >> N >> digit;
    int number = (N * 10) + digit;
    cout<<number;
    return 0;
}