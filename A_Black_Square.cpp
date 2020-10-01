#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[5];
    cin >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    string s;
    cin >> s;

    long calories = 0;

    for (size_t i = 0; i < s.length(); i++) {
        int pos = s.at(i) - '0';
        calories += arr[pos];
    }

    cout << calories << endl;
}