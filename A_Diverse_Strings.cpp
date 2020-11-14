#include <bits/stdc++.h>
using namespace std;

bool isDiverse(string &s) {
    sort(s.begin(), s.end());
    int n = s.size();
    for (int i = 1; i < n; i++) {
        if(s[i-1]+1 != s[i]) return 0;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if(isDiverse(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}