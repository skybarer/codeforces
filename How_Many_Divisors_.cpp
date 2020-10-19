#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int a, b, c;
int divisors;
int main() {
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++) if(c % i == 0) divisors++;
    cout << divisors << endl;
}