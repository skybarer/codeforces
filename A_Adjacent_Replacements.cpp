#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int ele; cin >> ele;
        if(ele & 1) cout << ele << " ";
        else cout << ele-1 << " ";
    }
}