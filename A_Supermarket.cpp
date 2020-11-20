#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;

   double x, min = INT_MAX;
    for (int i = 0; i < n; i++) {
        double a, b; cin >> a >> b;
        double x = a/double(b);
        if(min > x) min = x;
    }
    cout << fixed << setprecision(8) <<  min * m << endl;
}