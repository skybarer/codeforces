#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define endl "\n"
#define ll long long
#define fi first
#define se second
#define pb push_back


string s1="hello";
string s2;
int n;
int main() {
    cin >> s2;
    n = s2.length();
    int i = 0 , j = 0;

    while(i <= n && j < n) {
        if(s1[i] == s2[j] && i <= 4) {
            i++; j++;
        } else j++;
    }

    if(i == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
    

    return 0;
}
