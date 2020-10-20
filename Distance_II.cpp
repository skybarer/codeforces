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



int n;
int x[100], y[100];
double p_1 = 0, p_2 = 0, p_3 = 0, p_inf = -1;

// ld nDimenisonDist(int x[], int y[], int p) {
//     ld distance = 0;
//     for (int i = 0; i < n; i++) {
//         distance += pow(labs(x[i] -y[i]),p);
//     }
//  return distance;
// }

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];
	for(int i = 0; i < n; i++){
    	p_1 += abs(x[i] - y[i]);
		p_2 += (x[i] - y[i]) * (x[i] - y[i]);
		p_3 += abs((x[i] - y[i]) * (x[i] - y[i]) * (x[i] - y[i]));
		p_inf = (p_inf >= abs(x[i] - y[i])) ? p_inf : abs(x[i] - y[i]);
 	}


    // cout <<fixed <<setprecision(6) <<  pow(nDimenisonDist(x, y, 1), 1) << endl;
    // cout <<fixed <<setprecision(6) <<  pow(nDimenisonDist(x, y, 2), double(1) / double(2)) << endl;
    // cout <<fixed <<setprecision(6) <<  pow(nDimenisonDist(x, y, 3), double(1) / double(3)) << endl;
    // cout <<fixed <<setprecision(6) <<  pow(nDimenisonDist(x, y, double(1) / double(0)), double(0)) << endl;

    cout <<fixed <<setprecision(6) <<  p_1 << endl;
    cout <<fixed <<setprecision(6) <<  sqrt(p_2) << endl;
    cout <<fixed <<setprecision(6) <<  cbrt(p_3) << endl;
    cout <<fixed <<setprecision(6) <<  p_inf << endl;
}