/*5.
 Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.
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

    for(int i = 0; i < n; i++)
        cout << p[i] << " ";

    cout << "\nSum = " << sum;

    free(p);

    return 0;
}