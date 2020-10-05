#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"
#define pb push_back

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (a[0] + a[1] <= a.back())
        cout << 1 << " " << 2 << " " << n << "\n";
    else
        cout << -1 << "\n";
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }
}