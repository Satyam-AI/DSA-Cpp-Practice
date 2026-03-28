/*
10. WAP to take date as an input in below given format and convert the date format and display the result as given below.

User Input date format – “DD/MM/YYYY” (27/11/2022)

Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int DD;
    int MM;
    int YYYY;
    char slash;


    cin >> DD >> slash >> MM >> slash >> YYYY;
    cout << "Day- " << DD << ", Month- " << MM << ", Year- " << YYYY;
    return 0;
}