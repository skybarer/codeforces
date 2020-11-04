#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        // find and fisrt and last positon of one and count zeros between them
        int l = 0, r = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                l = i;
                break;
            } 
        }

        for (int i = n-1; i >= 0; i--) {
            if(arr[i] == 1) {
                r = i;
                break;
            } 
        }

        if(l == r) cout << 0 << endl;
        else {
            int cZeros = 0;
            for (int i = l+1; i < r; i++) {
                   if(arr[i] == 0) cZeros++; 
            }
            cout << cZeros << endl;            
        }
    }
}