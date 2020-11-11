#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
return gcd(b, a % b);
}

void solve() {
    int l, r; cin >> l >> r;
    if((2*l) > r) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int tc; cin >> tc;
    while(tc--) solve();
}