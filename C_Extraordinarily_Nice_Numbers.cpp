#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int eFact = 0, oFact = 0;

    for (int i = 1; i * i <= n; i++) {
        if(n % i  == 0) {
            if(n % 2 == 0) eFact++;
            else oFact++;
        }
        if(n != i) {
            if(i % 2 == 0) eFact++;
            else oFact++;
        }
    }

    if(eFact == oFact ) cout << "yes" << endl;
    else cout << "no" << endl;
    
}