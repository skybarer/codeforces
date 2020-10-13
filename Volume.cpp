#include <iomanip>
#include <iostream>

using namespace std;
#define endl "\n"
#define ll long long
long double r;

int main() {
  cin >> r;
  cout << setprecision(12)
       << (double(4) / double(3)) * double(3.1415926535) * r * r * r << endl;

  return 0;
}