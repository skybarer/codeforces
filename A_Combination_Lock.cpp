#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int moves = 0;

    for (int i = 0; i < n; i++) {
        moves += min(labs(a[i] - b[i]), 10 - labs(a[i] - b[i]));
    }

    cout << moves << endl;
}