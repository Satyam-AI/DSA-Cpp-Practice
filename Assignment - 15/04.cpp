/* 4. Write a function to rotate an array by n position in d direction.
The d is an indicative value for left or right. (For example,
if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left,
then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/

#include <bits/stdc++.h>
using namespace std;

void rotateLeft(int a[], int n)
{
    int temp = a[0];
    for (int i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
    a[n - 1] = temp;
}

void rotateRight(int a[], int n)
{
    int temp = a[n - 1];
    for (int i = n - 1; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = temp;
}

int main()
{
    int n, k;
    char d;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> k >> d;

    for (int i = 0; i < k; i++)
    {
        if (d == 'L')
            rotateLeft(a, n);
        else
            rotateRight(a, n);
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}