#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int n;
int min_num = 1e6 + 1, max_num = -1e6 - 1;
ll sum;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ele; cin >> ele;
        sum += ele;
        min_num = min(min_num, ele);
        max_num = max(max_num, ele);
     }
    // cout << *min_element(arr.begin(), arr.end()) << " ";
    // cout << *max_element(arr.begin(), arr.end()) << " ";
    // cout << accumulate(arr.begin(), arr.end(), 0) << endl;
    cout << min_num << " " << max_num << " " << sum <<  endl;
    
}