#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int evenN, oddN;

    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << -(n / 2 + 1);
    }
}