#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
   

    int ca = 0;
    // count of 'a'
    for (int i = 0; i < n; i++) if(s[i] == 'a') ca++;

    if(ca > n/2) cout << n << endl;
    else {
        // need to erase characters to make 'a' count more than n/2
        cout << (2*ca - 1) << endl;
    }
}