#include <iostream>
using namespace std;

int calcSteps(int inp)
{
    int steps = 0;
    for (int i = 5; i > 0; i--)
    {
        if (inp >= i)
        {
            steps += inp / i;
            inp = inp % i;
        }
    }
    return steps;
}

int main()
{
    int inp, steps = 0;
    cin >> inp;
    cout << calcSteps(inp);
}