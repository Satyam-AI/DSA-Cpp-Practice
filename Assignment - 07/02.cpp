// 2. Write a program to print first N terms of Fibonacci series
/*
logic:

Start:

a = 0, b = 1
Each loop prints a, then updates.

i=1: print 0
c=0+1=1, then a=1, b=1
i=2: print 1
c=1+1=2, then a=1, b=2
i=3: print 1
c=1+2=3, then a=2, b=3
i=4: print 2
c=2+3=5, then a=3, b=5
i=5: print 3
c=3+5=8, then a=5, b=8
i=6: print 5
c=5+8=13, then a=8, b=13
i=7: print 8
c=8+13=21, then a=13, b=21
Printed first 7 terms:

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, a = 0, b = 1, c;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}