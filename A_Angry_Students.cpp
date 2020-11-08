#include <bits/stdc++.h>
using namespace std;

bool isLastMoment(string &s, int n) {
    int status = 1;
    for (int i = 0; i < n-1; i++) {
        if(s[i] == 'A' && s[i+1] == 'P') {
            status = 0;
            break;
        }
    }
    return status;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    while(!isLastMoment(s, n)) {
        for (int i = 0; i < n-1; i++) {
            if(s[i] == 'A' && s[i+1] == 'P') {
                s[i+1] = 'A';
                i++;
            }
        }
        ans++;
    }
    cout << ans << endl;
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        solve();
    }
}