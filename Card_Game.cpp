#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

string a, b;
int n;
int taro, hanako;
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a == b) {taro++; hanako++;}
        else if(a < b) { hanako += 3;}
        else if(a > b) { taro += 3;}
    }    

    cout << taro << " " << hanako << endl;
}