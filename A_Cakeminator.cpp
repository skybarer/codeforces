#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c; cin >> r >> c;
    vector<vector<char>> arr(r, vector<char> (c, 0));
    for (int i = 0; i < r; i++) {
     for (int j = 0; j < c; j++) {
          cin >> arr[i][j];
      }
    }

    int sbr = 0; // strawberry rowwise
    for (int i = 0; i < r; i++) {
    int count = 0;
     for (int j = 0; j < c; j++) {
       if(arr[i][j] == 'S') count++;
      }
      if(count > 0) sbr++;
    }

    int sbc = 0; // strawberry colwise
    for (int i = 0; i < c; i++) {
    int count = 0;
     for (int j = 0; j < r; j++) {
       if(arr[j][i] == 'S') count++;
      }
      if(count > 0) sbc++;
    }

    cout << r*c - sbr*sbc << endl;
    
}