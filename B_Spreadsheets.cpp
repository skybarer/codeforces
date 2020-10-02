#include <iostream>
#include <string>
using namespace std;

string convertToAlpha(long inp) {
    const int alphaSize(26);
    string output("");
    while (inp > 0) {
        char letter = 'Z';
        long inputMod = inp % alphaSize;
        if (inputMod > 0) {
            letter = 'A' + inputMod - 1;
        } else {
            inp -= alphaSize;
        }
        inp = inp / alphaSize;
        output = letter + output;
    }
    return output;
}

string convertToNumeric(string inp) {
    long output(0);
    const int alphaSize(26);
    for (int k = 0; k < inp.size(); k++) {
        output = alphaSize * output + (inp[k] - 'A' + 1);
    }
    return to_string(output);
}

bool isRXCY(string inp) {
    bool isRxNotation(0);
    if (inp[0] == 'R' && ('0' <= inp[1] && inp[1] <= '9') && 1 < inp.find('C') && inp.find('C') < inp.size() - 1) {
        isRxNotation = 1;
    }
    return isRxNotation;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string s;
        cin >> s;
        // first find the notation given
        if (isRXCY(s)) {
            // then convert to BCXY
            int cPos = s.find('C');
            string rowString = s.substr(1, cPos - 1);
            string colString = s.substr(cPos + 1);
            long col = atol(colString.c_str());
            cout << convertToAlpha(col) << rowString << endl;

        } else {
            // then convert to RXCY
            string rowString = "";
            string colString = "";

            for (int k = 0; k < s.size(); k++) {
                if ('0' <= s[k] && s[k] <= '9') {
                    colString = s.substr(k);
                    break;
                } else {
                    rowString += s[k];
                }
            }
            cout << "R" << colString << "C" << convertToNumeric(rowString) << endl;
        }
    }
}