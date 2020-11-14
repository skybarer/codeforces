#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, v1, v2, t1, t2; cin >> s >> v1 >> v2 >> t1 >> t2;
    
    int one  = 2*t1 + v1*s;
    int two  = 2*t2 + v2*s;

    // cout << one << " " << two << endl;

    if(one < two) cout << "First" << endl;
    else if(one > two) cout << "Second" << endl;
    else cout << "Friendship" << endl;


}