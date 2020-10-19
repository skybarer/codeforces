#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int a, b;
char _operator;
int main() {
    while(true) {
        cin >> a >> _operator >> b;
        if(_operator == '?') break;
        else {
        
            switch(_operator) {
                case '+' : {cout << a + b << endl; break;}
                case '-' : {cout << a - b << endl; break;}
                case '*' : {cout << a * b << endl; break;}
                case '/' : {cout << a / b << endl; break;}
            }
        }
    }
}