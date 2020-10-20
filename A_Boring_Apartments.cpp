#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"


int arr[40] = { 1, 11, 111, 1111 ,
                2, 22, 222, 2222 ,
                3 ,33, 333, 3333,
                4, 44, 444, 4444,
                5 , 55, 555, 5555,
                6 , 66,666, 6666,
                7,77,777,7777,
                8,88,888,8888,
                9,99,999,9999};

int digitCount(int n) {
    int digits = 0;
    while(n > 0) {
        digits++;
        n /= 10;
    }
 return digits;
}

void solve() {
    int n = 0;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < 40; i++) {
        if(arr[i] == n) {
          ans += digitCount(arr[i]);
          break;
        }
        else {
        //   cout << arr[i] << " ";
          ans += digitCount(arr[i]);
        }
    }
    
   cout << ans << endl;
  
}

int main() {
    ll testCases; cin >> testCases;
    while (testCases--) { solve(); }
}