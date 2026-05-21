// 9. Write a program to store information of n students and display them using structure

#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int roll;
    string name;
};

int main()
{
    int n;
    cin >> n;

    Student s[n];

    for(int i = 0; i < n; i++)
    {
        cin >> s[i].roll;
        cin >> s[i].name;
    }

    for(int i = 0; i < n; i++)
    {
        cout << s[i].roll << " ";
        cout << s[i].name << "\n";
    }

    return 0;
}