#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int n;
int arr[5];

int main() {
    cin >> n;
    int cabs = 0;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        arr[ele]++;
    }

    // Choose the 3 and 1 as much as possible. And let 2 combine with themselves.
    // If there are more 1s and 2s, let two 1s combine with 2, and every four 1s take same taxi.

    cabs += arr[4];
    cabs += arr[3];
    arr[1] -= min (arr[3], arr[1]);

    if((2*arr[2] + arr[1]) % 4 == 0) {
        cabs += ((2* arr[2] + arr[1]) / 4);
    } else {
        cabs +=( (2* arr[2] + arr[1]) / 4 +1);
    }

    cout << cabs << endl;
}