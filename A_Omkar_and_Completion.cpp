#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        int ele = 1000 / n;
        for (int i = 0; i < n; i++)
            cout << ele << " ";

        cout << endl;
    }
}