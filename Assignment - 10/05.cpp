// 5. Write a function to print first N odd natural numbers. (TSRN)
/*
#include <bits/stdc++.h>
using namespace std;

void printOddNumbers(int N)
{
    int num = 1;
    for (int i = 1; i <= N; i++)
    {
        cout << num << "\n";
        num = num + 2;
    }
}

int main()
{
    int N;
    cin >> N;
    printOddNumbers(N);
    return 0;
}
*/

// 5. Write a function to print first N odd natural numbers. (TSRN)

#include <bits/stdc++.h>
using namespace std;

void oddnatural(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << 2 * i - 1 << endl;
    }
}

int main()

{
    int n;
    cin >> n;
    oddnatural(n);
    return 0;
}