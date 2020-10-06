#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    long t1Sum = 0;
    long coins = 0;
    long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n, greater<int>());

    int i = 0;
    while (t1Sum <= sum / 2) {
        t1Sum += arr[i++];
        coins++;
    }

    cout << coins << endl;
}