#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long sum = n * 1ll * (n + 1) /2;
     cout << (sum & 1) << endl;    
}