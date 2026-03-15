/*
12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int INR;
    float USD = 76.23;
    cin >> INR;
    USD = INR/USD;
    cout<<USD;
    return 0;

}