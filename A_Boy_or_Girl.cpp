#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    set<char> set;
    int n = 0;

    for (int i = 0; i < inp.length(); i++)
    {
        set.insert(inp.at(i));
    }
    n = set.size();

    // cout << set.size();

    if (n % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}