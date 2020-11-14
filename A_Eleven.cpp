#include <bits/stdc++.h>
using namespace std;

void fibonacci();

set<int> fibb;
void fibonacci() {
    fibb.insert(1);
    int f0 = 1, f1 = 1, f2 = 2;
    for (int i = 0; i < 10; i++) {
        f2 = f0 + f1;
        fibb.insert(f2);
        int temp = f1;
        f1 = f2;
        f0 = temp;
    } 
    // for(auto i : fibb) cout << i <<  " "; cout << endl; 
}

int main() {
    int n; cin >> n;
    fibonacci();
    string ans;
    for (int i = 1; i <= n; i++) {
        if(fibb.count(i) > 0) ans += 'O';
        else ans += 'o';
    }
    cout << ans << endl;
}