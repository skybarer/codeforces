#include <iostream>
using namespace std;
#define endl "\n"
#define pb push_back

long long a, b, c;

void solve() {
    cin >> a >> b >> c;
    cout << (a + b + c) / 2 << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }
}