#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int a, b, c; cin >> a >> b >> c;
        long long int res = 0;
        while(b >=1 && c >= 2) {
            b -= 1; 
            c -= 2; 
            res +=3;
        }

        while(a >=1 && b >= 2) {
            a -= 1; 
            b -= 2; 
            res +=3;
        }

        cout << res << endl;
    }
}