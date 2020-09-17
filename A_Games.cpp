#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int host[n], guest[n];
    int out = 0;

    for (int i = 0; i < n; i++)
    {
        int h, g;
        cin >> h >> g;
        host[i] = h;
        guest[i] = g;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (host[i] == guest[j])
            {
                out++;
            }
        }
    }

    cout << out;
}