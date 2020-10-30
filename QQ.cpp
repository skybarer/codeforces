#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    for (int i = 1; i < n; i++) {
     for (int j = 1; j < n; j++) {
          cout << i << "x" << j << "=" << i*j << endl;
      }
    }
}