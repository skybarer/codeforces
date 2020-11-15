#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z; cin >> x >> y >> z;
    int r = x - y;
    if(z > 0 && abs(r) <= z) cout << "?";
    else if(r > 0) cout << "+";
    else if(r < 0)cout << "-";
    else cout << "0";
}