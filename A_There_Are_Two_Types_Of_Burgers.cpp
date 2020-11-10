#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int b, p, f; cin >> b >> p >> f;
        int h, c; cin >> h >> c;
        b /= 2;
        int ans = 0, hb = 0, cb = 0; 
        if(h > c) {
            hb = min(b, p);
            ans  += hb * h;
            cb = min (b - hb, f);
            ans  += cb * c;
        } else {
            cb = min(b, f);
            ans  += cb * c;
            hb = min (b - cb, p);
            ans  += hb * h;
        }
        cout << ans << endl;
    }
}