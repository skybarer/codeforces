#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    int inp[50];
    cin >> n >> k;
    int advP = 0;

    for (int i = 0; i < n; i++) {
        int part;
        cin >> part;
        inp[i] = part;

    }

    for (int i = 0; i < n; i++) {
        if ((inp[i] >= inp[k -1]) && (inp[i] != 0)) {
            advP++;
        }
    }

    cout << advP;

}