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
    long a, b;
    cin >> a >> b;

    if ((a == 2 && b == 2) || (a == 1 || b == 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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