#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int ele; cin >> ele;
        if(mp.count(ele) == 0) mp.insert({ele, i});
    }

   if(mp.size() >= k) {
        cout << "YES" << endl;
        vector<int> v(n, INT_MAX); for(auto i : mp)  v.push_back(i.second);
        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++) cout << v[i] << " "; 
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}