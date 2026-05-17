// 3. Write a function to display employee data. [ Refer structure from question 1 ]

#include <bits/stdc++.h>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

void display(Employee e)
{
    cout << e.id << "\n";
    cout << e.name << "\n";
    cout << e.salary << "\n";
}

int main()
{
    Employee e1;
    cin >> e1.id;
    cin >> e1.name;
    cin >> e1.salary;
    display(e1);
    return 0;
}