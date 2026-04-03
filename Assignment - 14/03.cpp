// 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10], sum_even = 0, sum_odd = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum_odd += arr[i];
        }
        else
        {
            sum_even += arr[i];
        }
    }

    cout << sum_even << endl;
    cout << sum_odd;
    return 0;
}