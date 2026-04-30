// 10. Write a function in C to count the frequency of each element of an array.

#include <bits/stdc++.h>
using namespace std;

void count_frequency(int a[], int n)
{
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

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }

        cout << a[i] << " occurs " << count << " times" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    count_frequency(a, n);
    return 0;
}
