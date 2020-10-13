#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define endl "\n"
#define ll long long

int n;
vector<pair<int, string>> results;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    string name;
    int score;
    cin >> name >> score;
    results.push_back({-score, name});
  }

  sort(results.begin(), results.end());

  for (auto r : results) {
    cout << r.second << " " << -r.first << "\n";
  }
}