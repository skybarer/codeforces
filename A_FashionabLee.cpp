#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int polygonSides;
        cin >> polygonSides;

        if (polygonSides % 4 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}