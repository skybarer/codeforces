#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, m; cin >> n >> m;
    ll sum = 0;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum >= m) cout << m << endl;
    else cout << sum << endl;
}

int main() {
    ll testCases; cin >> testCases;
    while (testCases--) { solve(); }
}