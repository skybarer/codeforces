#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
   
    int count = 0;
    for (int i = 4*n; i >= 2; i -= 2) {
       if(count >= n) break;
       cout << i << " ";
       count++;
    }     
    cout << endl;
}

int main() {
    int tc; cin >> tc;
    while(tc--) solve();
}