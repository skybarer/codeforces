#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int hours, min;
        cin >> hours >> min;

        cout << (24 * 60) - (hours * 60 + min) << endl;
    }
}