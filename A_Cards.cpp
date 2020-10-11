#include <iostream>
#include <map>
using namespace std;
#define endl "\n"

int main() {
    int n;
    string s;

    map<char, int> map;
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        map[s[i]]++;
    }

    int onces = 0;
    int zeros = 0;

    for (auto i : map) {
        if (i.first == 'z')
            zeros = i.second;
        else if (i.first == 'n')
            onces = i.second;
    }

    for (int i = 0; i < onces; i++) cout << 1 << " ";
    for (int i = 0; i < zeros; i++) cout << 0 << " ";

    return 0;
}