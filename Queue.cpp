#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    queue<int> qu[n];
    int op, t, x;
    for (int i = 0; i < q; i++) {
        cin >> op;
        switch(op) {
            case 0: 
                cin >> t >> x;
                qu[t].push(x);
                break;
            case 1: 
                cin >> t;
                if(qu[t].size() != 0)
                cout << qu[t].front() << endl;
                break;
            case 2: 
                cin >> t;
                if(qu[t].size() != 0)
                qu[t].pop();
                break;
        }
    } 
}