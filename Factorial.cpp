#include <iostream>
using namespace std;
#define endl "\n"
#define ll long long

ll n;
int count;

main() {
  cin >> n;
  for (int i = 5; n / i >= 1; i *= 5)
    count += n / i;
  cout << count << endl;

  return 0;
}