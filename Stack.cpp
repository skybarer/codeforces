#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, q; cin >> n >> q;
    stack<int> st[n];

    int op, t, x;
    for (int i = 0; i < q; i++) {
        cin >> op;
        switch(op) {
            case 0:
                cin >> t >> x;
                st[t].push(x); 
                break;
            case 1: 
                cin >> t;
                if(st[t].size() != 0) {
                    cout << st[t].top() << endl;
                }
                break;
            case 2: 
                cin >> t;
                if(st[t].size() != 0) st[t].pop();
                break;
        }
    }    
}