#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ln[] = {4, 7, 44, 77, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
    for (auto x : ln) {
        if (n % x == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}