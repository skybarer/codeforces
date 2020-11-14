#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        if(arr.front() == arr.back()) cout << n << endl;
        else cout << 1 << endl;
    }
}