#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        long arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << arr[2] + arr[0] << endl;
    }
}