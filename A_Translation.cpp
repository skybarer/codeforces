#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool status = 1;
    string reverse;
    int n1 = s1.length();
    int n2 = s2.length();

    for (int i = n1 - 1; i >= 0; i--)
    {
        reverse += s1.at(i);
    }

    // cout << reverse;

    if (reverse == s2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
