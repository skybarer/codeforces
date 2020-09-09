#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int lowercaseCount = 0, uppercaseCount = 0;
    string s;
    cin >> s;

    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) >= 'a' && s.at(i) <= 'z')
        {
            lowercaseCount++;
        }
        else
        {
            uppercaseCount++;
        }
    }

    if (lowercaseCount >= uppercaseCount)
    {
        // to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        //to uppercse
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    // cout << lowercaseCount << " " << uppercaseCount;

    cout << s;
}