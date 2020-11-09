#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> range;
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        range.push_back({l, r});
    }
    int k; cin >> k;
    for (int i = n-1; i >= 0; --i) {
        if(range[i].first <= k) {
            cout << n - i  << endl;
            break;
        }
    }
}