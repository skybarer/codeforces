#include <iostream>
using namespace std;
#define endl "\n"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    long a, b;
    cin >> a >> b;

    cout << factorial(min(a, b)) << endl;

    return 0;
}