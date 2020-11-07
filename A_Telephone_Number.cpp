#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        string s; cin >> s;
        int pos = n;
        for (int i = 0; i < n; i++) {
            if(s[i] == '8') {
                pos = i; 
                break;
            }
        }
        // check if we have 10 digits after 8 digit then yes
        if(n - pos >= 11) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}