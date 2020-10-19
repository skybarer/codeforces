#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int W, H, x, y, r;


int main() {
    cin >> W >> H >> x >> y >> r;
    if( (x >= r &&  x <= (W -r)) && (y >= r && y <= (H - r)) ) cout << "Yes" << endl;
    else cout << "No" << endl;
}