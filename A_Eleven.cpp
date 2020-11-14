#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    ll f0 = 0, f1 = 1, f2 = 0; 
    string ans;
    for (int i = 1; i <= n; i++) {
        f2 = f0 + f1;
        if(f2 == i) {
            ans += 'O';
            int temp = f1;
            f1 = f2;
            f0 = temp; 
        }
        else ans += 'o';
    }
    cout << ans << endl;
}