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

        cout << n - ((n - y) % x) << endl;
    }
}