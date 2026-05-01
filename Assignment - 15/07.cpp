// 7. Write a function in C to count a total number of duplicate elements in an array

#include <bits/stdc++.h>
using namespace std;

int count_duplicate(int a[], int n)
{
    int count = 0;
    bool already_counted = false;
    for (int i = 0; i < n; i++)
    {
        bool already_counted = false;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                already_counted = true;
                break;
            }
        }
        if (already_counted)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << count_duplicate(a, n);
    return 0;
}
