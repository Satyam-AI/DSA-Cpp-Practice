// 7. Write a program to calculate the difference between two time periods

#include <bits/stdc++.h>
using namespace std;

struct Time
{
    int hour;
    int minute;
    int second;
};

int main()
{
    Time t1, t2, diff;

    cin >> t1.hour >> t1.minute >> t1.second;

    cin >> t2.hour >> t2.minute >> t2.second;

    int s1 = t1.hour * 3600 + t1.minute * 60 + t1.second;

    int s2 = t2.hour * 3600 + t2.minute * 60 + t2.second;

    int d = abs(s1 - s2);

    diff.hour = d / 3600;

    d = d % 3600;

    diff.minute = d / 60;

    diff.second = d % 60;

    cout << diff.hour << " ";
    cout << diff.minute << " ";
    cout << diff.second;

    return 0;
}