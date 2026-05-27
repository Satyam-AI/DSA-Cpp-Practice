// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free

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

    cout << sum;

    free(p);
    return 0;
}