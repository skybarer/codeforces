#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> A(n); for (int i = 0; i < n; i++) cin >> A[i];
    sort(A.rbegin(), A.rend());
    int m; cin >> m;
    vector<int> B(m); for (int i = 0; i < m; i++) cin >> B[i];
    sort(B.rbegin(), B.rend());
    cout << A[0] << " " << B[0] << endl;
}