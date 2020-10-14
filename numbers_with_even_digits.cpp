#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define endl "\n"
#define ll long long

int main() {
  vector<int> nums = {555, 901, 482, 1771};
  int n = nums.size();
  int count = 0;

  for (int i = 0; i < n; i++) {
    int dCount = 0;
    int num = arr[i];
    while (num > 0) {
      num /= 10;
      dCount++;
    }
    if (dCount % 2 == 0)
      count++;
  }

  cout << count << endl;

  return 0;
}