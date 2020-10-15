#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define endl "\n"
#define ll long long
#define fi first
#define se second

int n;
vector<string> list;

int main() {
   
   cin >> n;
   list.resize(n);

   for (int i = 0; i < n; i++) {
        string ele;
        cin >> ele;
        sort(ele.begin(), ele.end());  
        list[i] = ele;      
   }

   sort(list.begin(), list.end());

    int ans = 1;
   for (int i = 1; i < n; i++) {
        if(list[i] != list[i-1]){
            ans++;
        }
   }

   cout << ans << endl;
}