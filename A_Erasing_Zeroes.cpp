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
    string s;
    cin >> s;

    int l = 0;
    int r = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            l = i;
            break;
        }
    }

    for (int i = s.length(); i >= 0; i--) {
        if (s[i] == '1') {
            r = i;
            break;
        }
    }

    int count = 0;

    for (int i = l + 1; i < r; i++) {
        if (s[i] == '0') {
            count++;
        }
    }

    cout << count << endl;
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