#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, x; cin >> n >> x;
        vector<int> A(n); for (int i = 0; i < n; i++) cin >> A[i];
        vector<int> B(n); for (int i = 0; i < n; i++) cin >> B[i];

        sort(A.begin(), A.end());
        sort(B.rbegin(), B.rend());

        bool isValid = 1;

        for (int i = 0; i < n; i++) {
            if(A[i] + B[i] > x) {
                isValid = 0;
                break;
            }    
        }

        if(isValid) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}