#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
    string out;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            out += ' '; i += 2;
        } else {
            out += s[i]; 
        }
    }

    // for(char c : out) {
    //     if(c != ' ') {
    //         cout << c;
    //     }
    // }
    cout << out << endl;
}