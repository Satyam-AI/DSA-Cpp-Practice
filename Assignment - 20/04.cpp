// 4. Write a program in C++ to demonstrate how to handle the pointers in the program.

#include <bits/stdc++.h>
using namespace std;

void pointers(int *a)
{
    cout << "Pointer value = " << a << endl;
    cout << "Value using pointer = " << *a<<endl;
}

int main()
{
    int n;
    cin >> n;
    pointers(&n);
    cout << "value of n = " << n << endl;
    cout << "Address of n = " << &n;
    return 0;
}