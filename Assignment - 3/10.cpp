/*  10. Write a program which takes the cost price and selling price of a product
 from the user. Now calculate and print profit or loss percentage.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    double cp, sp;
    cin >> cp >> sp;
    if (cp<=0){
        cout<<"invalid pricing";
        return 0;
    }

    if (sp > cp){
        double profit = (sp - cp);
    cout << "profit is " << profit <<"\n";
    double profit_percentage = (profit / cp) * 100;
    cout << "and profit percentagee is " << profit_percentage<<"%";
    }

    else if (cp > sp){
        double loss = (cp - sp);
    cout << "loss is " << loss<<endl;
    double loss_percentage = (loss / cp) * 100;
    cout << "and loss percentage is " << loss_percentage<<"%";
    }

    else {
        cout<<"no profit no loss";
    }
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double cp, sp;
    cin >> cp >> sp;
    if (cp == 0) {
        cout << "Invalid cost price";
        return 0;
    }
    double diff = sp - cp;
    double percent = (abs(diff) / cp) * 100;
    if (diff > 0)
        cout << "Profit " << percent << "%";
    else if (diff < 0)
        cout << "Loss " << percent << "%";
    else
        cout << "No profit no loss";
    return 0;
}
    */