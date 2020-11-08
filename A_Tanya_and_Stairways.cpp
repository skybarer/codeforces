#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> out;
    int count  = 0;
    for (int i = 0; i < n-1; i++) {
        if(arr[i+1] <= arr[i]) {
            count++;
            out.push_back(arr[i]);
        }
    }
    count++;
    out.push_back(arr[n-1]);

    cout << count << endl;
    for(auto i : out) cout << i << " "; cout << endl;
}