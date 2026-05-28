// 4. Write a program to input and print text using dynamic memory allocation.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char *p;

    p = (char*) malloc(100 * sizeof(char));

    cin.getline(p, 100);

    cout << p;

    free(p);

    return 0;
}