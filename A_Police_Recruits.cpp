#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int events;
    cin >> events;

    int casesUnsolved = 0;
    int hiredpolice = 0;

    int arr[events];

    for (int i = 0; i < events; i++)
    {
        int event;
        cin >> event;
        arr[i] = event;

        if (event < 0 && hiredpolice == 0)
        {
            casesUnsolved++;
        }
        else if (event < 0 && hiredpolice > 0)
        {
            hiredpolice--;
        }
        else if (event > 0)
        {
            hiredpolice += event;
        }
    }

    cout << casesUnsolved;
}