#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int sum = 0, ans = 0;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; sum += arr[i];
        if(arr[i] == 0){
             ans++;
            sum += 1;
        }
    }
    if(sum != 0) cout << ans << endl;
    else cout << ans + 1 << endl;
    
}

int main() {
    int tc; cin >> tc;
    while(tc--) solve();
}