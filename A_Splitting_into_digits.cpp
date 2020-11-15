#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    if(n == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
        return 0;
    }

    int i = 9;
    int t = n;
    vector<int> ans;
    while(n > 0 && i > 0) {
        if(n % i == 0 && i != t) {
            ans.push_back(i);
            n -= i;
            // cout << i << " ";
        } else {
            i--;
        }
    }

    cout << ans.size() << endl;
    for(auto i : ans) cout << i << " ";

}