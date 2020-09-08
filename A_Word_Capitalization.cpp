#include <iostream>
#include <string>
using namespace std;

int main()
{

    string inp;
    string out = "";
    cin >> inp;

    int n = inp.length();

    if (inp.at(0) >= 'a' && inp.at(0) <= 'z')
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                out += toupper(inp.at(0));
            }
            else
            {
                out += inp.at(i);
            }
        }
    }
    else
    {
        out = inp;
    }

    cout << out;
}
