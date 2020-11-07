#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        arr[i] = a + b + c + d;
    }

    int ans = 1;
    for (int i = 1; i < n; i++) {
        if(arr[0] < arr[i]) ans++;
    }
    cout << ans << endl;
}