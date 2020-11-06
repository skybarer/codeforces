#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define mp make_pair
#define mod (int)1e9+7
#define eps (double)1e-9
#define INF 1011111111
#define pi  3.1415926535897932384626433832795
#define sz(a)   ((int)(a.size()))
#define all(a)  a.begin(), a.end()
#define cin1(x)   cin >> (x)
#define cin2(x,y)   cin >> (x) >> (y)
#define cin3(x,y,z)   cin >> (x) >> (y) >> (z)
#define cout1(x)   cout << (x) << endl
#define cout2(x,y) cout << (x) <<" "<< (y) << endl
#define cout3(x,y,z) cout << (x) <<" "<< (y) <<" "<< (z) << endl
#define UNIQ(a) a.erase(unique(all(a)), a.end())
#define FREIN(FILE) freopen(FILE,"rt",stdin)
#define FREOUT(FILE) freopen(FILE,"wt",stdout)
#define endl "\n"

template <typename T> T sqr(T a) {return (a) * (a);}
template <typename T> T dist(T x1, T y1, T x2, T y2) {return sqrt(sqr(x1-x2) + sqr(y1-y2));}
template <typename T> T angle(T x1, T y1, T x2, T y2){ return atan2(double(y1-y2) , double(x1-x2));}

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned char uchar;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;

void solve() {
    int n; cin >> n;
    if(n == 2) cout << 2 << endl;
    else cout << n % 2 << endl;
}

int main() {
    ll testCases; cin >> testCases;
    while (testCases--) { solve(); }
}