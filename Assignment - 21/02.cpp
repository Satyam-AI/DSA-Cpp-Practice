// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]

#include <bits/stdc++.h>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

void input(Employee &e)
{
    cin >> e.id;
    cin >> e.name;
    cin >> e.salary;
}

int main()
{
    Employee e1;

    input(e1);

    return 0;
}