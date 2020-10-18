#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pi 3.1415926535897932384626433832795
#define endl "\n"

ll a, b;
void solve() {
    cin >> a >> b;

    cout << (a ^ b) << endl;
}

int main() {
    ll testCases; cin >> testCases;
    while (testCases--) { solve(); }
}