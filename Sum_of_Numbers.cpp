#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

string num;

int main() {
    while(true) {
        cin >> num;
        if(num == "0") break;
        ll digit_sum = 0;
        for (int i = 0; i < num.size(); i++) digit_sum += (num[i] - '0');      
        cout << digit_sum << endl;
    }
}