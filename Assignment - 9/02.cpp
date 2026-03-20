/*

2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit

*/
/*

Basic Syntax:

switch(variable)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code if no case matches
}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice, a, b;
    cout << "1. Addition" << endl
         << "2. Subtraction" << endl
         << "3. Multiplication" << endl
         << "4. Division" << endl
         << "5. Exit" << endl;

    cin >> choice;

    if (choice >= 1 && choice <= 4)
        cin >> a >> b;

    switch (choice)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << a / b;
        break;
    case 5:
        cout << "Exit";
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}