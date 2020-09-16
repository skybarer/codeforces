#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int charArr[26] = {0};
    int outCont = 0;
    getline(cin, s);
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        char c = s.at(i);

        if (c >= 'a' && c <= 'z')
        {
            charArr[c - 'a'] = 1;
        }
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << charArr[i] << " ";
    // }

    for (int i = 0; i < 26; i++)
    {
        if (charArr[i] != 0)
            outCont++;
    }

    cout << outCont;
}