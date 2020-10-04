#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        long arr[n];

        long sum = 1;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] != arr[i + 1]) {
                sum += 1;
            }
        }

        cout << sum << endl;
    }
}