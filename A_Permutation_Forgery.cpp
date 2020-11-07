a#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = n-1; i >= 0 ; i--) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}