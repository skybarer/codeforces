#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int tc; cin >> tc;
    while(tc--) {
        ll k, n; cin >> k >> n;
        vector<ll> arr(k); for (int i = 0; i < k; i++) cin >> arr[i];
        sort(arr.rbegin(), arr.rend());
        if(n == 0) {
            cout << arr[0]- arr[k-1] << endl;
        } else {
            int m = min(n+1, k);
            for (int i = 1; i < m; i++) arr[0] += arr[i];
            cout << arr[0] << endl;
        }
    }
}