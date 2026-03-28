// 9. Write a program to print size of an int, a float, a char and a double type variable

//Logic: Use sizeof(type) to get size in bytes.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "char: " << sizeof(char) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    return 0;
}