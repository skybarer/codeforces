#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int n;
vector<int> v;

int main() {
    cin >> n; v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = n - 1; i > 0; i--) cout << v[i] << " "; cout << v[0] << endl;
}