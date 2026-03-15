/* 4. Write a program to check whether a given number is an even number or an
odd number without using % operator.
*/

// Concept: use bitwise AND to test lowest bit.

// Logic: n & 1 is 1 for odd, 0 for even.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n & 10)
        cout << n << " is even number";
    else
        cout << n << " is odd number";
    return 0;
}

// Line-by-line: n & 1 checks the last bit; if 1 → odd.