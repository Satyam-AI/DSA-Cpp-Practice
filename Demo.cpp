#include <bits/stdc++.h>
using namespace std;

// n to 1

void printrevnum(int i, int n)
{
    if (i > n)
        return;

    printrevnum(i + 1, n);
    cout<<i<<endl;
}

int main()
{
    int i, n;
    printrevnum(1, 5);
    return 0;


}