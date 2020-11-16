#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, d; cin >> n >> d;
        vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];

        for (int i = 1; i < n; i++) {
            if(d == 0) break;
            int pilesCanMove = min(arr[i], d/i);
            arr[0] += pilesCanMove;
            d -= i*pilesCanMove; 
        }
        
        cout << arr[0] << endl;
    }
}