#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long l, r;
        cin >> l >> r;

        if (l * 2 <= r)
            cout << l << " " << 2 * l << endl;
        else
            cout << -1 << " " << -1 << endl;
    }
}