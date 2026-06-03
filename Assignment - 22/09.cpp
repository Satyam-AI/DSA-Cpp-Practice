/*
9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bytes;

    cin >> bytes;

    char *p;

    p = (char*) malloc(bytes);

    if(p == NULL)
        cout << "Memory Allocation Failed";
    else
        cout << "Memory Allocated Successfully";

    free(p);

    return 0;
}