#include <iostream>
using namespace std;

int main() {
    int noOfCubes;
    cin >> noOfCubes;

    long sum = 0;

    for (size_t i = 1; i <= noOfCubes; i++) {
        sum += i * (i + 1) / 2;
        if (sum >= noOfCubes) {
            if (i == 1)
                cout << 1 << endl;
            else if (sum == noOfCubes)
                cout << i << endl;
            else
                cout << i - 1 << endl;
            break;
        }
    }
}