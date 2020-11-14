#include <bits/stdc++.h>
using namespace std;

bool isValidIndex(string &a, string &b, string &c, int i) {
    // if(a[i] == b[i] || a[i] == c[i]) return 1;
    // if(b[i] == c[i] || b[i] == a[i]) return 1;
    if(c[i] == a[i] || c[i] == b[i]) return 1;
    return 0;
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        string a, b, c; cin >> a >> b >> c;
        int n = a.size();

        int isPossible = 1;
        for (int i = 0; i < n; i++) {
            if(!isValidIndex(a, b, c, i)) {
                isPossible = 0;
                break;
            }
        }

        if(isPossible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}