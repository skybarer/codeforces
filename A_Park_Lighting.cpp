#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int rows, cols;
        cin >> rows >> cols;

        long product = rows * cols;
        if (product % 2 == 0)
            cout << product / 2 << endl;
        else
            cout << (product / 2) + 1 << endl;
    }
}