#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int rows, cols;
int arr[101][101];

int main() {
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
     int row_sum = 0, col_sum = 0;
     for (int j = 0; j < cols; j++) {
          cin >> arr[i][j];
          arr[i][cols] += arr[i][j]; // cols sum
     }
    }

    for (int i = 0; i <= rows; i++) {
     for (int j = 0; j <= cols; j++) { 
         cout << arr[i][j];
        if(j < cols) cout << " ";
         arr[rows][j] += arr[i][j]; // row sum
     }
      cout << endl;
    }
}