#include <iostream>
#include <algorithm>
using namespace std;

long long max(long long a, long long b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{

    int testCases;
    cin >> testCases;

    for (int j = 0; j < testCases; j++)
    {
        int noOfGifts;
        cin >> noOfGifts;

        long long noOfMoves = 0;

        long long candies[noOfGifts] = {0}, oranges[noOfGifts] = {0};
        long long candiesMin = 1000000001, orangeMin = 1000000001;

        for (int i = 0; i < noOfGifts; i++)
        {
            long long candie;
            cin >> candie;
            candies[i] = candie;
            if (candies[i] < candiesMin)
                candiesMin = candies[i];
        }

        for (int i = 0; i < noOfGifts; i++)
        {
            long long orange;
            cin >> orange;
            oranges[i] = orange;

            if (oranges[i] < orangeMin)
                orangeMin = oranges[i];
        }

        // cout << candiesMin << " " << orangeMin << endl;

        for (int i = 0; i < noOfGifts; i++)
        {
            noOfMoves += max(labs(oranges[i] - orangeMin), labs(candies[i] - candiesMin));
        }

        cout << noOfMoves << "\n";
    }
}