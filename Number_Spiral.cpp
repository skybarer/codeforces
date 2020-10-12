#include <iostream>
using namespace std;
#define endl "\n"
#define ll long long

void solve() {
    ll y, x;
    cin >> y >> x;
    ll z = max(y, x);
    ll z2 = (z - 1) * (z - 1), ans;

    if (z % 2) {  // if z is odd
        if (y == z) {
            ans = z2 + x;
        } else {
            ans = z2 + 2 * z - y;
        }
    } else {
        if (x == z) {
            ans = z2 + y;
        } else {
            ans = z2 + 2 * z - x;
        }
    }

    cout << ans << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }
}