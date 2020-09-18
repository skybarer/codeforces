#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int amazingPerofrmances = 0;
    int highPerformacePoints = 0;
    int lowPerformacePoints = 0;

    int points[n] = {0};

    for (int i = 0; i < n; i++)
    {
        int point;
        cin >> point;
        points[i] = point;
    }

    highPerformacePoints = points[0];
    lowPerformacePoints = points[0];

    for (int i = 0; i < n; i++)
    {

        if (points[i] > highPerformacePoints)
        {
            highPerformacePoints = points[i];
            amazingPerofrmances++;
        }

        if (points[i] < lowPerformacePoints)
        {
            lowPerformacePoints = points[i];
            amazingPerofrmances++;
        }
    }

    cout << amazingPerofrmances;
}