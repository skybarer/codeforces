#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;

    while(tc--) {
        int n, x, a, b; cin >> n >> x >> a >> b;

        // if swaps == 0 (a-b)
        // 

        if(x == 0) cout << abs(a-b) << endl;
        else cout << min(n-1, abs(a-b)+x) << endl;
    }
}