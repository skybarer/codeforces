#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

ll a , b;

ll gcd (ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main () {
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}