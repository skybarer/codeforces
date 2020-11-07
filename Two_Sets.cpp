#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    long long sum = n * (n + 1) / 2;
    if(sum & 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        // for n = 0, 3 mod 4
        vector<int> v1, v2;
        int j = 0;
        if(n % 4) j = 3;
        else j  = 4;
        for (int i = 0; i < (n - 1) / 4; i++) {
            v1.push_back(4 * i + 1 + j);
            v1.push_back(4 * i + 4 + j);
            v2.push_back(4 * i + 2 + j);
            v2.push_back(4 * i + 3 + j);
        }
        if(n % 4) {
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
        } else {
            v1.push_back(1);
            v1.push_back(4);
            v2.push_back(2);
            v2.push_back(3);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        cout << v1.size() << endl;
        for(auto i : v1) cout << i << " "; cout << endl;
        cout << v2.size() << endl;
        for(auto i : v2) cout << i << " "; cout << endl;

    }
}