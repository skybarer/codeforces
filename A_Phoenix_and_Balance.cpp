#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int noOfCoins;
        cin >> noOfCoins;

        int coinSplit = noOfCoins / 2;
        cout << pow(2, (coinSplit + 1)) - 2 << "\n";
    }
}