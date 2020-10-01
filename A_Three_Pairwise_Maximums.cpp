#include <algorithm>
#include <iostream>
using namespace std;

#define ll long long int

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        ll a[3];
        cin >> a[0] >> a[1] >> a[2];

        sort(a, a + 3);

        if (a[1] == a[2]) {
            cout << "YES" << endl;
            cout << a[2] << " " << a[0] << " " << a[0] << endl;
        } else
            cout << "NO" << endl;
    }
}