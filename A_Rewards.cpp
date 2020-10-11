#include <iostream>
using namespace std;
#define endl "\n"

int main() {
    int a1, a2, a3;  // cups
    int b1, b2, b3;  // medals
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    int shelfs;
    cin >> shelfs;

    int total = 0;
    int cupsTotal = a1 + a2 + a3;
    int medalsTotal = b1 + b2 + b3;

    while (cupsTotal > 0) {
        cupsTotal -= 5;
        shelfs--;
    }
    while (medalsTotal > 0) {
        medalsTotal -= 10;
        shelfs--;
    }

    if (shelfs >= 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}