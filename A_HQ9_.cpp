#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    bool status = 0;
    for (int i = 0; i < n; i++) {
        char c = s.at(i);
        if (c == 'H' || c == 'Q' || c == '9') {
            status = 1;
            break;
        }
    }

    if (status)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
