// 7. Write a program to count digits in a given number

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int count = 0;
    cin>>n;
    for (; n > 0; n /= 10)
        count += 1;
    cout << count;
    return 0;
}

/*
// 7. Write a program to count digits in a given number

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 0) n = -n;   // ignore sign

    int count = 0;
    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            n = n / 10;
            count++;
        }
    }

    cout << count;
    return 0;
}

*/

//------------------------------------------------

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 0) n = -n;  // ignore sign

    int count = 0;
    if (n == 0) count = 1;
    else {
        for (; n > 0; n /= 10) {
            count++;
        }
    }

    cout << count;
    return 0;
}

*/