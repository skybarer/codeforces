#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z; cin >> x >> y >> z;
    int a, b, c; cin >> a >> b >> c;
    int sum = a + b + c;
    int wte = x + y + z;
    if(sum < wte) cout << "NO" << endl;
    else if((a >= x) && (a-x+b >= y) && (a-x+b-y+z) >= z) cout << "YES" << endl;
    else cout << "NO" << endl;


}