#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ll a, b, sum, count;
    while (cin >> a >> b) {
        sum = a + b;
        count = 0;
        while(sum > 0) {
            count++;
            sum /= 10;
        }
        cout << count << endl;
    }
}