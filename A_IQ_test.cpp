#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    int even = 0, odd = 0, j, k;
    for (int i = 0; i < n; i++) {
        int ele; cin >> ele;
        if(ele % 2 == 0) {
            j = i+1;
            even++;
        } else {
            k = i+1;
            odd++;
        }
    }
    if(even == 1) cout << j << endl; 
    if(odd == 1) cout << k << endl; 
}