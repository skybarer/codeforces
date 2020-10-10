#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int p = 0, c = 0;
        bool fl = true;
        forn(i, n) {
            int x, y;
            cin >> x >> y;
            if (x < p || y < c || y - c > x - p)
                fl = false;
            p = x, c = y;
        }
        cout << (fl ? "YES" : "NO") << endl;
    }
    return 0;
}