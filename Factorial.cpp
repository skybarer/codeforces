#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pi 3.1415926535897932384626433832795
#define endl "\n"


void solve() {
    ll n;
    cin >> n;
    int ans = 0;
    // for (int i = 5; (n / i) > 0; i += 5) {
    //     int num = i;
    //     while(num % 5 == 0) {
    //       num /= 5;  
    //       ans++;
    //     }
    // }   
    while(n >= 5) {
        ans += n/5;
        n /= 5;
    }
    cout << ans << endl;
}

int main() {
    ll testCases; cin >> testCases;
    while (testCases--) { solve(); }
}