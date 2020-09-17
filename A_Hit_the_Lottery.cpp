#include <iostream>
using namespace std;

int main()
{
    int n, minNumCoins = 0;
    cin >> n;

    while (n != 0)
    {
        if (n >= 100)
        {
            minNumCoins += n / 100;
            n = n % 100;
        }
        else if (n >= 20)
        {
            minNumCoins += n / 20;
            n = n % 20;
        }
        else if (n >= 10)
        {
            minNumCoins += n / 10;
            n = n % 10;
        }
        else if (n >= 5)
        {
            minNumCoins += n / 5;
            n = n % 5;
        }
        else if (n >= 1)
        {
            minNumCoins += n / 1;
            n = n % 1;
        }
    }

    cout << minNumCoins;
}