// 3. Write a recursive function to print first N odd natural numbers
/*
#include <bits/stdc++.h>
using namespace std;

int num = 1;
int counts = 0;
void natural(int n)
{
    if (counts == n)
        return;
    if (num % 2 != 0)
    {
        cout << num << endl;
        counts++;
    }
    num++;
    natural(n);
}

int main()
{
    int n;
    cin >> n;
    natural(n);
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

void natural(int i, int n)
{
    if (i > n)
        return;

    cout << 2 * i - 1 << endl;
    natural(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    natural(1, n);
    return 0;
}