#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    bool isColoured = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char color;
            cin >> color;
            if (color == 'C' || color == 'M' || color == 'Y') {
                isColoured = 1;
                break;
            }
        }
    }

    isColoured ? cout << "#Color" : cout << "#Black&White";
}