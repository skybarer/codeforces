#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;
        long oddDigCount = 0;
        long evenDigitCount = 0;
        long sum = 0;

        for (int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            if (ele % 2 == 0)
                evenDigitCount++;
            else
                oddDigCount++;
            sum += ele;
        }

        // cout << evenDigitCount << " " << oddDigCount << " " << sum << " ";

        if (sum % 2 == 0) {
            if (evenDigitCount == 0 || oddDigCount == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
}