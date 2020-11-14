#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    int aw = 0, bw = 0, dw = 0;
    for (int i = 1; i <= 6; i++) {
        if(abs(a-i) < abs(b-i)) aw++;
        else if(abs(a-i) > abs(b-i)) bw++;
        else if(abs(a-i) == abs(b-i)) dw++;
    }

    cout << aw << " " << dw << " " << bw << endl;
}