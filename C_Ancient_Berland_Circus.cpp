#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
#define db double

double PI = acos(-1);

double gcd(double a, double b) {
    return a < 0.01 ? b : gcd(fmod(b, a), a);
}

db dist(db a, db b, db c, db d) {
    return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}

int main() {
    double x1, y1, x2, y2, x3, y3, a, b, c, A, B, C, s, i, p, R, n, ans, g;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = dist(x1, y1, x2, y2);
    b = dist(x2, y2, x3, y3);
    c = dist(x3, y3, x1, y1);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    R = (a * b * c) / (4 * s);
    A = 2 * asin(a / (2 * R));
    B = 2 * asin((b) / (2 * R));
    C = 2 * PI - A - B;
    g = gcd(A, B);
    g = gcd(g, C);
    cout << fixed << setprecision(6) << PI * R * R * sin(g) / g;
    return 0;
}
