#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


ll power(ll a, ll b) {
    a %= mod;
    ll res = 1;
    while(b > 0) {
     if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    ll m, n; cin >> m >> n;
    cout << power(m, n) << endl;
}