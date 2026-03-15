// 1. Write a program to calculate sum of first N natural numbers

#include<bits/stdc++.h>
using namespace std;

int main(){
int N;
cin >> N;
    int sum = 0;
    for(int i= 1; i<=N; i++){
    sum += i;
    }
    cout << sum;
    return 0;
}