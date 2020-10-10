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
    long n;
    cin >> n;

    if (n <= 30) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        if (n == 36 || n == 40 || n == 44) {
            cout << 6 << " " << 10 << " " << 15 << " " << n - 31 << endl;
        } else {
            cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
        }
    }
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