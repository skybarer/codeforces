#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    bool out = 1;

    int charArr[26] = {0};

    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            char c = s.at(i);

            if (c >= 'a' && c <= 'z')
                charArr[c - 'a']++;
            else if (c >= 'A' && c <= 'Z')
                charArr[c - 'A']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (charArr[i] == 0)
            {
                out = 0;
                break;
            }
        }

        out ? cout << "YES" : cout << "NO";
    }
}