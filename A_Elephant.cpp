#include <iostream>
using namespace std;

int calcSteps(int inp)
{
    int steps = 0;

    if (inp >= 5)
    {
        steps += inp / 5;
        inp = inp % 5;
    }
    if (inp >= 4)
    {
        steps += inp / 4;
        inp = inp % 4;
    }
    if (inp >= 3)
    {
        steps += inp / 3;
        inp = inp % 3;
    }
    if (inp >= 2)
    {
        steps += inp / 2;
        inp = inp % 2;
    }
    if (inp >= 1)
    {
        steps += inp / 1;
        inp = inp % 1;
    }

    return steps;
}

int main()
{
    int inp, steps = 0;
    cin >> inp;
    cout << calcSteps(inp);
}