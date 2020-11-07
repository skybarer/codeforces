#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int n; cin >> n;
    vector<pair<int, int>> mp;
    for (int i = 1; i <= n; i++) {
        int ele; cin >> ele;
        mp.push_back({ele, i});
    }
    sort(mp.begin(), mp.end());

    // for (auto i : mp) {
    //     cout << i.first << " " << i.second << endl;
    // }

    for (int i = 0, j = n-1; i < n/2; i++, j--)  {
        cout << mp[i].second << " " << mp[j].second << endl;
    }

}