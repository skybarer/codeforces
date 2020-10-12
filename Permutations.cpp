#include <iostream>
using namespace std;
#define endl "\n"

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else {
        if (n % 2 == 0) {
            for (int i = 2; i <= n; i += 2) {
                cout << i << " ";
            }
            for (int i = 1; i < n; i += 2) {
                cout << i << " ";
            }
        } else {
            for (int i = n - 1; i > 0; i -= 2) {
                cout << i << " ";
            }
            for (int i = n; i > 0; i -= 2) {
                cout << i << " ";
            }
        }
    }

    return 0;
}