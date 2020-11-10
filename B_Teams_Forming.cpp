#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    // for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << endl;
    int ans = 0;
    for (int i = 0; i < n-1; i += 2) {
        // cout << abs(arr[i] - arr[i+1]) << " ";
        ans += abs(arr[i] - arr[i+1]);
    }
    cout << ans << endl;
}