#include <iostream>
using namespace std;
#define endl "\n"

int main() {
    int n;
    cin >> n;

    long arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long turns = 0;

    for (int i = 1; i < n; i++) {
        while (arr[i - 1] > arr[i]) {
            arr[i]++;
            turns++;
        }
    }

    cout << turns << endl;
    return 0;
}