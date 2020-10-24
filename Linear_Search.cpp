#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n1, n2;
ll arr[10000];


ll linearSearch(ll num, int n) {
    for (int i = 0; i < n; i++) {
        if(arr[i] == num) return 1;
    }
  return -1;
}

int main() {
    cin >> n1; 
    for (int i = 0; i < n1; i++) {
        ll ele; cin >> ele; 
        arr[i] = ele;
    }

    cin >> n2;
    ll ans = 0;
    for (ll i = 0; i < n2; i++) {
        ll ele; cin >> ele; 
        if(linearSearch(ele, n1) != -1 ) ans++;
    }

    cout << ans << endl;

}