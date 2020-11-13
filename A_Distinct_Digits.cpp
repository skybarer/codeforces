#include <bits/stdc++.h>
using namespace std;

bool isNumUnique(int num) {
    map<int, int> mp;
    while(num > 0) {
        int ld = num % 10;
        if(mp.count(ld) > 0) return 0;
        else  mp[ld]++;
        num /= 10;
    }
return 1;
}

int main() {
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; i++) {
        if(isNumUnique(i)) {
            cout << i << endl;
            return 0;
        } 
    }
    cout << -1 << endl;
}