#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(a == b+c+d || b == a+c+d || c == a+b+d || d == a+b+c || a+b == c+d || a+c == b+d || b+c==d+a) 
        cout << "YES" << endl;
    else
         cout << "NO" << endl;
}