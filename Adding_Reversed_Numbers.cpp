#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pi 3.1415926535897932384626433832795
#define endl "\n"

ll a, b;

ll numRev(ll num) {
    ll rev = 0;
    while(num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
  return rev;
}

void solve() {
    cin >> a >> b;
    cout << numRev(numRev(a) +numRev(b))  << endl;
}

int main() {
    ll testCases; cin >> testCases;
    while (testCases--) { solve(); }
}