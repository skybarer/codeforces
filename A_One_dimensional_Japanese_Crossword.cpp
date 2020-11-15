#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int count = 0; string sb;
    vector<string> ans;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'B') {
            count++;
            sb += s[i];
        } else {
            // cout << sb << " " << count << " ";
            if(count > 0) ans.push_back(sb);
            count = 0;
            sb = "";
        }
    }

    if(s[n-1] == 'B') {
        //  cout << sb << " " << count << " ";
        ans.push_back(sb);
    }
    cout << ans.size() << endl;
    for(auto i : ans) cout << i.size() << " ";

}
