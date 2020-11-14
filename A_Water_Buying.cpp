#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int tc; cin >> tc;
    while(tc--) {
        ll n, a, b; cin >> n >> a >> b;
        cout << (n / 2) * min(2 * a, b) + (n % 2) * a  << endl;
    }
}