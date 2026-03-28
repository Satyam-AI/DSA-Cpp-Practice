// 10. Write a program to print a table of N.

/*
Order of for loop is always:

initialization -> condition -> body -> increment -> repeat

So for your loop:

i = 1 -> i <= 10 -> cout << N*i -> i++ -> again condition...
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, N;
    cin >> N;
    for (i = 1; i <= 10; i++)
        cout << (N * i) << endl;
    return 0;
}