#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
    {
        return 1;
    }
    return 0;
}

bool contains(string inp, char c)
{
    int n = inp.length();

    for (int i = 0; i < n; i++)
    {
        if (inp.at(i) == c)
            return 1;
    }
    return 0;
}

int main()
{
    string inp, out;
    cin >> inp;

    int n = inp.length();

    for (int i = 0; i < n; i++)
    {
        char c = inp.at(i);
        char dot = '.';

        // if vowel do not add to output string
        if (!isVowel(c))
        {
            out.push_back(dot);
            out.push_back(tolower(c));
        }
    }

    cout << out;
}