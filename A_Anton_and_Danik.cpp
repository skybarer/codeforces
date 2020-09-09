#include <iostream>
#include <string>
using namespace std;

int main()
{
    int games;
    cin >> games;
    string s;
    cin >> s;
    int anthon = 0, danik = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'A')
        {
            anthon++;
        }
        else
        {
            danik++;
        }
    }

    // cout << anthon << " " << danik;

    if (anthon > danik)
    {
        cout << "Anton";
    }
    else if (anthon < danik)
    {
        cout << "Danik";
    }
    else if (anthon == danik)
    {
        cout << "Friendship";
    }
}