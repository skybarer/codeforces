#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];

    int diff = 0;
    for (int i = 0; i < n; i++) {
     for (int j = i+1; j < n; j++) {
          if(abs(arr[i]- arr[j]) == 1) diff++;
      }
    }


    if(diff == 0) cout << 1 << endl;
    else cout << 2 << endl;

}

int main() {
    int tc; cin >> tc;
    while(tc--) solve();
}