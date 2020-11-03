#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    int swaps = 0;
    for (int i = 0; i < n-1; i++) {
    int mini = i;
     for (int j = i+1; j < n; j++) {
        if(arr[j] < arr[mini]) {
            mini = j;
        }
      }
      if(i != mini) {
        swap(arr[i], arr[mini]);
        swaps++;
      }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if(i != n-1) cout << " ";
    }
    cout << endl;
    cout << swaps << endl;
}