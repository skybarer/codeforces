#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int main() {
    int n;
    cin >> n;
    int h = n / 3600;
    n = n % 3600;
    int m = n / 60;
    n = n % 60;
    int s = n;

    cout << h << ":" << m << ":" << s << endl;
}