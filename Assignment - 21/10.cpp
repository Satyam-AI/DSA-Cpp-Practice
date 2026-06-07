/*
10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.
*/

#include <bits/stdc++.h>
using namespace std;

struct Marks
{
    int roll;
    string name;

    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main()
{
    Marks s[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> s[i].roll;
        cin >> s[i].name;

        cin >> s[i].chem_marks;
        cin >> s[i].maths_marks;
        cin >> s[i].phy_marks;
    }

    for (int i = 0; i < 5; i++)
    {
        float total;

        total = s[i].chem_marks +
                s[i].maths_marks +
                s[i].phy_marks;

        float percentage = total / 3.0;

        cout << s[i].name << " ";

        cout << percentage << "%\n";
    }

    return 0;
}