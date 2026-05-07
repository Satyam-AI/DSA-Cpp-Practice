//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string city[10];

    for(int i = 0; i < 10; i++)
        cin >> city[i];

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9-i; j++)
        {
            if(city[j] > city[j+1])
            {
                string temp = city[j];
                city[j] = city[j+1];
                city[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++)
        cout << city[i] << "\n";

    return 0;
}