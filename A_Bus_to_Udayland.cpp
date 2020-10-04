#include <iostream>
#include <string>
using namespace std;

int main() {
    int noOfRows;
    cin >> noOfRows;

    bool seatpairExists = 0;

    string bus[noOfRows];

    for (int i = 0; i < noOfRows; i++) {
        string s;
        cin >> s;
        bus[i] = s;
    }

    for (int i = 0; i < noOfRows; i++) {
        string s = bus[i];
        if (s.at(0) == 'O' && s.at(1) == 'O') {
            s[0] = '+';
            s[1] = '+';
            seatpairExists = 1;
            bus[i] = s;
            break;
        } else if (s.at(3) == 'O' && s.at(4) == 'O') {
            s[3] = '+';
            s[4] = '+';
            seatpairExists = 1;
            bus[i] = s;
            break;
        }
    }

    if (seatpairExists) {
        cout << "YES" << endl;
        for (int i = 0; i < noOfRows; i++) {
            cout << bus[i] << endl;
        }
    } else
        cout << "NO" << endl;
}