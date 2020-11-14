#include <bits/stdc++.h>
using namespace std;

void solve() {
    // die has faces fron 2 to 7
    int num; cin >> num;
    int faces = 7;
    int ans = 0;
    while(num > 0 && faces > 0) {
        if(num >= faces) {
            num -= faces;
            ans++;
        } else {
            faces--;
        }
    }
    cout << ans << endl;
}

int main() {
    int tc; cin >> tc;
    while(tc--) solve();
}