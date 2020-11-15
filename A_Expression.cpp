#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int ap1 = a*b+c;
    int ap5 = a*(b+c);
    int ap2 = a+b*c;
    int ap6 = (a+b)*c;
    int ap3 = a*b*c;
    int ap4 = a+b+c;
    cout << max({ap1, ap2, ap3, ap4, ap5, ap6}) << endl;
}