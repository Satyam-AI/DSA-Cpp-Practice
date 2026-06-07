// 6. Write a program in C++ to find the largest element using Dynamic Memory Allocation.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int *p;

    p = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
        cin >> p[i];

    int max = p[0];

    for(int i = 1; i < n; i++)
    {
        if(p[i] > max)
            max = p[i];
    }

    cout << max;

    free(p);

    return 0;
}