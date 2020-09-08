#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        string str;
        cin >> str;
        int len = str.length() - 1;
        if (len < 10) {
            cout << str + "\n";
        }
        else {
            cout << str.at(0) + to_string(len - 1) + str.at(len)  + "\n";
        }
    }
}