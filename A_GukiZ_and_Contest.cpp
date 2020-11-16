#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);   
    vector<int> rank(n);   
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        rank[i] = arr[i];
    }
    sort(rank.rbegin(), rank.rend());
    map<int, int> ri;


    for (int i = 1; i <= n; i++) {
        if(ri.count(rank[i]) > 0) {
        } else {
            ri.insert({rank[i-1], i});
        }
    }
    
    for (int i = 0; i < n; i++) {
        auto it = ri.find(arr[i]);
        cout << it->second << " ";
    }

}