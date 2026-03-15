/*
5. WAP to calculate the length of String using printf function.



Concepts: string length. In C++ use std::string::length() or size(). The PDF mentions printf (C-style), but we will use C++ style cout while giving the same result.

Logic: Read a string (a word) or a full line? This question usually expects a string input — I will implement two variants:

If the input is a single word, use std::cin >> s;.

If the input may contain spaces, use std::getline(std::cin, s);.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s = "cat";
    cout << s.length();
    return 0;
}