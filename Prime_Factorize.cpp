#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> primes(n+1, true);

    // seive of erathostanese
    for (int i = 2; i*i <= n; i++) {
        if(primes[i] == 1) {
            for(int j = i*i; j*j <= n; j += i) {
                primes[j] = 0;
            }
        }
    } 

	int count = 0;
    cout << n << ":" << " ";
    for (int i = 2; i <= n; i++) {
            while(primes[i] == 1 && n % i == 0 && n != 1) {
                    n /= i;
                    cout << i << " ";
                    count++;
            }
    }
    if(count == 0) cout <<" " << n;
    cout << " " << endl;
}