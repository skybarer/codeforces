#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define endl "\n"

template <typename T> T sqr(T a) {return (a * a);}
template <typename T> T dist(T x1,T y1,T x2, T y2) {return sqrt(sqr(x1-x2) + sqr(y1-y2));}
template <typename T> T Angle(T x1, T y1, T x2, T y2){ return atan2(double(y1-y2) , double(x1-x2));}


double a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    cout <<fixed <<setprecision(8) << dist(a, b, c, d) << endl;
}