#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

string inp, out;

int main() {
    getline(cin, inp);
    int n = inp.size();
    for (int i = 0; i < n; i++) {
        char ch = inp[i];
        if(ch >= 'A' && ch <= 'Z') out += ch + 32;
        else if(ch >= 'a' && ch <= 'z') out += ch - 32;
        else out += ch;
    }
    cout << out << endl;
}