#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int a, b;

int main() {
    while(true) {
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        if(a < b) cout << a << " " << b << endl;
        else cout << b << " " << a << endl;
    }
}