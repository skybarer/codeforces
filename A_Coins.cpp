#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s; cin >> n >> s;
    int ans = 0;
    while(s > 0) {
        if(s >= n) {
            ans += (s/n);
            s %= n;
        }
        else n--;
    }
    cout << ans << endl;
}