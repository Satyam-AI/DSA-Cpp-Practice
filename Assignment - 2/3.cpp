
// 3. Write a program to swap values of two int variables
/* #include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;
    cin >> a;
    cin>>b;
    c = a+b; //9
    b = c-b; //9-4 5
    a = c-a;
    cout<<"a="<<a<<endl<<"b="<<b;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return 0;
}