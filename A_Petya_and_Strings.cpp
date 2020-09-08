#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int stringCompareLex(string inp1, string inp2)
{
    if (inp1 < inp2)
        return -1;
    else if (inp1 > inp2)
        return 1;
    else if (inp1 == inp2)
        return 0;
    return 0;
}

int main()
{

    string inp1, inp2;
    cin >> inp1 >> inp2;
    int out = 0;

    transform(inp1.begin(), inp1.end(), inp1.begin(), ::tolower);
    transform(inp2.begin(), inp2.end(), inp2.begin(), ::tolower);
    out = stringCompareLex(inp1, inp2);
    cout << out;
}