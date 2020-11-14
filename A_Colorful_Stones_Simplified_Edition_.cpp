#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;

    int i = 0;
    for(char c : t) {
        if(s[i] == c) i++;
    }

    cout << i+1 << endl;
} 