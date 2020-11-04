#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int a, b; cin >> a >> b;

    vector<bool> primes(b+1, 1);
    primes[0] = 0; primes[1] = 0;
    for (int i = 2; i*i <= b; i++) {
     for (int j = i*i; j <= b; j+=i) {
          primes[j] = 0;
      }
    }

    // for (int i = 0; i <= b; i++) {
    //     if(primes[i] == 1) cout << i << " ";
    // }
    // cout << endl;
    
    // getting the next prime of a

    while(primes[++a] != 1);

    if(primes[b] == 1 && b == a) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}