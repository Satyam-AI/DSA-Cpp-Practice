// 8. Write a program to store information of 10 students and display them using st

#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int roll;
    string name;
};

int main()
{
    Student s[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> s[i].roll;
        cin >> s[i].name;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << s[i].roll << " ";
        cout << s[i].name << "\n";
    }

    return 0;
}