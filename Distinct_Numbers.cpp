#include <iostream>
#include <set>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        s.insert(ele);
    }

    cout << s.size() << endl;

    return 0;
}