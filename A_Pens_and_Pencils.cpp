#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int a, b, c, d, k; cin >> a  >> b >> c >> d >> k;
        int x = 0, y = 0;
        //no of pens required
        if(a % c == 0) x = a/c;
        else x = ((a-1)/c )+ 1;
        // no pf pencils requried
        if(b % d == 0) y = b/d;
        else y = ((b-1)/d) + 1;


        if(x + y <= k) cout << x << " " << y << endl;
        else cout << -1 << endl;
        
    }
}