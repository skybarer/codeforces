#include <bits/stdc++.h>
using namespace std;

void leftFill(vector<int> &arr) {
    for (int i = 0; i < 10; i++) {
        if(arr[i] == 0) {
            arr[i] = 1; break;
        }
    }
}

void rightFill(vector<int> &arr) {
    for (int i = 9; i >= 0; i--) {
        if(arr[i] == 0) {
            arr[i] = 1; break;
        }
    }
}

void leaveRoom(vector<int> &arr, int x) {
    arr[x] = 0;
}


int main() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> arr(10, 0);
    for(char c : s) {
        if(c == 'L') leftFill(arr);
        else if(c == 'R') rightFill(arr);
        else leaveRoom(arr, (int)(c - '0'));
    }

    for (int i = 0; i < 10; i++) cout << arr[i];
}