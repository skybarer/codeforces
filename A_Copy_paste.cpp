#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];

        // getting the min element
        int minIndex = 0, minEle = INT_MAX;
        for (int i = 0; i < n; i++) {
            if(minEle > arr[i]) {
                minEle = arr[i]; 
                minIndex = i;
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
        if(i != minIndex)
         while(arr[i] + arr[minIndex] <= k) {
             arr[i] += arr[minIndex];
             ans++;
         }
        }
        cout << ans << endl;
    }

}