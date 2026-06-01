// 7. Write a program to demonstrate memory leak in C.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;

    p = (int*) malloc(5 * sizeof(int));

    p[0] = 10;
    // free(p); missing
    return 0;
}