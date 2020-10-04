#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int noOfRotations = min(s[0] - 'a', 26 - (s[0] - 'a'));

    for (int i = 0; i < s.length() - 1; i++) {
        noOfRotations += min(labs(s[i] - s[i + 1]), 26 - labs(s[i] - s[i + 1]));
    }

    cout << noOfRotations << endl;
}