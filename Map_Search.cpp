#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<string,int> m;

    string key;
    int opr, x;
    while(n--) {
        cin >> opr;
        switch(opr) {
            case 0: 
                cin >> key >> x;
                m[key] = x;
                break;
            case 1: 
                cin >> key;
                cout << m[key] << endl;
                break;
        }
    }
}