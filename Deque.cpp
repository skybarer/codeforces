#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    deque<int> dq;

    int opr; 
    int d, x, p;   
    for (int i = 0; i < q; i++) {
        cin >> opr;
        switch(opr) {
            case 0:
                cin >> d >> x;
                if(d == 0) dq.push_front(x);
                else dq.push_back(x); 
                break;
            case 1: 
                cin >> p;
                cout << dq[p] << endl;
                break;
            case 2: 
                cin >> d;
                if(d == 0) dq.pop_front();
                else dq.pop_back();
                break;
        }
    }
}