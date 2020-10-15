#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define endl "\n"
#define ll long long
#define fi first
#define se second
#define pb push_back

int n;
vector<int> coins;

int main() {
    cin >> n;
    coins.resize(n);

    for (int i = 0; i < n; i++) {
     cin >> coins[i];       
    }

    sort(coins.begin(), coins.end());

    ll bound = 0;
    for (int i = 0; i < n; i++) {
        if(bound + 1 < coins[i]) {
            cout << bound + 1  << endl;
            return 0;
        }
        bound += coins[i];
    }

    cout << bound + 1  << endl;
    
    return 0;
}