#include <iostream>
using namespace std;

long long goldHalf(long long num)
{
    if (num <= 4)
        return 0;

    long long half = num / 2;
    if (half % 2 == 0)
        return 1;

    return 0;
}

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        long long goldCoins;
        cin >> goldCoins;

        long long chanekGold = 0, akashGold = 0;
        bool turn = 1;

        // cout << goldCoins << "\n";

        while (goldCoins != 0)
        {

            // player 1
            if (goldCoins % 2 == 0 && !goldHalf(goldCoins))
            {
                chanekGold += goldCoins / 2;
                goldCoins = goldCoins / 2;
            }
            else
            {
                goldCoins--;
                chanekGold++;
            }

            // player 2
            if (goldCoins % 2 == 0 && !goldHalf(goldCoins))
            {
                akashGold += goldCoins / 2;
                goldCoins = goldCoins / 2;
            }
            else
            {
                goldCoins--;
                akashGold++;
            }
            turn = !turn;

            // cout << chanekGold << " " << akashGold << " " << goldCoins << endl;
        }

        // cout << endl;

        cout << chanekGold << "\n";

        // cout << endl;
    }
}