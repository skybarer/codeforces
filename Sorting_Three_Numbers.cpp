#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"


int main() {
    vector<int> arr(3);
    for (int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    // for (int i = 0; i < 3; i++) cout << arr[i] << " ";
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
}