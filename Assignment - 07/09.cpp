// 9. Write a program to check whether a given number is an Armstrong number or not

/*

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int original = n;
    int temp = n;
    int digits = 0;

    if (temp == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    int sum = 0;
    for (int i = n; i > 0; i /= 10) {
        int digit = i % 10;
        int powerValue = 1;
        for (int j = 1; j <= digits; j++) {
            powerValue *= digit;
        }
        sum += powerValue;
    }

    if (original == 0) {
        sum = 0;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cin >> num;
    double sum = 0;
    int original_num = num;
    int temp = num;
    int digitcount = 0;
    while(temp>0){
        digitcount++;
        temp = temp/10;

    }
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += pow(lastdigit, digitcount);
        num = num / 10;
    }

    if (original_num == sum)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not Armstrong Number";
    }
    return 0;
}
