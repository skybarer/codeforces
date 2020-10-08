#include <iostream>
using namespace std;

int n, a[100005], f[100005], lis;
int main() {
    cin >> n;
    cin >> a[1];
    lis = 1;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        cin >> a[i];
        if (a[i] > a[i - 1]) {
            f[i] = f[i - 1] + 1;
        } else {
            f[i] = 1;
        }
        lis = max(lis, f[i]);
    }
    cout << lis;
}