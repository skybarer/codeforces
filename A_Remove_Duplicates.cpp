#include <bits/stdc++.h>
using namespace std;

list<int> out; 
map<int, int> mp;

int main() {
    int n; cin >> n;
    vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = n-1; i >= 0; i--) {
        int ele = arr[i];
        if(mp.count(ele) == 0) {
            mp.insert({ele, 1});
            out.push_front(ele);
        }
    }

    cout << mp.size() << endl;

    for (int i : out) cout << i << " ";
    

}