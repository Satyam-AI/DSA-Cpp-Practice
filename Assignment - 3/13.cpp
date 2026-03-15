// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

// either divisible by 2 or 3 check

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is divisible by 2";
    else if (n % 3 == 0)
        cout << n << " is divisible by 3";
    else
        cout << "Not divisible by 2 or 3";
    return 0;
}



// check if same number is divisible by both 2 and 3

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 3 == 0 && n % 2 == 0)
        cout << "Divisible by 3 and 2";
    else
        cout << "Not divisible by both 3 and 2";
    return 0;
}*/