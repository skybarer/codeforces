#include <iostream>
using namespace std;
#define endl "\n"
#define pb push_back

long a, b, c;

void solve() {
    cin >> a >> b >> c;
    long operations = 0;
    long sum = 0;

    while (sum <= c) {
        if (a > b) {
            b += a;
            sum = b;
            operations++;
        } else {
            a += b;
            sum = a;
            operations++;
        }
    }

    cout << operations << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }
}