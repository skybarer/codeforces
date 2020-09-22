#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a < b)
        return b;
    return a;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

void findNearestSquare(int length, int breadth)
{
    int area = 2 * length * breadth;

    for (int i = 0; i <= 10000; i++)
    {
        if (i * i >= area)
        {
            cout << i * i << endl;
            break;
        }
    }
}

int main()
{

    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int length, breadth;
        cin >> length >> breadth;

        int _min = min(length, breadth);
        int _max = max(length, breadth);
        long long ans = max(_min * 2, _max);

        cout << ans * ans << endl;
    }
}