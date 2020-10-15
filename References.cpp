#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define endl "\n"
#define ll long long
#define fi first
#define se second
#define pb push_back

long n;
vector<long> cites;

int main() {
    cin >> n;
    cites.resize(n);

    for (int i = 0; i < n; i++) {
         cin >> cites[i];
    }

    sort(cites.rbegin(), cites.rend());

    int h = 0;
    for (int i = 1; i <= n; i++) {
      if (cites[i-1] >= i) h = i;
    }

    cout << h << endl;
    

    return 0;
}