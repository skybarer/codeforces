#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        int ele; cin >> ele;
        mn = min(mn, ele);
        mx = max(mx, ele);
    }
    cout << (mx - mn + 1) - n << endl;
}