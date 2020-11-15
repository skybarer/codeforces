#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, r; cin >> a >> b;
    int ans = a;
    while(a > a%b) {
        ans += a/b;
        r = a%b;
        a /= b;
        a += r;
    }
    cout << ans <<endl;
}