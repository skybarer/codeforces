#include <iostream>
#define ll long long
using namespace std;

main() {
    ll n, k;
    cin >> n >> k;
    if (n % 2) {
        if (k > n / 2 + 1) {
            k -= n / 2 + 1;
            cout << 2 * k;
        } else
            cout << 2 * (k - 1) + 1;
    } else {
        if (k > n / 2) {
            k -= n / 2;
            cout << 2 * (k);
        } else
            cout << 2 * (k - 1) + 1;
    }
}