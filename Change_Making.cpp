#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
int arr[4] = {25, 10, 5, 1};
int minCoins;

int main() {
    cin >> n;
    int i = 0;
    while(n > 0) {
        if(n >= arr[i]) {
            n -= arr[i];
            minCoins++;
        }
        else i++; 
    }

    cout << minCoins << endl;

}