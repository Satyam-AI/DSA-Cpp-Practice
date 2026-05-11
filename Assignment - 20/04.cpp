// 4. Write a program in C to demonstrate how to handle the pointers in the program.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;
    cout << "Value of x = " << x << "\n";
    cout << "Address of x = " << &x << "\n";
    cout << "Pointer value = " << p << "\n";
    cout << "Value using pointer = " << *p;
    return 0;
}