#include <iostream>
using namespace std;
#define endl "\n"

int main() {
    string s;
    cin >> s;

    long answer = 1, count = 0;
    char l = 'A';
    for (char d : s) {
        if (d == l) {
            ++count;
            answer = max(answer, count);
        } else {
            l = d;
            count = 1;
        }
    }

    cout << answer << endl;

    return 0;
}