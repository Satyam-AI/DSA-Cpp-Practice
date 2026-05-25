/*
2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int *p;

    p = (int*) malloc(n * sizeof(int));

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum = sum + p[i];
    }

    float avg;

    avg = (float)sum / n;

    cout << avg;

    free(p);

    return 0;
}