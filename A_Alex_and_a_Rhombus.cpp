#include <iostream>
using namespace std;
#define endl "\n"

void fastIo() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long square(int a) { return a * a; }

void solve() {
    int n;
    cin >> n;

    cout << square(n) + square(n - 1) << endl;
}

int main() {
    //  for fast io operations
    fastIo();

    int testCases = 1;

    while (testCases--) {
        solve();
    }
}