#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n1, n2;
ll arr[100000];


ll binarySearch(ll num, int n) {
    ll left = 0, right = n;
    while(left <= right) {
        ll mid = left+(right -left) /2;
        if (arr[mid] == num) return num;
        else if(arr[mid] < num) left = mid + 1;
        else right = mid -1;
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
        if(binarySearch(ele, n1) != -1 ) ans++;
    }

    cout << ans << endl;

}