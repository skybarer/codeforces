#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;

bool isPrime(ll num) {
    if(num < 2) return 0;
    if(num == 2) return 1;
    bool isValid = 1;

    for (int i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            isValid = 0;
            break;
        }
    } 
  return isValid;
}

int main() {
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ll num; cin >> num;
        if(isPrime(num)) ans++;
    }
    cout << ans << "\n";
}