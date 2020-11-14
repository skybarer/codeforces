#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n+1); for (int i = 1; i <= n; i++) cin >> arr[i]; 

    for (int i = 1; i < n; i++) {
        if(arr[arr[arr[i]]] == i) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}