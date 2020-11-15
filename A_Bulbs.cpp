#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> arr(m+1, 0);
    while(n--) {
        int k; cin >> k;
        for (int i = 0; i < k; i++) {
            int ele; cin >> ele; arr[ele] = 1;
        } 
    }
    int areAllBulbsOn = 1;
    for (int i = 1; i <= m; i++) {
        if(arr[i] != 1) {
            areAllBulbsOn = 0;
            break;
        }
    }
    if(areAllBulbsOn) cout << "YES" << endl;
    else cout << "NO" << endl;
}