#include <iostream>
#include <string>
using namespace std;
#define endl "\n"

void fastIo() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void lcs(string a, int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[i] == 'Q' && a[j] == 'A' && a[k] == 'Q') ans++;
            }
        }
    }

    cout << ans << endl;
}

void solve() {
    string s;
    cin >> s;

    lcs(s, s.length());
}

int main() {
    //  for fast io operations
    fastIo();

    int testCases = 1;
    while (testCases--) {
        solve();
    }
}