#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, k1, k2; cin >> n >> k1 >> k2;
        bool fwins = 0;
        for (int i = 0; i < k1; i++) {
            int ele; cin >> ele;
            if(ele == n) fwins = 1;
        } 
        for (int i = 0; i < k2; i++) {
            int ele; cin >> ele;
        }
        if(fwins) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}