#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int n;
vector<int> arr;
int comparisions;

int main() {
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
     for (int j = 0; j < n-i-1; j++) {
          if(arr[j] > arr[j+1]) {
              swap(arr[j], arr[j+1]); 
              comparisions++;
        }
      }
    } 

    for (int i = 0; i < n; i++) {
         cout << arr[i];
         if(i != n - 1) cout << " ";
    }
     cout << endl;
     cout << comparisions << endl;
}