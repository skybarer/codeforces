#include <iostream>
using namespace std;

int main() {
        int n, k, l, c, d, p, nl, np;
        cin >> n >> k >> l >> c >> d >> p >> nl >> np;

        int x, y, z, m;

        x = c * d;
        y = (k * l) / nl;
        z = p / np;
        m = min(x, min(y, z)) / n;

        cout << m << endl;

        return 0;
}