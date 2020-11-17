#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string v = "aeiou";

    int ans = 0;
    for (auto c : s) {
        if (find(v.begin(), v.end(), c) != v.end() || (isdigit(c) && (c - '0') % 2))
        ++ans;
     }

    cout << ans << endl;
}