#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int H, W;

int main() {
    while(true) {
        cin >> H >> W;
        if( H == 0 && W == 0) break;
        for (int i = 0; i < H; i++) {
         for (int j = 0; j < W; j++) {
            if( i == 0 || j == 0 || i == H - 1 || j == W - 1 ) cout << "#";
            else cout << ".";
          }
            cout << endl;
        }
        cout << endl;
    }
}