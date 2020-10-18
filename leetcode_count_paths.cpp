#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int uniquePaths(int m , int n) {
        vector<vector<int>> paths(n, vector<int> (m, 0));

        for (int i = 0; i < m; i++)  paths[n-1][i] = 1;
        for (int i = 0; i < n; i++)  paths[i][m-1] = 1;

        // for(int i = 1; i < m; i++) {
        //     for(int j = 1; j < n; j++) {
        //       dp[i][j] += max(dp[i-1][j] , dp[i][j-1]);
        //     }
        // }

        for (int i = n - 2; i >= 0; i--) {
         for (int j = m - 2; j >= 0; j--) {
              paths[i][j] = paths[i][j+1] + paths[i+1][j];    
          }
        }

        // printing matrix
        for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
                cout << paths[i][j] << " ";     
          }
          cout << endl;
        }
     return paths[0][0];
}

int main() {
    int m = 7 , n = 3;
    uniquePaths(m, n);
}