#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
using namespace std;
#define endl "\n"

void fastIo() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    //  for fast io operations
    fastIo();

    long k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    long c1 = min(k2, min(k5, k6));
    k2 -= c1;
    long c2 = min(k2, k3);

    cout << c1 * 256 + c2 * 32;
}