#include <iostream>
using namespace std;

int maxIndex(int arr[], int i, int j) {
    if (arr[i] > arr[j])
        return i;
    return j;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    int serejaSum = 0, dimaSum = 0;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0;
    int j = n - 1;
    bool random = 1;
    while (i <= j) {
        if (random) {
            if (arr[i] > arr[j]) {
                serejaSum += arr[i];
                arr[i] = -1;
                i++;
            } else {
                serejaSum += arr[j];
                arr[j] = -1;
                j--;
            }
        } else {
            if (arr[i] > arr[j]) {
                dimaSum += arr[i];
                arr[i] = -1;
                i++;
            } else {
                dimaSum += arr[j];
                arr[j] = -1;
                j--;
            }
        }
        random = !random;
    }

    // for (int k = 0; k < n; k++)
    //     cout << arr[k] << " ";

    // cout << i << " " << j << endl;
    cout << serejaSum << " " << dimaSum << endl;
}