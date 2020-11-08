#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, m; cin >> n >> m;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int ele; cin >> ele;
            sum += ele;
        }
        if(sum == m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}