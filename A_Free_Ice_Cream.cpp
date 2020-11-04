#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

typedef long long ll;


int main() {
    ll n, x; cin >> n >> x;
    char opr;
    ll value;
    ll d = 0;
    while(n--) {
        cin >> opr;
        switch(opr) {
            case '+': 
                cin >> value;
                x +=value;
                break;
            case '-': 
                cin >> value;
                if(x >= value) x -= value;
                else d++;
                break;
        }
    }
    cout << x << " " << d << endl;
}