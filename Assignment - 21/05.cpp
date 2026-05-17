// 5. Write a function to sort employees according to their salaries [ refer structure from question 1]

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
    Employee emp[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> emp[i].id;
        cin >> emp[i].name;
        cin >> emp[i].salary;
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4-i; j++)
        {
            if(emp[j].salary > emp[j+1].salary)
            {
                Employee temp = emp[j];
                emp[j] = emp[j+1];
                emp[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        cout << emp[i].id << " ";
        cout << emp[i].name << " ";
        cout << emp[i].salary << "\n";
    }

    return 0;
}