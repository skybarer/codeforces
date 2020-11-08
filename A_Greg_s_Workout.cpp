#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(3, 0); 

    for (int i = 0; i < n; i++) {
        int ele; cin >> ele;
        arr[i%3] += ele;
    }

    int maxPos = 0, maxValue = INT_MIN;
    for (int i = 0; i < 3; i++) {
        if(maxValue < arr[i]) {
            maxValue = arr[i];
            maxPos = i;
        }
    }  

    // cout << maxPos << endl;
    if(maxPos == 0) cout << "chest" << endl;
    else if(maxPos == 1) cout << "biceps" << endl;
    else if(maxPos == 2) cout << "back" << endl;

     

}