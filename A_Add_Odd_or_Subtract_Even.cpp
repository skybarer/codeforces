#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        long a, b;
        cin >> a >> b;

        long diff = labs(a - b);

        if (a == b)
            cout << 0 << endl;
        else if (a < b) {
            // need to add
            if (diff % 2 == 0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        } else {
            if (diff % 2 == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}