// 8. Write a function to count words in a given string

#include <bits/stdc++.h>
using namespace std;

void count_word(string s)
{
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        count++;
    }
    cout << count;
    return;
}
int main()
{
    string s;
    getline(cin, s);
    count_word(s);
    return 0;
}