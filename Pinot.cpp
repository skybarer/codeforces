#include <iostream>
using namespace std;
#define endl "\n"
#define ll long long

void solve() {
  ll a, b;
  cin >> a >> b;

  if ((a + b) % 3 != 0 || a > 2 * b || b > 2 * a)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}

int main() {

  int testCases;
  cin >> testCases;

  while (testCases--) {
    solve();
  }
}