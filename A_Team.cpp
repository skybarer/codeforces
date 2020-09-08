#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int out = 0;


    for (int i = 0; i < n; i++) {
        int lnx = 0;
        for (int j = 0; j < 3; j++) {
            int ln;
            cin >> ln;
            lnx += ln;
        }
        if (lnx >= 2) {
            out += 1;
            lnx = 0;
        }
    }
    cout << out;



}