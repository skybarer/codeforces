#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int counter = 0;

        if (a > b)
        {
            int quo = a / b;
            if (a % b == 0)
                cout << 0 << "\n";
            else
                cout << (((quo + 1) * b) - a) << "\n";
        }
        else
        {
            cout << b - a << "\n";
        }
    }
}