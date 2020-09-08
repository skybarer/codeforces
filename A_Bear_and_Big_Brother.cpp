#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int years = 0;

    // cout << a << b;

    for (int i = 1; i <= 10; i++)
    {
        a = 3 * a * i;
        b = 2 * b * i;
        if (a > b)
        {
            years = i;
            break;
        }
    }

    cout << years;
}