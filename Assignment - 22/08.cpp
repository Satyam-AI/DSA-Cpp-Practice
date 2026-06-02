// 8. Write a program to demonstrate dangling pointers in C.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;

    p = (int*) malloc(sizeof(int));

    *p = 10;

    free(p);

    // dangling pointer
    cout << *p;

    return 0;
}