// 7. Write a program to count the number of vowels and consonants in a string using a pointer.

#include <bits/stdc++.h>
using namespace std;

void countnum(string *s)
{
    int countvowel = 0;
    int countconsonant = 0;
    for (int i = 0; i < ((*s).length()); i++)
    {
        if ((*s)[i] == 'a' || (*s)[i] == 'e' || (*s)[i] == 'i' || (*s)[i] == 'o' || (*s)[i] == 'u' ||
            (*s)[i] == 'A' || (*s)[i] == 'E' || (*s)[i] == 'I' || (*s)[i] == 'O' || (*s)[i] == 'U')
        {
            countvowel++;
        }
        else
        {
            countconsonant++;
        }
    }
    cout << "Number of Vowel = " << countvowel << endl;
    cout << "Number of consonant = " << countconsonant << endl;
}
int main()
{
    string s;
    cin >> s;
    countnum(&s);
    return 0;
}