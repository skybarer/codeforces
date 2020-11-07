#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k; cin >> n >> k;
    vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];
    if(k > 1) k = 2 + k % 2;
    while(k--) {
			int mx = -1000000000;
			for(int i = 0; i < n; i++) {
				mx = std::max(mx, arr[i]);
			}
			for(int i = 0; i < n; i++) {
				arr[i] = mx - arr[i];
			}
	}
    for(int i = 0; i < n; i++) {
			std::cout << arr[i] << (i + 1 == n ? '\n' : ' ');
	}
}

int main() {
    ll testCases; cin >> testCases;
    while (testCases--) { solve(); }
}