#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int m, f, r;

string evaluateGrade(int m, int f, int r) {
    if(m == -1 || f == -1) return "F";
    if(m + f >= 80) return "A";
    if(m + f >= 65 && m + f <= 80) return "B";
    if(m + f >= 50 && m + f <= 65) return "C";
    if(m + f >= 30 && m + f <= 50 && r >= 50) return "C";
    if(m + f >= 30 && m + f <= 50) return "D";
    if(m + f <= 30) return "F";
    return "F";
}

int main() {
    while(true) {
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1) break;
        cout << evaluateGrade(m, f, r) << endl;
    }
}