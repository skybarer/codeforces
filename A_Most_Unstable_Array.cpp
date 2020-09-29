#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        long n, m;
        cin >> n >> m;

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n == 2)
                cout << m << endl;
            else
                cout << 2 * m << endl;
        }
    }
}