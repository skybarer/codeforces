#include <algorithm>
#include <iostream>
using namespace std;

int a, b, n, f;
main() {
    cin >> a >> b >> n;
    while (n -= __gcd(f ? b : a, n)) f ^= 1;
    cout << f;
}