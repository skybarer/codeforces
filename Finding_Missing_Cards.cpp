#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int n;
int S[14], H[14], C[14], D[14];


int main() {
    cin >> n;

    while(n--) {
        char ch;
        int num;
        cin >> ch >> num;
        if(ch == 'S') S[num]++;
        else if(ch == 'H') H[num]++;
        else if(ch == 'C') C[num]++;
        else if(ch == 'D') D[num]++;
    }

    for (int i = 1; i < 14; i++) {
        if(S[i] == 0) cout << "S" << " " << i << endl;
    }

    for (int i = 1; i < 14; i++) {
        if(H[i] == 0) cout << "H" << " " << i << endl;
    }

    for (int i = 1; i < 14; i++) {
        if(C[i] == 0) cout << "C" << " " << i << endl;
    }

    for (int i = 1; i < 14; i++) {
        if(D[i] == 0) cout << "D" << " " << i << endl;
    }
}