#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

double n;
int main() {
    while(true) {
        cin >> n; 

        if(n == 0) break;
        vector<int> v(n);
        double sum = 0;
        double meanSubRes = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        double mean = (sum / n);
        for (int i = 0; i < n; i++) {
            meanSubRes += pow((v[i] - mean), 2);
        }
        cout << fixed << setprecision(8) << sqrt(meanSubRes / n) << endl;
    }

        
}