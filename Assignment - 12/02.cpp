// 2. Write a recursive function to print first N natural numbers in reverse order

#include<bits/stdc++.h>
using namespace std;


void natural(int n)
{
    if(n==0)
    return;
    cout<<n<<endl;
    n--;
    natural(n);
  //  natural(n-1);
}
int main()
{
    int n;
    cin>>n;
    natural(n);
    return 0;
}