// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

#include <bits/stdc++.h>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee emp[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> emp[i].id;
        cin >> emp[i].name;
        cin >> emp[i].salary;
    }

    int maxIndex = 0;
    for (int i = 1; i < 10; i++)
    {
        if (emp[i].salary > emp[maxIndex].salary)
            maxIndex = i;

        }
    cout << emp[maxIndex].id << "\n";
    cout << emp[maxIndex].name << "\n";
    cout << emp[maxIndex].salary;

    return 0;
}