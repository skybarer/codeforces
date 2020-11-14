#include <bits/stdc++.h>
using namespace std;



int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < n; i++) {
            int ele; cin >> ele;
            if(ele & 1) odd.push_back(i+1);
            else even.push_back(i+1);
        }

        if(even.size() >= 1) {
             cout << 1 << endl;
             cout << even[0] << endl; 
        } else if(odd.size() >= 2) {
             cout << 2 << endl;
             cout << odd[0] << " " << odd[1] << endl; 
        } else {
            cout << -1 << endl;
        }
    }
}