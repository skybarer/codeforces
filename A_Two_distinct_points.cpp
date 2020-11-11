#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l1, r1, l2, r2; cin >> l1 >> r1 >> l2  >> r2;
    vector<int> arr({l1, r1, l2, r2});

    int i1 = 0, j1 = 0;    
    for(auto i : arr) {
        for(auto j : arr) {
            if(l1 <= i && i <= r1 && l2 <= j && j <= r2 && i != j) {
                i1 = i; j1 = j;
            }
        }    
    }
    cout << i1 << " " << j1 << endl;

}

int main() {
    int tc; cin >> tc;
    while(tc--) solve();
}