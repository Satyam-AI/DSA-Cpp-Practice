// 10. Write a program to reverse a given number


/*
// for loop syntax
for (initialization; condition; update) {
    // code
}

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cin >> num;

    int rev = 0;

    for (; num != 0; num /= 10)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
    }
    cout << rev;
    return 0;
}

/*

// while loop syntax
while (condition) {
    // code
}



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    cout << rev;
    return 0;

}


*/