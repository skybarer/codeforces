#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> arr(12, vector<int>(10, 0));
    int n; cin >> n;

    while(n--) {
        int b, f, r, v; cin >> b >> f >> r >> v;
        int row = (3 * (b-1)) + (f-1);
        int col = r-1;
        if(v > 0)  arr[row][col] += v;
        else  arr[row][col] -= (-v);
        // cout << row << " " << col << endl;

    }


    for (int i = 0; i < 12; i++) {
     for (int j = 0; j < 10; j++) {
          cout << " " << arr[i][j];
      }
      cout << endl;
      if((i+1) % 3 == 0 && ((i+1) != 12)) {
        cout << "####################" << endl;
      }
    }
    
}