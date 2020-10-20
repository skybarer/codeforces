#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

string s;
string p;
bool exist;

int main() {
    cin >> s >> p;
    s += s;
    int m = s.length();
    int n = p.length();
    for (int i = 0; i < m - n; i++) {
        if(s.substr(i, n) == p) {
            exist = 1;
            break;
        }
    } 

    if(exist) cout << "Yes" << endl;
    else  cout << "No" << endl;
}