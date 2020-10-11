#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define endl "\n"

void fastIo() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    if (labs(y - x) % (a + b) == 0)
        cout << labs(y - x) / (a + b) << endl;
    else
        cout << -1 << endl;
}

int main() {
    //  for fast io operations
    fastIo();

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }
}