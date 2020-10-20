#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

int alpha[256];

int main() {
    char ch;
    while((ch = getchar()) != EOF){alpha[ch]++;}
    for(int i = 'a'; i <= 'z' ; i++) cout << (char)i << " : " << alpha[i] + alpha[i - 32] << endl;
}