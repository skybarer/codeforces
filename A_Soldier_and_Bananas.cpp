#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int mc = abs((k * w * (w + 1) / 2));

    if (mc <= n)
    {
        cout << 0;
    }
    else if (mc >= n)
    {
        cout << abs(n - mc);
    }
}