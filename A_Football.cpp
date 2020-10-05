#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int i, n, k = 1;

    n = s.length();

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            while (s[i] == s[i + 1]) {
                k++;
                i++;
            }
        }

        if (k >= 7)
            break;
        else
            k = 1;
    }

    if (k >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}