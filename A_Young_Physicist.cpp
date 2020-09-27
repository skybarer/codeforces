#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    int xSum = 0, ySum = 0, zSum = 0;

    for (int i = 0; i < testCases; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        xSum += x;
        ySum += y;
        zSum += z;
    }

    if (xSum == 0 && ySum == 0 && zSum == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}