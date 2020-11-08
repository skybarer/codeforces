#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int tc; cin >> tc;

    while(tc--) {
        ll n; cin >> n;
        int cnt2 = 0, cnt3 = 0, cnt5 = 0;
        while(n % 2 == 0) {n /= 2; ++cnt2;}
        while(n % 3 == 0) {n /= 3; ++cnt3;}
        while(n % 5 == 0) {n /= 5; ++cnt5;}
        if(n != 1) cout << -1 << endl;
        else cout << cnt2 + (2 * cnt3) + (3 * cnt5) << endl;
    }
}