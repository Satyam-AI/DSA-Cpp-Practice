/* 4. Write a function to rotate an array by n position in d direction.
The d is an indicative value for left or right. (For example,
if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left,
then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/

#include <bits/stdc++.h>
using namespace std;

void rotateleft(int a[], int size)
{
    int temp = a[0];

    for (int i = 0; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[size - 1] = temp;
}

void rotateright(int a[], int size)
{
    int temp = a[size - 1];

    for (int i = 0; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}


void rotatearray(int a[], int size, int n, char d)
{
    n = n % size;
    for (int i = 0; i < n; i++)
    {
        if (d == 'L')
            rotateleft(a, size);
        else if (d == 'R')
            rotateright(a, size);
    }
}

int main()
{
    int n;
    cin >> n;
    char d;
    cin >> d;

    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
        cin >> a[i];

    rotatearray(a, size, n, d);
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    return 0;
}