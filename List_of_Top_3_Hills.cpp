#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int k = 3;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    bool isSorted = 1;
    for (int i = 0; i < k; i++) {
     for (int j = 0; j < n-i-1; j++) {
         if(arr[j] > arr[j+1]) {
             isSorted = 0;
             swap(arr[j], arr[j+1]);
         }
         if(isSorted == 1) break;
      }
    }
    cout << arr[n-1] << endl;
    cout << arr[n-2] << endl;
    cout << arr[n-3] << endl;
}