// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
/*
#include <bits/stdc++.h>
using namespace std;

int checkEvenOdd(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n, result;
    cin >> n;
    result = checkEvenOdd(n);
    cout << result;
    return 0;
}

*/

// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

  #include<bits/stdc++.h>
  using namespace std;

  int checknumber(int n)
  {
    if(n%2==0) return 1;
    else return 0;
  }

  int main()
  {
    int n;
    cin>>n;
    cout<<checknumber(n);
    return 0;
  }