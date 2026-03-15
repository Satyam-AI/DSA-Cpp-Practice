/*
13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.
*/

/*
float a = 3.141592653589;
double b = 3.141592653589;

cout << a << endl;
cout << b;

output:
3.14159
3.141592653589




#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    double num = (double)a/b;
    cout << num;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;

    double num = a / b;
    cout << num;

    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    //int number = ((n%10)*100)+((n/100)*10)+((n/10)%10);
    int number = ((n%10)*100)+(n/10);
    cout<<number;
    return 0;
}