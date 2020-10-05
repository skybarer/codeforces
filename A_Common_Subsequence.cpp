#include <iostream>
#include <set>
using namespace std;
#define endl "\n"
#define pb push_back
int n, m, number;

void solve() {
    cin >> n >> m;
    set<int> a;
    int answer = -1;

    for (int i = 0; i < n; i++) {
        cin >> number;
        a.emplace(number);
    }

    for (int i = 0; i < m; i++) {
        cin >> number;
        if (a.count(number) > 0) {
            answer = number;
        }
    }

    if (answer == -1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << 1 << " " << answer << endl;
    }
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }
}