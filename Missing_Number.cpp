#include <iostream>
using namespace std;
#define endl "\n"

int main() {
    long n;
    cin >> n;
    long sum = 0;
    long Tsum = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++) {
        long ele;
        cin >> ele;
        sum += ele;
    }

    cout << Tsum - sum << endl;

    return 0;
}