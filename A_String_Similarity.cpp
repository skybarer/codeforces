#include <bits/stdc++.h>
using namespace std;

string numToBinStr(int n, int b) {
    string bin;
    for (int i = b; i >= 0; i--) {
        if(n & (1 << i)) bin.push_back('1');
        else bin.push_back('0');
    }
 return bin;  
}

int main() {
    int testCases; cin >> testCases;
    while(testCases-- > 0) {
        int n;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            cout << s[n-1] ;
        }
        cout << '\n';
    }
}