/* 9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” ) */

#include <bits/stdc++.h>
using namespace std;

void reverse_string(string s)
{
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i >= 0; i--)
    {
        cout << words[i] << " ";
    }
}

int main()
{
    string s;
    getline(cin, s);
    reverse_string(s);
    return 0;
}