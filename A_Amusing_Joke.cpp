#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string inp = s1 + s2;
    string out = s3;

    sort(inp.begin(), inp.end());
    sort(out.begin(), out.end());
    (inp == out) ? cout << "YES" : cout << "NO";
}