#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c; cin >> n >> c;
    vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];
    int wl = 1;
    for (int i = n-1; i > 0; i--) {
        if(arr[i] - arr[i-1] <= c) {
            wl++;
        } else {
            break;
        }
    }
    cout << wl << endl;
}