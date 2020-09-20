#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int testCaases;
    cin >> testCaases;

    for (int i = 0; i < testCaases; i++)
    {
        string inpStr;
        cin >> inpStr;

        string outStr = "";
        int n = inpStr.length();

        for (int i = 0; i < n; i++)
        {
            char c = inpStr.at(i);
            if (i == 0 || i == n - 1)
                outStr += c;
            else if (i % 2 == 0)
                outStr += c;
        }

        cout << outStr << endl;
    }
}