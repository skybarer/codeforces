#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k; cin >> n >> k;
    if(n == k) cout << "YES" << endl;
    else if((n/k) & 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}