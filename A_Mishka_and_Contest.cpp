#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];
    int l = 0, r = n - 1;
    while(arr[l] <= k) l++;
    while(arr[r] <= k) r--;
    r = n - r - 1;
    if(l + r > n) cout << n << endl;
    else cout << l + r << endl;
}