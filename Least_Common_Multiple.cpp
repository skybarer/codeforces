#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(b > 0) {
        a %=b;
        swap(a, b); 
    }
 return a;
}

int recursiveLcm(vector<int> arr, int n) {
    int ans = arr[0];
    for (int i = 1; i < n; i++) {
        ans = ((arr[i]*ans) / gcd(arr[i], ans));
    }
    return ans;
}

int main() {
    int n; cin >> n;
    int product = 1;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        product *= arr[i];
    }
    cout << recursiveLcm(arr, n) << endl;
}