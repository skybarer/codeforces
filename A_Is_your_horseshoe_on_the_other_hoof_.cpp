#include <iostream>
#include <map>
using namespace std;

int main()
{
    long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int noOfHovesReq = 0;
    long arr[4] = {s1, s2, s3, s4};
    map<long, int> map;

    for (int i = 0; i < 4; i++)
    {
        map[arr[i]]++;
    }

    for (auto i : map)
    {
        noOfHovesReq += (i.second - 1);
        // cout << i.first << "   " << i.second << endl;
    }

    cout << noOfHovesReq;
}