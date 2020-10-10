#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
#define endl "\n"

int main() {
    int n;
    cin >> n;

    int max = 0;

    map<int, int> map;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        map[ele]++;
    }

    for (auto i : map) {
        if (i.second > max) max = i.second;
    }

    cout << n - max << endl;
}