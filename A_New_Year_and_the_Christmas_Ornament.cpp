#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, b, r; cin >> y >> b >> r;
    int mn = min({y, b-1, r-2});
    cout << 3 * (mn +1) << endl;
}