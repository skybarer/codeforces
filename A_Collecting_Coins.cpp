#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        long a, b, c, d;
        cin >> a >> b >> c >> d;

        long sum = a + b + c + d;

        if (sum % 3 == 0 && (sum / 3) >= a && (sum / 3) >= b && (sum / 3) >= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}