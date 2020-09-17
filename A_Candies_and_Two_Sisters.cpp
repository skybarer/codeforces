#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;

        if (inp % 2 != 0)
            cout << inp / 2 << "\n";
        else
            cout << (inp / 2) - 1 << "\n";
    }
}