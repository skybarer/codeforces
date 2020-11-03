#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
        int arr[3]; cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        if(arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}