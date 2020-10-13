#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define endl "\n"
#define ll long long

int n;
vector<string> words;

int main() {
  cin >> n;
  words.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> words[i];
    sort(words[i].begin(), words[i].end());
  }
  sort(words.begin(), words.end());

  int count = 1;
  for (int i = 1; i < words.size(); i++) {
    if (words[i - 1] != words[i])
      count++;
  }

  cout << count << "\n";
  return 0;
}