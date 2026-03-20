// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day_number;
    cin >> day_number;
    ;
    switch (day_number)
    {
    case 1:
        cout << "Happy sunday";
        break;
    case 2:
        cout << " Happy monday";
        break;
    case 3:
        cout << "Happy tuesday";
        break;
    case 4:
        cout << "Happy wednesday";
        break;
    case 5:
        cout << "Happy thursday";
        break;
    case 6:
        cout << "Happy friday";
        break;
    case 7:
        cout << "Happy saturday";
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}