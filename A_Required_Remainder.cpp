#include <iostream>
using namespace std;

int main()
{

    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int k = n;

        if (n % x == y)
            cout << n << endl;
        else
        {
            while (k % x != y)
                k--;

            cout << k << endl;
        }
    }
}