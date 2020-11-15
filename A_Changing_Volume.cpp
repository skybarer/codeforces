#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int a, b; cin >> a >> b;
        if(a == b) cout << 0 << endl;
        else {
            int arr[3] = {1, 2, 5};
            int i = 2, moves = 0;
            int num = abs(a- b);
            while(num > 0 && i >= 0) {
                if(num >= arr[i]) {
                    moves += num /arr[i] ;
                    num = num % arr[i];
                } else {
                    i--;
                }
            }
            cout << moves << endl;
        }
        
    }
}