#include <iostream>
#include <map>
using namespace std;
#define endl "\n"

void solve() {
    int n;
    cin >> n;

    map<char, int> map;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            map[s[j]]++;
        }
    }

    bool isvalid = 1;

    for (auto i : map) {
        if ((i.second % n != 0)) {
            isvalid = 0;
            break;
        }
    }

    // cout << endl;

    if (isvalid)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }
}