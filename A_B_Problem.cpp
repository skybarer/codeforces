#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int a, b;
int d, r;
double f;
int main() {
    cin >> a >> b;
    d = (a / b);
    r = (a % b);
    f = (double(a) / double(b));
    cout << d << " " << r << " " << fixed << setprecision(5) << f << " " <<  endl;

}