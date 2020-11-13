#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> vp;
    for (int i = 0; i <= n; i++) {
     for (int j = 0; j <= m; j++) {
          if((i*i + j == n) && (j*j + i == m)) {
              vp.push_back({i, j});
          }
      }
    }

    cout << vp.size() << endl;
}