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
        for (int i = 0; i < H; i++) 
             {
                 for (int j = 0; j < W; j++) { cout << "#"; }
                 cout << endl;
             } 
        cout << endl;
    }
}