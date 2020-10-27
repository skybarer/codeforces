#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> V;

    int opr, x;
    for (int i = 0; i < n; i++) {
        cin >> opr;
        switch(opr) {
            case 0:
                cin >> x;
                V.push_back(x);
                break;
            case 1:
                cin >> x;
                cout << V[x] << endl; 
                break;
            case 2: 
                V.pop_back(); 
                break;
        }
    } 
}