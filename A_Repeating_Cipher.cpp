#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < n; i++) {
        int d = i * (i + 1) / 2;
        if(d >= n) break;
        cout << s[d];
    }

}