#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
#define endl "\n"
#define ll long long

int main() {
  vector<int> nums = {1, 1, 0, 1, 1, 1};
  int n = nums.size();

  int pSum = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] == 1) {
      count++;
    } else {
      pSum = max(pSum, count);
      count = 0;
    }
  }
  pSum = max(pSum, count);
  cout << pSum << endl;

  return 0;
}