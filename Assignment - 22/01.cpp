// 1. Define a function to input variable length string and store it in an array without memory wastage.

#include <bits/stdc++.h>
using namespace std;

char* inputString()
{
    char temp[1000];

    cin.getline(temp, 1000);

    int len = strlen(temp);

    char *p;

    p = (char*) malloc((len + 1) * sizeof(char));

    strcpy(p, temp);

    return p;
}

int main()
{
    char *str;

    str = inputString();

    cout << str;

    free(str);

    return 0;
}