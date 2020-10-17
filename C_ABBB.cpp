#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define endl "\n"
#define ll long long
#define fi first
#define se second
#define pb push_back


void solve() {
    string s;
    cin >> s;
    int n = s.length();
    string rem;
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if(!rem.empty() && rem.back() == 'A'  && ch == 'B') rem.pop_back();
        else if(!rem.empty() && rem.back() == 'B'  && ch == 'B') rem.pop_back();
        else rem += ch;
    }
    cout << rem.length() << endl;
}

int main() {
    int testCases;
    cin >> testCases;
    while(testCases--) { solve(); }
    return 0;
}