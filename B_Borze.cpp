#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int n = str.length();

    int i = 0;

    while (i < n)
    {
        char c = str.at(i);
        if (c == '.')
        {
            cout << 0;
        }
        else
        {
            if (i + 1 < n)
            {
                char c1 = str.at(i + 1);
                if (c == '-' && c1 == '.')
                    cout << 1;
                if (c == '-' && c1 == '-')
                    cout << 2;

                i++;
            }
        }

        i++;
    }
}