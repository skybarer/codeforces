#include <iostream>
#include <string>
using namespace std;
#define endl "\n"
#define ll long long

string s;
int count[128];

int main() {
  cin >> s;

  for (int i = 0; i <= s.size(); i++) {
    count[s[i]]++;
  }

  int odds = 0;

  for (char i = 'A'; i <= 'Z'; i++) {
    if (count[i] % 2 == 1) {
      odds++;
    }
  }

  if (odds > 1) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  for (char c = 'A'; c <= 'Z'; c++) {
    cout << string(count[c] / 2, c);
  }

  for (char c = 'A'; c <= 'Z'; c++) {
    if (count[c] % 2 == 1)
      cout << c;
  }

  for (char c = 'Z'; c >= 'A'; c--) {
    cout << string(count[c] / 2, c);
  }

  cout << endl;
}