#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int ans = 0;
    // red note book required;
    int red = 2 * n;
    if(red % k == 0) ans +=  red/k;
    else ans +=  ((red-1)/k) + 1;
    // green note book required;
    int green = 5 * n;
    if(green % k == 0) ans +=  green/k;
    else ans +=  ((green-1)/k) + 1;
    // blue note book required;
    int blue = 8 * n;
    if(blue % k == 0) ans +=  blue/k;
    else ans +=  ((blue-1)/k) + 1;

    // min no of notebooks
    cout << ans << endl;
}