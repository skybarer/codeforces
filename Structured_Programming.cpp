#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) cout << " " << i;
        else {
            x = i;
            do {
                if(x % 10 == 3) {
                    cout << " " << i; 
                    break;
                }
                x /= 10;
            } while(x);
        }
    }
    cout << endl;
}