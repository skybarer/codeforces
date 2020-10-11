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
    long long a, b, c;
    cin >> a >> b >> c;

    if (c % 2 == 0)
        cout << (c / 2) * (a - b) << endl;
    else
        cout << ((c / 2) * (a - b)) + a << endl;
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