// 10. Find out the maximum and minimum from an array using dynamic memory allocation in C.

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
    int min = p[0];

    for(int i = 1; i < n; i++)
    {
        if(p[i] > max)
            max = p[i];

        if(p[i] < min)
            min = p[i];
    }
    cout << "Maximum = " << max << "\n";

    cout << "Minimum = " << min;

    free(p);

    return 0;
}