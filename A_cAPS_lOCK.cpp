#include <bits/stdc++.h>
using namespace std;


bool isCapsLockON(string &s, int n) {
    // int n = s.size();
    bool isUpperCasefromOne = 1;
    for (int i = 1; i < n; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
        } else {
            isUpperCasefromOne = 0;
            break;
        }
    }
   
    return isUpperCasefromOne;
}


int main() {
    string s; cin >> s;
    int n = s.size();
    if(isCapsLockON(s, n)) {
        string ans;
        for (int i = 0; i < n; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') ans += (char)(s[i]+32);
            else ans += (char)(s[i]-32);
        }
        cout << ans << endl;
    } else {
        cout << s << endl;
    }
}