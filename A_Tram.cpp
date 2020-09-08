#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int minSeatsReq = 0, totalPassng = 0, stations;
    cin >> stations;

    for (int i = 0; i < stations; i++)
    {
        int passngLeave, passngEnter;
        cin >> passngLeave >> passngEnter;
        totalPassng += -passngLeave + passngEnter;
        if (minSeatsReq < totalPassng)
        {
            minSeatsReq = totalPassng;
        }
    }

    cout << minSeatsReq;
}