#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        long num;
        cin >> num;

        if (num % 2 == 0)
            cout << num / 2 << endl;
        else
            cout << (num - 1) / 2 << endl;
    }

    return 0;
}
