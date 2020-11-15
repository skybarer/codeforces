#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int n, m, z; cin >> n >> m >> z;
    int lcm = (n*m)/ gcd(n, m);
    cout << z/lcm  << endl;
}