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

int testCases;
ll px1 , py1 , px2, py2;

ll square(ll a) { return a * a; }

void solve() {
    cin >> px1 >> py1 >> px2 >> py2;

    if(px1 == px2 || py1 == py2) cout << labs(py2 -py1)+labs(px2 -px1) << endl;
    else  cout << (labs(px2-px1) + labs(py2-py1)) + 2 << endl;

}

int main() {
    cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}
