#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int ans = 0;
    while(a+b <= c || b+c <= a || c+a <= b) {
        if(a+b <= c) if(a <= b) a++; else b++;
        else if(b+c <= a) if(b <= c) b++; else c++;
        else if(c+a <= b) if(c <= a) c++; else a++;
        ans++;
    }
    cout << ans << endl;
}