#include <iostream>
using namespace std;

int main() {
    int noOfEmloyees;
    cin >> noOfEmloyees;

    int lPossibleWays = 0;

    for (size_t i = 1; i < noOfEmloyees; i++) {
        int empDiv = (noOfEmloyees - i) % i;
        if (empDiv == 0)
            lPossibleWays++;
    }

    cout << lPossibleWays << endl;
}