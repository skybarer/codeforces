#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    list<int> l;
    list<int>::iterator it;
    list<int>::iterator it2;
     it = l.end();

    int opr; 
    int d, x;   
    for (int i = 0; i < q; i++) {
        cin >> opr;
        switch(opr) {
            case 0:
                cin >> x;
                l.insert(it, x);
                it--;
                break;
            case 1: 
                cin >> d;
                if(d > 0) for (int i = 0; i < d; i++) it++;
                else if(d < 0) for (int i = 0; i < ((-1) * d); i++) it--;
                break;
            case 2: 
                it2 = it;
                it2++;
                l.erase(it);
                it = it2;
                break;
        }
    }

    for(it = l.begin(); it != l.end(); it++) cout<< *it <<endl;

}