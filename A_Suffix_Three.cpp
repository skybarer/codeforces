#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        int n = s.size()-1;
        if(s[n] == 'o') cout << "FILIPINO" << endl;
        else if(s[n] == 'u') cout << "JAPANESE" << endl;
        else if(s[n] == 'a') cout << "KOREAN" << endl;
    }    
}