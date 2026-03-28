/*
11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example – “11:25” converted to “11 Hour and 25 Minute”

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int HH, MM;
    char cloun;
    cin >> HH >> cloun >> MM;
    cout << HH << "hour and " << MM << " Minute";
    return 0;
}