#include <iostream>
#include <string>
using namespace std;

int main() {
    string inp;
    cin >> inp;

    bool canPlay = 0;

    for (int i = 0; i < 5; i++) {
        string card;
        cin >> card;
        if (card.at(0) == inp.at(0) || card.at(1) == inp.at(1)) {
            canPlay = 1;
            break;
        }
    }

    canPlay ? cout << "YES" : cout << "NO";
}